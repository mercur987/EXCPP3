#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	const int STD_BMI = 22; // 標準BMI
	double stdWeight;   // 標準体重
	double height;
	double weight;
	double bmi;
	cout << "身長(m)を入力してください:";
	cin >> height;
	cout << "体重(kg)を入力してください:";
	cin >> weight;
	stdWeight = STD_BMI * height * height;
	double getBmi(double weight, double height);
	bmi = getBmi(weight,height);
	int getObesity(double bmi);
	getObesity(bmi);
	cout << "あなたの標準体重は、" << stdWeight << "です" << endl;
	
	return 0;
}