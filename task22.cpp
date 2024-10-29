#include <iostream>
using namespace std;

int main() {
	float weight, height, BMI;
	cout << "Enter wieght(kgs) and height(meters) repectively :" << endl;
	cin >> weight >> height;
	BMI = weight / (height * height);
	cout << "Your BMI is :" << BMI << endl;
}