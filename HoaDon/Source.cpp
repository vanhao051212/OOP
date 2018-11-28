#include<iostream>
#include"HoaDon.h"
using namespace std;
#define Max	100
void swap(HoaDon &HD1, HoaDon &HD2);
void LaiGiamDan(HoaDon HD[Max], int SoLuong);
void ThueCaoNhat(HoaDon HD[Max], int SoLuong);
int main() {

	HoaDon HD[Max];
	int SoLuongHD;
	/* Nhap DS */
	cout << "Nhap Vao So Luong Hoa Don: ";
	cin >> SoLuongHD;
	for (int i = 0; i < SoLuongHD; i++) {
		cin >> HD[i];
	}
	/***********/
	/* Xuat DS */
	for (int i = 0; i < SoLuongHD; i++) {
		cout << "Stt: " << i << " " << HD[i];
	}
	/***********/
	/* Xuat Hoa Don Theo Lai Giam Dan */
	system("cls");
	LaiGiamDan(HD, SoLuongHD);
	for (int i = 0; i < SoLuongHD; i++) {
		cout << "Stt: " << i << " " << HD[i];
	}
	/***********/
	/* Tinh Tong Tien Cac Hoa Don */
	int TongTien = 0;
	for (int i = 0; i < SoLuongHD; i++) {
		TongTien += HD[i].ThanhTien();
	}
	cout << "\nTong Tien Cac Hoa Don La: " << TongTien;
	/***********/
	/* Thong Tin Hoa Don Co Thue Cao Nhat */
	ThueCaoNhat(HD, SoLuongHD);
	/***********/

	system("pause");
	return 0;
}




void swap(HoaDon &HD1, HoaDon &HD2) {
	HoaDon Temp = HD1;
	HD1 = HD2;
	HD2 = Temp;
}
void LaiGiamDan(HoaDon HD[Max], int SoLuong) {
	for (int i = 0; i < SoLuong - 1; i++) {
		for (int j = i + 1; j < SoLuong; j++) {
			if (HD[j].Lai() > HD[i].Lai()) {
				swap(HD[i], HD[j]);
			}
		}
	}
}

void ThueCaoNhat(HoaDon HD[Max], int SoLuong) {
	int Addr = 0;
	/* Tim Hoa Don Co Thue Cao Nhat */
	for (int i = 1; i < SoLuong; i++) {
		if (HD[i].Thue() > HD[Addr].Thue()) {
			Addr = i;
		}
	}
	/*Tim Va In Ra Nhung Hoa Don Co Thue Cao Nhat */
	for (int i = 0; i < SoLuong; i++) {
		if (HD[i].Thue() == HD[Addr].Thue()) {
			cout << HD[i];
		}
	}
}