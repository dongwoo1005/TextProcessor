#ifndef __ALLCAPS_H__
#define __ALLCAPS_H__
#include "decorator.h"
#include <string>

// ConcreteDecorator AllCaps

class AllCaps: public Decorator {

public:
	AllCaps(TextProcessor& tp): Decorator(tp) {} //ctor

	// void setSource(istream *inp)
	// sets the istream source as inp
	void setSource (std::istream* inp); 

	// string getWord()
	// returns the string in the istream source
	// All letters in the string are presented in uppercase.
	// Other characters remain unchanged
	std::string getWord();

	// bool fail() const
	// returns the failed variable in the class field
	bool fail() const;
};

#endif
