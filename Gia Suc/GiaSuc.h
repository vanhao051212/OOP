#pragma once
#include<iostream>
#include<ctime>
#define SoConMax	20
class GiaSuc
{
public:
	GiaSuc();
	GiaSuc(int SoLuong, int LuongSua);
	virtual void SetSoLuong();
	int GetSoLuong()const;
	int GetLuongSua()const;
	void CommonOutput() const;
	virtual void Output();
	void SinhCon();
	~GiaSuc();
protected:
	int m_SoLuong=0;
	int m_LuongSua=0;
	bool m_Stt_Hungry = false;
};

