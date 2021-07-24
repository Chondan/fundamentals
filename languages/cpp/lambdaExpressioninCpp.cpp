#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

/* Lambda expression in C++

	[capture clause] (parameter) -> return-type
	{
		definition of method
	}

Note: Syntax used for capturing variables
[&] - capture all external variable by reference
[=] - capture all external variable by value
[a, &b] - capture 'a' by value and 'b' by reference

A lambda with empty capture clause [] can access only those variable which are local to it.

*/

// Function to print vector
void printVector(vector<int> v, string label);
// Example 1 (Empty capture clause)
void example1WithEmptyCaptureClause();
// Example 2 (Non-empty capture clause) 
void example2WithNonEmptyCaptureClause();

int main(void) {
	// ----- EMPTY CAPTURE CLAUSE -----
	example1WithEmptyCaptureClause();

	// ----- NON EMPTY CAPRUE CLAUSE
	example2WithNonEmptyCaptureClause();
}

void printVector(vector<int> v, string label = "") {
	cout << "vector "  << label << " -> ";
	for_each(v.begin(), v.end(), [](int i) -> void {
		cout << i << " ";
	});
	cout << endl;
}

void example1WithEmptyCaptureClause() {
	cout << "EXAMPLE 1" << endl;

	vector<int> v = {1, 2, 3, 4, 5, 1, 2, 3};
	printVector(v);

	// ----- Find first number greater than 4 -----
	vector<int>::iterator p = find_if(v.begin(), v.end(), [](int i) -> int {
		return i > 4;
	});
	int num = *p;
	cout << "First number greater than 4 is: " << num << endl;

	// ----- Function to sort vector -----
	sort(v.begin(), v.end(), [](const int &a, const int &b) -> bool {
		return a > b;
	});
	printVector(v);

	// ----- Function to count numbers greater than or equal to 5 -----
	int count_5 = count_if(v.begin(), v.end(), [](int a) -> int {
		return a >= 5;
	});
	cout << "The number of elements greater than or equal to 5 is: " << count_5 << endl;

	// ----- Function for removing duplicate element -----
	vector<int>::iterator last = unique(v.begin(), v.end(), [](int a, int b) -> bool {
		return a == b;
	});
	// Now v is like -> 5 4 3 2 1 x x x
	v.resize(distance(v.begin(), last));
	printVector(v);

	// ----- Accumulate function -----
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int f = accumulate(arr, arr + 10, 1, [](int i, int j) -> int {
		return i * j;
	});
	cout << "Factorial of 10 is: " << f << endl;

	// ----- We can also access function by storing this into variable -----
	auto square = [](int i) -> int {
		return i * i;
	};
	cout << "Square of 5 is: " << square(5) << endl;

	cout << "----------" << endl;
}

void example2WithNonEmptyCaptureClause() {
	cout << "EXAMPLE 2" << endl;
	
	vector<int> v1 = {3, 1, 7, 9};
	vector<int> v2 = {10, 2, 7, 16, 9};

	// access v1 and v2 by reference
	// [&] is equal to [&v1, &v2]
	auto pushInto = [&] (int m) -> void {
		v1.push_back(m);
		v2.push_back(m);
	};
	pushInto(20);
	printVector(v1, "v1");
	printVector(v2, "v2");

	// access v1 by copy
	auto print = [v1] () -> void {
		for (auto p = v1.begin(); p != v1.end(); p++) {
			cout << *p << " ";
		}
		cout << endl;
	};
	print();

	int N = 5;
	// Below snippet find first number greater than N
	// [N] denotes, can access only N by value
	vector<int>::iterator p = find_if(v1.begin(), v1.end(), [N] (int i) -> bool {
		return i > N;
	});
	cout << "First number greater than 5 is: " << *p << endl;

	int X = 3;
	// Function to count numbers greater than or equal to X
	// [=] denotes, can access all variable
	int count_X = count_if(v1.begin(), v1.end(), [=] (int a) -> bool {
		return a >= X;
	});
	cout << "The number of elements greater than or equal to 3 is: " << count_X << endl;

	cout << "----------" << endl;
}
























