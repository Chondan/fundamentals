#include <iostream>
using namespace std;

// ----- Const keyword ----- 
int main(void) {
	// --- Constant Variable ---
	const int a = 10;
	a = 23; // will throw an error
	cout << "a: " << a << endl;

	// --- A pointer that point to const int type variable ---
	const int b1 = 20;
	const int b2 = 25;
	const int *ptr_b = &b1;
	ptr_b = &b2;
	// *b = 30; // will throw an error
	cout << "b: " << *ptr_b << endl;

	// --- To make a pointer constant ---
	int c1 = 30;
	int c2 = 35;
	int *const ptr_c = &c1;

	*ptr_c = c2;
	d = &a; // will throw an error

	cout << "c: " << *ptr_c << endl;

	// --- Const pointer pointing to a const variable ---
	const int d1 = 40;
	const int d2 = 45;
	const int *const ptr_d = &d1;

	*ptr_d = d2; // will throw an error
	ptr_d = &d2; // will throw an error

	cout << "d: " << *ptr_d << endl;

}