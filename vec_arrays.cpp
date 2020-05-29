#include <iostream>
#include "vec_arrays.h"
#include <vector>
using namespace std;

int arrays_revision() {
	int arr[4] = { 11,23,34,45 }; // this is declaring an array of size 4
	// you have to know the size of the array

	int arrayy[3];
	arrayy[0] = 1;
	arrayy[1] = 1;
	arrayy[2] = 1;
	   	  

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}

int vec_fun() {
	vector <int> v = { 12,22,55,77,88,99,100 };
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;

}

int vec_revisions() {
	arrays_revision();
	vec_fun();

	return 0;
}

