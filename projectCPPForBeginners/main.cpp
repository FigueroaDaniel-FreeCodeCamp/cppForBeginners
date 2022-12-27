#include <iostream>

using namespace std;

int main() {

	//===========================================
	cout << "Girraf Academy \n"; // using \n
	cout << "Hello" << endl;

	//===========================================
	string phrase = "Hello Daniel";
	cout << phrase << endl; // Hello Daniel
	cout << phrase.length() << endl; // 12
	cout << phrase[6] << endl; // D
	phrase[6] = 'C';
	cout << phrase << endl; // Hello Caniel
	cout << phrase.find("Caniel", 0) << endl; // 6 // find recibe 2 argumentos
	string subString = phrase.substr(6, 11);
	cout << subString; // Caniel


	return 0;
}