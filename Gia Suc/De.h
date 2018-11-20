#pragma once
#include"GiaSuc.h"
#include<iostream>
#define GioiHanSua	10
class De : public GiaSuc
{
public:
	De();
	De(int SoLuong, int LuongSua);
	void SetSoLuong();
	void Output();
	void ChoSua();
	~De();

private:
	char m_TiengKeu[10] = "Gau Gau";
};

