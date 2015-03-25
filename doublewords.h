#ifndef __DOUBLEWORDS_H__
#define __DOUBLEWORDS_H__
#include <string>
#include "decorator.h"

// ConcreteDecorator DoubleWords

class DoubleWords: public Decorator {
	bool doubled;	// to indicate if a word has been doubled or not
	std::string currword;	// stores the current word in the stream
public:
	DoubleWords(TextProcessor& tp): Decorator(tp), doubled(false), currword("") {} // ctor 

	// void setSource(istream *inp)
	// sets the istream source as inp
	void setSource (std::istream* inp); 

	// string getWord()
	// returns the string in the istream source
	// with all the words doubled up
	std::string getWord();

	// bool fail() const
	// returns the failed variable in the class field
	bool fail() const;

};

#endif
