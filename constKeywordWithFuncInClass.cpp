#include <iostream>
using namespace std;

// ----- The const member functions -----
class Demo {
	int val;
public:
	Demo(int x = 0) { val = x; } 
	// A const member function can be called 
	// by any type of object.

	// a 'const' keyword will be ban this method
	// in this class from being anything which
	// can attempt to alter any member
	// variables in the object
	int getValue_const_func() const {
		val = 30; // will throw an error
		return val;
	}
	// Non-const functions can be called
	// by non-const objects only.
	int getValue_non_const_func() {
		return val;
	}
};

int main(void) {
	const Demo const_d(10);
	Demo non_const_d(20);

	cout << const_d.getValue_const_func() << endl;
	cout << non_const_d.getValue_const_func() << endl;

	cout << const_d.getValue_non_const_func() << endl; // will throw an error
	cout << non_const_d.getValue_non_const_func() << endl;
}