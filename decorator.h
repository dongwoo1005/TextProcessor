#ifndef __DECORATOR_H__
#define __DECORATOR_H__
#include "textprocess.h"

class Decorator: public TextProcessor{
protected:
	TextProcessor& tp;
	Decorator(TextProcessor& tp): tp(tp){}
	~Decorator(){ delete &tp;}
};

#endif
