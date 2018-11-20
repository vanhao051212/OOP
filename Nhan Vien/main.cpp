#include<iostream>
#include"NhanVien.h"
#include"NVSX.h"
#include"NVVP.h"

using namespace std;

int main() {
	NhanVien a;
	NVSX b;
	b.SetNhanVien();
	b.SetLuongCB(20000);
	b.SetSoSP(15);
	b.SetLuong();
	a = b;
	a.Output();

	system("pause");
	return 0;
}