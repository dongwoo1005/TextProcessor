#include "dropfirst.h"
using namespace std;

// Refer to dropfirst.h for implementation details

void DropFirst::setSource(istream *in) {
	tp.setSource(in);
}

string DropFirst::getWord(){
	string s = tp.getWord();
	int len = s.length();
	while (n >= len && !tp.fail()){
		s = tp.getWord();
		len = s.length();
		if (n < len){
			break;
		}
	}
	if (n < len){
		s = s.substr(n);
	}
	return s;
}

bool DropFirst::fail() const { return tp.fail(); }
