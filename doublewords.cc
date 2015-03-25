#include "doublewords.h"

// Refer to doublewords.h for implementation details

using namespace std;

void DoubleWords::setSource(istream *in) {
	tp.setSource(in);
}

string DoubleWords::getWord(){
	string s;
	if (!doubled){
		s = tp.getWord();
		doubled = true;
		currword = s;
	}
	else {
		s = currword;
		doubled = false;
		currword = "";
	}
	return s;
}

bool DoubleWords::fail() const { return tp.fail(); }

