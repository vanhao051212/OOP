#pragma once
#include"Person.h"
#include<iostream>
class SV: public Person
{
public:
	SV();
	SV(char HoTen[40], char DiaChi[100], char NgaySinh[20], bool GioiTinh);
	void SetInfo();
	void SetNewInfo();
	void Output();
	~SV();

private:
	int m_Nam;
	char m_NienKhoa[15];
	char m_Truong[100];
	char m_Nganh[100];
};

