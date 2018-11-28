#pragma once
#include<iostream>
using namespace std;


class SanPham
{
public:
	SanPham();
	void Nhap();
	void Xuat();
	void SetTen();
	void SetNamSX();
	void SetGia();
	int GetGia()const;
	int GetNamSX()const;
	~SanPham();


protected:
	char m_TenSP[40];
	int m_NamSX;
	int m_GiaThanh;
};

