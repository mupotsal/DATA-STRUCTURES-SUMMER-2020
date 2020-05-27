#include <iostream>
#include "revisions.h"
using namespace std;

int nueric_data() {
	float sev = 7.7;
	double si = 7 / 2;
	cout << "sev" << sev << endl;
	cout << "si" << si << endl;
	char eigth = 'f';
	string hello = "hello";
	return 0;
}

string pointerss() {
	int* ptr;
	int x = 1000;
	ptr = &x;
	cout << " This is the location for x" << ptr << endl;
	cout << "The value for x is" << x << endl;

	return "pointers info";
}

int arrayss() {
	int arr[5] = { 2,3,4,5 };
	for (int i = 0; i < sizeof(arr); i++) {
		cout << i << endl;
	}
	return 0;
}

int my_revision() {
	nueric_data();
	pointerss();
	arrayss();
	cout<< " This is the beginning of my reviosn" << endl;
	return 0;

}

