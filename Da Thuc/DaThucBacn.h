#pragma once
#include <iostream>
#include<math.h>
#define Max	100
/******** Exampel *********/
//	a0x^0 + a1x^1 +...+ anx^n = 0
//  m_HeSo[]={a0, a1 ,..., an}
/**************************/
class DaThucBacn
{
public:
	DaThucBacn();
	DaThucBacn(int Bac);
	DaThucBacn(int HeSo[Max], int Bac);
	void SetBac();
	void SetBac(int Bac);
	void SetDaThuc();
	void SetDaThuc(int Bac);
	void SetDaThuc(int HeSo[Max], int Bac);
	int GetHeSo(int addr)const;
	int GetBac()const;
	void OutPut();
	~DaThucBacn();

	void operator += (DaThucBacn const & DaThucA);
	void operator -= (DaThucBacn const & DaThucA);
	int operator() (int x);

private:
	int m_HeSo[Max];
	int m_Bac=0;
};



DaThucBacn operator + (DaThucBacn const& DaThucA, DaThucBacn const& DaThucB);
DaThucBacn operator - (DaThucBacn const& DaThucA, DaThucBacn const& DaThucB);
DaThucBacn operator * (DaThucBacn const& DaThucA, int A);
std::istream& operator >> (std::istream &cin, DaThucBacn & DaThucA);
std::ostream& operator << (std::ostream &cout, DaThucBacn & DaThucA);
