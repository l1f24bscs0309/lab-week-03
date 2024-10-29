#include <iostream>
using namespace std;

int main() {
	int basic_course = 500;
	int advanced_course = 1000;
	int professional_course = 2000;
	int basic, advanced, professional;
	cout << "Enter courses bought respectively , basic , advanced , professinal :" << endl;
	cin >> basic >> advanced >> professional;
	int discount = 0.85;
	int amount = basic_course * basic + advanced_course * advanced + professional_course * professional;
	int total_amount = amount * discount;
	cout << "Your total amount is :" << total_amount << endl;
}