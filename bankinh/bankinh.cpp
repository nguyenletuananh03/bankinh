#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
	cout << "TINH DIEN TICH VA CHU VI HINH TRONG\n";
	double  dientich, chuvi, bankinh, pi;
	cout << "Nhap ban kinh: "; cin >> bankinh;
	pi = 3, 14;
	chuvi = 2 * M_PI * bankinh;
	dientich = M_PI * bankinh * bankinh;
	cout << "chu vi: " << chuvi << endl;
	cout << "dien tich: " << dientich << endl;
	return 0;
}