#include <iostream>
#include <string> // To use getline

using namespace std;

int main() {
	
	/*int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "You are " << age << " years old.";*/

	// Working with strings
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Hello " << name;

	return 0;
}