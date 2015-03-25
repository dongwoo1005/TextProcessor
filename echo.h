#ifndef __ECHO_H__
#define __ECHO_H__
#include <iostream>
#include <string>
#include "textprocess.h"

// concrete component of TextProcessor,
// provides default behaviour

class Echo: public TextProcessor {
    std::istream *source;	// variable to set istream source
    bool failed;			// to indicate if source->fail() is true/false
 public:
    Echo(); // ctor
	// void setSource(istream *inp)
	// sets the istream source as inp
    void setSource(std::istream *inp);
	// string getWord()
	// returns the string in the istream source
    std::string getWord();
	// bool fail() const
	// returns the failed variable in the class field
    bool fail() const;
};

#endif
