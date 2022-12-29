#include <iostream>
#include <string> // To use getline

using namespace std;

int main() {
	
	string color, pluralNoun, celebrity;

	cout << "Enter a color: ";
	getline(cin, color);
	cout << "Enter a plutal Noun: ";
	getline(cin, pluralNoun);
	cout << "Enter a celerbity: ";
	getline(cin, celebrity);

	cout << "Roses are " << color << endl;
	cout << pluralNoun << " are blue" << endl;
	cout << "I love " << celebrity << endl;

	return 0;
}