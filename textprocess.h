#ifndef __TEXTPROCESS_H__
#define __TEXTPROCESS_H__
#include <iostream>
#include <string>

// Abstract base class that defines the interface to the text processor

class TextProcessor {
  public:
    virtual void setSource(std::istream *inp) = 0;
    virtual std::string getWord() = 0;
    virtual bool fail() const = 0;
    virtual ~TextProcessor();
};

#endif
