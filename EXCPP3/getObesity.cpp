#include "getObesity.h";
using namespace std;
int  getObesity(double bmi) {
	cout << "あなたのBMIは、" << bmi << "です" << endl;
	if (bmi < 18.5) {
		cout << "低体重です" << endl;
		
		return -1;
	}
	else if (bmi < 20) {
		cout << "普通体重です" << endl;
	}
	else if (bmi < 30.0) {
		cout << "肥満(1度)です" << endl;
	}
	else if (bmi < 35.0) {
		cout << "肥満(2度)です" << endl;
	}
	else if (bmi < 40.0) {
		cout << "肥満(3度)です" << endl;
	}
	else {
		cout << "肥満(4度)です" << endl;
	}
	return 0;
}