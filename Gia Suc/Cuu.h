#pragma once
#include"GiaSuc.h"
#include<iostream>
#define GioiHanSua	5
class Cuu : public GiaSuc
{
public:
	Cuu();
	Cuu(int SoLuong, int LuongSua);
	void SetSoLuong();
	void Output();
	void ChoSua();
	~Cuu();

private:
	char m_TiengKeu[10] = "Beee";
};

