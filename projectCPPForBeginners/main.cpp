#include <iostream>
#include <string> // To use getline

using namespace std;

int main() {
	
	int luckyNums[20] = { 5, 8, 15, 17, 23 };
	luckyNums[10] = 100;
	cout << luckyNums[10];

	return 0;
}