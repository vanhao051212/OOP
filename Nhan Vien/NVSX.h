#pragma once

#include"NhanVien.h"
#include<iostream>
class NVSX : public NhanVien
{
public:
	NVSX();
	NVSX(char HoTen[40], char NgaySinh[20]);
	void SetLuongCB(int LuongCB);
	void SetSoSP(int SoSP);
	int GetLuongCB()const;
	int GetSoSP() const;
	void SetLuong();
	void Output();
	~NVSX();

private:
	int m_LuongCB =0;
	int m_SoSP =0;

};

