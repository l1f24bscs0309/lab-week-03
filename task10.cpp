#include <iostream>
using namespace std;

int main() {
	int minutes;
	cout << "Enter the time in minutes :" << endl;
	cin >> minutes;
	int hour = minutes / 60;
	int mins = minutes % 60;
	cout << "Time in hours and minutes is : " << hour << " hour" << " : " << mins << " minutes" << endl;
}