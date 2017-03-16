//============================================================================
// Name        : vector_strings.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	char input[10];
	int i;
	vector<string> vec;
	cout << "Enter 5 strings: " << endl;

	cin >> input;
	for(i=0;i<4;i++){
		vec.push_back(input);
		cin >> input;
	}
	for(auto x:vec){
		cout << x << endl;
	}
	return 0;
}
