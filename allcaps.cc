#include "allcaps.h"
#include <locale>
using namespace std;

// Refer to allcaps.h for implmentation details

void AllCaps::setSource(istream *in){
	tp.setSource(in);
}

string AllCaps::getWord(){
	string s = tp.getWord();
	int len = s.length();
	for (int i=0; i<len; ++i){
		if (s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= 'a' - 'A';
		}
	}
	return s;
}

bool AllCaps::fail() const {
	return tp.fail();
}
