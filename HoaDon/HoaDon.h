#pragma once
#include"SanPham.h"
#include<iostream>

class HoaDon: public SanPham
{
public:
	HoaDon();
	void Nhap();
	void Xuat();
	int ThanhTien();
	double Thue();
	int Lai();
	~HoaDon();
private:
	int m_SL=0;
	int m_GiaBan=0;
};

istream& operator >>(istream&cin, HoaDon & HD);
ostream& operator<<(ostream& cout, HoaDon HD);




