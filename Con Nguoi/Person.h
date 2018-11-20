#pragma once
#include<iostream>

class Person
{
public:
	Person();
	Person(char HoTen[40], char DiaChi[100], char NgaySinh[20], bool GioiTinh);
	void SetPerson();
	void SetNewPerson();
	void Common_Output();
	virtual void Output();
	~Person();


protected:
	char m_HoTen[40];
	char m_DiaChi[100];
	char m_NgaySinh[20];
	bool m_GioiTinh;
};

