//============================================================================
// Name        : vector.cpp
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
	int input = 0;
	vector<int> vec;
	cout << "Enter integers, -1 to quit: " << endl;

	cin >> input;
	while(input != -1){
		vec.push_back(input);
		cin >> input;
	}
	for(auto x:vec){
		cout << x << endl;
	}
	return 0;
}
