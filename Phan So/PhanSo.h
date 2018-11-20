#pragma once
#include <iostream>
#include<math.h>
class PhanSo
{
public:
	PhanSo();
	PhanSo(int TuSo, int MauSo);
	PhanSo(int GiaTri);
	void NhapPhanSo();
	int GetTuSo() const;
	int GetMauSo() const;
	void RutGon();
	void InPhanSo();
	~PhanSo();
private:
	int m_TuSo;
	int m_MauSo;
};
int UCLN(int a, int b);

bool operator <(PhanSo const& PhanSoA, PhanSo const& PhanSoB);
bool operator ==(PhanSo const& PhanSoA, PhanSo const& PhanSoB);
bool operator !=(PhanSo const& PhanSoA, PhanSo const& PhanSoB);
bool operator >(PhanSo const& PhanSoA, PhanSo const& PhanSoB);
bool operator >=(PhanSo const& PhanSoA, PhanSo const& PhanSoB);
bool operator <=(PhanSo const& PhanSoA, PhanSo const& PhanSoB);

PhanSo operator + (PhanSo const& PhanSoA, PhanSo const& PhanSoB);
PhanSo operator - (PhanSo const& PhanSoA, PhanSo const& PhanSoB);
PhanSo operator * (PhanSo const& PhanSoA, PhanSo const& PhanSoB);
PhanSo operator / (PhanSo const& PhanSoA, PhanSo const& PhanSoB);

std::istream & operator >>(std::istream & cin, PhanSo & PhanSoA);
std::ostream & operator <<(std::ostream & cout, PhanSo PhanSoA);
