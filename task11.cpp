#include <iostream>
using namespace std;

int main() {
	int hours , minutes;
	cout << "Enter number of hours and minutes respectively:" << endl;
	cin >> hours >> minutes;
	int mins = (hours * 60) + minutes;
	cout << "Total time in minutes is : " << mins << endl;
	
}