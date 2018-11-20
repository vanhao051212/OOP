#pragma once
#include<iostream>
class NhanVien
{
public:
	NhanVien();
	NhanVien(char HoTen[40], char NgaySinh[20]);
	void SetTen();
	void SetNgaySinh();
	void SetNhanVien();
	virtual void SetLuong(int Luong);
	int GetLuong()const;
	virtual void Output();
	
	~NhanVien();

protected:
	char m_HoTen[40];
	char m_NgaySinh[20];
	int m_Luong;
};



