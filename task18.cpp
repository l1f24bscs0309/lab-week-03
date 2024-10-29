#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "Enter a number :" << endl;
	cin >> input;
	int input_02 = input + 1;
	int input_03 = input + 2;
	int input_04 = input + 3;
	int input_05 = input + 4;
	int input_06 = input + 5;

	cout << "No \t Square \t Cube \n";
	cout << input << "\t" << input * input << "\t" << input * input * input << endl;
	cout << input_02 << "\t" << input_02 * input_02 << "\t" << input_02 * input_02 * input_02 << endl;
	cout << input_03 << "\t" << input_03 * input_03 << "\t" << input_03 * input_03 * input_03 << endl;
	cout << input_04 << "\t" << input_04 * input_04 << "\t" << input_04 * input_04 * input_04 << endl;
	cout << input_05 << "\t" << input_05 * input_05 << "\t" << input_05 * input_05 * input_05 << endl;
	cout << input_06 << "\t" << input_06 * input_06 << "\t" << input_06 * input_06 * input_06 << endl;


}