#pragma once
#include"Person.h"
#include<iostream>
class NS: public Person
{
public:
	NS();
	NS(char HoTen[40], char DiaChi[100], char NgaySinh[20], bool GioiTinh);
	void SetInfo();
	void SetNewInfo();
	void Output();
	~NS();


private:
	char m_NgheDanh[40];
	char m_ChuyenMon[40];
};

