#pragma once
#include"GiaSuc.h"
#include<iostream>
#define GioiHanSua	20
class Bo : public GiaSuc
{
public:
	Bo();
	Bo(int SoLuong, int LuongSua);
	void SetSoLuong();
	void Output();
	void ChoSua();
	~Bo();

private:
	char m_TiengKeu[10]="Umm Bo";
};

