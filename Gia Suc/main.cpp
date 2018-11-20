#include<iostream>
#include"GiaSuc.h"
#include"Bo.h"
#include"De.h"
#include"Cuu.h"
using namespace std;

void ThongKeSua(Bo bo, De de, Cuu cuu);
void ThongKeSoLuong(Bo bo, De de, Cuu cuu);

int main() {
	GiaSuc *GS;
	Bo BoDuc(5, 20);
	De DeCai(10, 10);
	Cuu CuuCon(12, 50);
	GS = &BoDuc;
	GS->Output();
	srand(time(NULL));

	system("pause");
	return 0;
}

void ThongKeSua(Bo bo, De de, Cuu cuu) {
	cout << "So Luong Sua Cua Bo: " << bo.GetLuongSua() << " lit, Cua De: " << de.GetLuongSua() << " lit, Cua Cuu: " << cuu.GetLuongSua() << " lit.\n";
}
void ThongKeSoLuong(Bo bo, De de, Cuu cuu) {
	cout << "So Luong Bo: " << bo.GetSoLuong() << " con, De: " << de.GetSoLuong() << " con, Cuu: " << cuu.GetSoLuong() << " con.\n";
}