#include<iostream>
#include"DaThucBacn.h"

using namespace std;

int main()
{
	DaThucBacn fx,gx;

	cout << "Nhap Vao Da Thuc fx: \n";
	cin >> fx;
	cout << "Nhap Vao Da Thuc gx: \n";
	cin>> gx;
	cout << fx;
	cout << gx;
	DaThucBacn hx = fx + gx;
	cout <<"Ket Qua: "<< hx;
	int GiaTri = hx(5);
	cout << "Gia Tri Cua hx voi x=5: " << GiaTri;
	
	system("pause");
	return 0;
}