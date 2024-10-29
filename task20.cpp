#include <iostream>
using namespace std;

int main() {
	int gourmet_meals = 50;
	int standard_meals = 30;
	int fast_meals = 20;
	int sold_gourmet, sold_standard, sold_fast;
	cout << "Enter meals sold gourmet , standard , fast respecticely :" << endl;
	cin >> sold_gourmet >> sold_standard >> sold_fast;
	int total_amount = gourmet_meals * sold_gourmet + standard_meals * sold_standard + fast_meals * sold_fast;
	cout << "Total revenue generated :" << total_amount;

}