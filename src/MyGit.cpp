//============================================================================
// Name        : MyGit.cpp
// Author      : Yang
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Declaration
int sum();
int max();

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	max();
	return 0;
}

// get two numbers from console and return the sum
int sum() {
	int a, b, sum;
	cin >> a >> b;
	sum = a + b;
	cout << "a+b=" << sum << endl;
	return sum;
}
// get two numbers from console and return the bigger one
int max() {
	int a, b, m;
	cin >> a >> b;
	if (a > b)
		m = a;
	else
		m = b;
	cout << "max=" << m << endl;
	return m;
}
