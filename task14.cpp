#include <iostream>
using namespace std;

int main() {
	int class_a = 15;
	int class_b = 12;
	int class_c = 9;
	int a_sold, b_sold, c_sold;
	cout << "Enter the seats tickets sold respectively , A ,B , C :" << endl;
	cin >> a_sold >> b_sold >> c_sold;
	int amount_generated; 
	int amount_a = class_a * a_sold;
	int amount_b = class_b * b_sold;
	int amount_c = class_c * c_sold;
	amount_generated = amount_a + amount_b + amount_c;
	cout << "Total amount earned :" << amount_generated << endl;


}