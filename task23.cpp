#include <iostream>
using namespace std;

int main() {
	float radius, height, volume, area;
	float pi = 3.14;
	cout << "Enter radius and height respectively : " << endl;
	cin >> radius >> height;
	volume = pi * (radius * radius) * height;
	area = 2 * pi * radius * ( radius + height);
	cout << "area of cylinder is: " << area << endl << "Volume of cylinder is " << volume << endl;

}