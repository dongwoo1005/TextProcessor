#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#include "textprocess.h"
#include "echo.h"
#include "decorator.h"
#include "allcaps.h"
#include "dropfirst.h"
#include "count.h"
#include "doublewords.h"

// TextProcessor with Decorators (DropFirst, DoubleWords, AllCaps, and Count)
// Written by Dongwoo Son
// Written for CS246 a4q3b
// on March 20, 2015

int main () {
  string s;

  while(1) {
	// take a line from cin and store it in string s
    getline(cin,s);
	// terminate when cin fails
    if (cin.fail()) break;
	// put s in the istringstream iss
    istringstream iss(s);

	// take out the first word from iss and store it in fname
    string fname;
    iss >> fname;

	// set istream in as cin if fname is stdin; otherwise put fname into ifstream	
    istream *in = (fname == "stdin") ? &cin : new ifstream(fname.c_str());

    TextProcessor *tp = new Echo;
    string dec;

	// Take every word(dec) in iss
    while (iss >> dec) {
      if (dec == "dropfirst") {
        int n;
        iss >> n;
		tp = new DropFirst(*tp,n);
      }
      else if (dec == "doublewords") {
		tp = new DoubleWords(*tp);
      }
      else if (dec == "allcaps") {
		tp = new AllCaps(*tp);
      }
      else if (dec == "count") {
        char c;
        iss >> c;
		tp = new Count(*tp,c);
      }
   } 

   tp->setSource(in);

   string word;

   while (word = tp->getWord(), !tp->fail()) {
     cout << word << endl;
   }

   if (in != &cin) delete in;

   delete tp;
  }
} // end main
