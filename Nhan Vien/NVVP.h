#pragma once
#include"NhanVien.h"
#include<iostream>
class NVVP: public NhanVien
{
public:
	NVVP();
	NVVP(char HoTen[40], char NgaySinh[20]);	
	void SetSoNgayLV(int SoNgayLV);
	int GetSoNgayLV() const;
	void SetLuong();
	void Output();
	~NVVP();


private:
	int m_SoNgayLV;
};

