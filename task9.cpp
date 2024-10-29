#include <iostream>
using namespace std;

int main() {
	float length;
	float width;
	cout << "Enter the length and width of rectangle respectively :" << endl;
	cin >>length >> width;
	float area = length * width;
	float parameter = 2 * (length * width);
	cout << "Area of rectangle is " << area << endl;
	cout << "Parameter of rectangle is " << parameter << endl;
}