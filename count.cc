#include "count.h"
#include <sstream>
using namespace std;

// Refer to count.h for implementation details

void Count::setSource(istream *in){
	tp.setSource(in);
}

string Count::to_string(int n){
	ostringstream ss;
	ss << n;
	return ss.str();
}

string Count::getWord(){
	string s = tp.getWord();
	int len = s.length();
	for (int i=0; i<len; ++i){
		if (s[i] == c){
			count++;
			s = s.substr(0,i) + to_string(count) + s.substr(i+1);
		}
	}
	return s;
}

bool Count::fail() const {
	return tp.fail();
}
