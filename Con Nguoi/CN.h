#pragma once
#include"Person.h"
#include<iostream>
class CN: public Person
{
public:
	CN();
	CN(char HoTen[40], char DiaChi[100], char NgaySinh[20], bool GioiTinh);
	void SetInfo();
	void SetNewInfo();
	void Output();
	~CN();

private:
	char m_NoiLV[100];
	int m_Luong;
};

