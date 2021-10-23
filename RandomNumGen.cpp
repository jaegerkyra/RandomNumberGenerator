/* Based on an algorithm example from https://www.freecodecamp.org/news/random-number-generator/
1. Accept some initial input number, that is a seed or key.
2. Apply that seed in a sequence of mathematical operations to generate the result. That result is the random number.
3. Use that resulting random number as the seed for the next iteration.
4. Repeat the process to emulate randomness.
*/

#include <iostream>
#include <string>
using namespace std;

string Input;

void randNumGen() {
	int x = Input.length();
	//int y = alphabetNum();
	x = (x * x) / 2;
	cout << x << endl;
	//cout << y << endl;

}
//Trying to work in a way to turn the first character of word into a number to be used for seed of random number generator
/*void alphabetNum() {
	char x = Input[0];
	if (x == 'a') {
		x = 1;
	}
	else if (x == 'b') {
		x = 2;
	}
	else {
		x = 3;
	}
}*/

int main() {

	cout << "This is a random number generator" << endl;
	cout << "Enter a word to be used as a seed: " << endl;

	cin >> Input;

	randNumGen();

	return 0;
}
