#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main() {
	
	sayHi("Daniel", 30);
	sayHi("Ange", 33);

	return 0;
}

void sayHi(string name, int age) {
	cout << "Hello " << name << " you are " << age << endl;
}