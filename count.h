#ifndef __COUNT_H__
#define __COUNT_H__
#include "decorator.h"
#include <string>

// Concrete Decorator Count

class Count: public Decorator {
	char c;		// character c to be counted
	int count;	// current count of the charcter c
	// string to_string(int n)
	// takes integer n as a input to convert it into the string form.
	std::string to_string(int n);	

public:
	Count(TextProcessor& tp, char c): Decorator(tp), c(c), count(0) {}  // ctor
	
	// void setSource(istream *inp)
	// sets the istream source as inp
	void setSource (std::istream* inp); 

	// string getWord()
	// returns the string in the istream source
	// The occurence of the character c in the string is replaced with count number
	std::string getWord();

	// bool fail() const
	// returns the failed variable in the class field
	bool fail() const;
};

#endif
