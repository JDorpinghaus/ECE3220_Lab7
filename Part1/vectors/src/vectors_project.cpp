// Lab7_vectors.cpp
// This program shows some simple vector examples, and asks for simple tasks.
// Reference: Lippman, section 3.3

// Author: Luis Rivera

// IMPORTANT NOTE: YOU MAY NEED TO COMPILE ADDING THE FOLLOWING FLAG: -std=c++11
//                 OR: -std=c++0x
// Example:  g++ Lab7_vectors.cpp -o Lab7_vectors -std=c++11
//      or:  g++ Lab7_vectors.cpp -o Lab7_vectors -std=c++0x
// Some initialization methods and other things are not supported by the old standard.

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Main function. Shows a few examples. Complete the assignments stated in the comments.
int main()
{
	vector<int> ivec1(5), ivec2;
	vector<double> dvec1{5.1}, dvec2(5,1.5);
	vector<string> svec1 = {"hello", "world"};
	// vector<myClass> myCvec;	// you can have vectors of objects
	// in general: vector<Type> vec;	// vector is a template

	for(int i = 0; i < ivec1.size(); i++)
		cout << ivec1[i] << endl;
	cout << "\n------------------------------------------------------------------" << endl;

	for(auto i:ivec1)	// This is equivalent to the above for loop
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;

	for(auto i:dvec1)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;

	for(auto i:dvec2)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;

	for(auto i:svec1)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;

	cout << "Original size: " << ivec2.size() << endl;
	ivec2.push_back(50);
	cout << "New size: " << ivec2.size() << "\nAdded element: " << ivec2[0] << endl;
	cout << "\n------------------------------------------------------------------" << endl;

// ***********************************************************************
// Try all the ways to initialize a a vector shown in Table 3.4. Use the
// vectors above and/or declare new vectors.
// Some of those operations have already been used, but write your
// own examples.

// Do exercises 3.14 and 3.15 from Lippman (page 102)

// Try all the vector operations shown in table 3.5. Use the vectors above
// or define new ones. Try different types.
// ***********************************************************************

	vector<int>vv1;
	vector<int>vv2(vv1);
	vector<int>vv3(5, 5);
	vector<int>vv4(10);
	vector<int>vv5{1,2,3};
	vector<int>vv6 = {4,5,6};

	if(vv1.empty())
		cout << "empty" << endl;
	cout << vv3.size() << endl;
	vv6.push_back(5);
	cout << vv6[3];
	vv6 = vv5;
	vv1 = {5,7,8};
	if(vv1 != vv2)
		cout << "not equal" << endl;

	//3.14
	int num;
	string input = "";
	int i;
	vector<int> vec;
	cout << "Enter 5 ints: " << endl;
	getline(cin, input);
	stringstream myStream(input);
	myStream >> num;
	vec.push_back(num);
	for(i=0;i<4;i++){
		getline(cin, input);
		stringstream myStream(input);
		myStream >> num;
		vec.push_back(num);
	}
	for(auto x:vec){
		cout << x << endl;
	}

	//3.15
		char input2[10];
		int i2;
		vector<string> vec2;
		cout << "Enter 5 strings: " << endl;

		cin >> input2;
		vec2.push_back(input2);
		for(i2=0;i2<4;i2++){
			cin >> input2;
			vec2.push_back(input2);
		}
		for(auto x:vec2){
			cout << x << endl;
		}
		return 0;


	return 0;
}
