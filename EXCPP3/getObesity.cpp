#include "getObesity.h";
using namespace std;
int  getObesity(double bmi) {
	cout << "���Ȃ���BMI�́A" << bmi << "�ł�" << endl;
	if (bmi < 18.5) {
		cout << "��̏d�ł�" << endl;
		
		return -1;
	}
	else if (bmi < 20) {
		cout << "���ʑ̏d�ł�" << endl;
	}
	else if (bmi < 30.0) {
		cout << "�얞(1�x)�ł�" << endl;
	}
	else if (bmi < 35.0) {
		cout << "�얞(2�x)�ł�" << endl;
	}
	else if (bmi < 40.0) {
		cout << "�얞(3�x)�ł�" << endl;
	}
	else {
		cout << "�얞(4�x)�ł�" << endl;
	}
	return 0;
}