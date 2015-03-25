#ifndef __DROPFIRST_H__
#define __DROPFIRST_H__
#include <string>
#include "decorator.h"

// ConcreteDecorator DropFirst

class DropFirst: public Decorator {
	int n;	// n characters to be dropped from each word
public:
	DropFirst(TextProcessor& tp, int n): Decorator(tp), n(n) {} // ctor 

	// void setSource(istream *inp)
	// sets the istream source as inp
	void setSource (std::istream* inp); 

	// string getWord()
	// returns the string in the istream source
	// with the first n characters dropped from each word.
	// If n is greater than the length of some word, the following word is ignored.
	std::string getWord();

	// bool fail() const
	// returns the failed variable in the class field
	bool fail() const;
};

#endif
