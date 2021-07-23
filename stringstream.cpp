#include <sstream>
#include <iostream>
using namespace std;

void readWord(stringstream &ss) {

}

int main(void) {

	// A stringstream class in C++ is a Stream Class
	// to operate on strings.

	// The stringstrem class implements the input/output
	// operations on memory base streams i.e. string.

	// The stringstream class in C++ allows a string
	// object to be treated as a stream. It is used
	// to operate on strings. By treating the strings
	// as streams we can perfrom extraction and 
	// insertion operation from/to string just like
	// cin and cout streams.

	// ----- Basic methods -----
	string euroSemiFinals1 = "06JULY2021 ITALY VS SPAIN";
	stringstream ss(euroSemiFinals1);

	// >> - read something from the stringstream object
	string word; // to store individual words
	ss >> word;
	cout << "Date: " << word << endl;

	while (ss >> word) {
		cout << word << " ";
	}
	cout << endl << endl;

	// clear() - to  clear the stream
	ss.clear();

	string euroSemiFinals2 = "07JULY2021 ENGLAND VS DENMARK";
	ss.str(euroSemiFinals2);
	ss >> word;
	cout << "Date: " << word << endl;

	while (ss >> word) {
		cout << word << " ";
	}
	cout << endl;

}