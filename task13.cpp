#include <iostream>
using namespace std;

int main() {
	int wheat, rice, sugar;
	int wheatQ;
	int rice_Quant;
	int sugar_Quant;
	cout << "Enter the price of wheat , rice , sugar respectively :" << endl;
	cin >> wheat >> rice >> sugar;
	cout << "Enter the quantity of wheat , rice , sugar respectively :" << endl;
	cin >> wheatQ >> rice_Quant >> sugar_Quant;
	int wheat_vlaue = wheat * wheatQ;
	int rice_value = rice * rice_Quant;
	int sugar_value = sugar * sugar_Quant;
	cout << "Value of eheat is : " << wheat_vlaue << endl << "Value of rice is : " << rice_value << endl << "Value of sugar is :" << sugar_value << endl;
}