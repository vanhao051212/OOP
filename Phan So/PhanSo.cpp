#include <iostream>
#include "PhanSo.h"

PhanSo::PhanSo() : m_TuSo(0), m_MauSo(1)
{
	;
}
PhanSo::PhanSo(int TuSo, int MauSo) : m_TuSo(TuSo), m_MauSo(MauSo)
{
	RutGon();
}
PhanSo::PhanSo(int GiaTri) : m_TuSo(GiaTri), m_MauSo(1)
{
	;
}
void PhanSo::NhapPhanSo()
{
	std::cout << "Nhap Vao Tu So: ";
	std::cin >> m_TuSo;
	std::cout << "Nhap Vao Mau So: ";
	std::cin >> m_MauSo;

}
int PhanSo::GetTuSo() const
{
	return m_TuSo;
}
int PhanSo::GetMauSo() const
{
	return m_MauSo;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else if (a < b)
		{
			b -= a;
		}
	}
	return a;
}
void PhanSo::RutGon()
{
	int temp = UCLN(m_TuSo, m_MauSo);
	m_TuSo /= temp;
	m_MauSo /= temp;
	if (m_TuSo < 0 && m_MauSo < 0) {
		m_TuSo = abs(m_TuSo);
		m_MauSo = abs(m_MauSo);
	}
	else if (m_TuSo > 0 && m_MauSo < 0) {
		m_TuSo = -m_TuSo;
		m_MauSo = abs(m_MauSo);
	}
}
void PhanSo::InPhanSo() 
{
	RutGon();
	if(m_MauSo!=1)
		std::cout << m_TuSo << "/" << m_MauSo << "\n";
	else std::cout << m_TuSo;
}

PhanSo::~PhanSo()
{
}


bool operator <(PhanSo const& PhanSoA, PhanSo const& PhanSoB)
{
	if (PhanSoA.GetTuSo() / PhanSoA.GetMauSo() < PhanSoB.GetTuSo() / PhanSoB.GetMauSo())
		return true;
	else return false;
}

bool operator ==(PhanSo const& PhanSoA, PhanSo const& PhanSoB)
{
	if (PhanSoA.GetTuSo() == PhanSoB.GetTuSo() && PhanSoA.GetMauSo() == PhanSoB.GetMauSo())
		return true;
	else return false;
}
bool operator !=(PhanSo const& PhanSoA, PhanSo const& PhanSoB) {
	if (!(PhanSoA == PhanSoB))
		return true;
	return false;
}
bool operator >(PhanSo const& PhanSoA, PhanSo const& PhanSoB)
{
	if (PhanSoA.GetTuSo() / PhanSoA.GetMauSo() > PhanSoB.GetTuSo() / PhanSoB.GetMauSo())
		return true;
	else return false;
}
bool operator >=(PhanSo const& PhanSoA, PhanSo const& PhanSoB) {
	if (PhanSoA > PhanSoB || PhanSoA == PhanSoB)
		return true;
	return false;
}
bool operator <=(PhanSo const& PhanSoA, PhanSo const& PhanSoB) {
	if (PhanSoA < PhanSoB || PhanSoA == PhanSoB)
		return true;
	return false;
}
PhanSo operator + (PhanSo const& PhanSoA, PhanSo const& PhanSoB)
{
	PhanSo KetQua(PhanSoA.GetTuSo() * PhanSoB.GetMauSo() + PhanSoA.GetMauSo()* PhanSoB.GetTuSo(), PhanSoA.GetMauSo() * PhanSoB.GetMauSo());
	return KetQua;
}
PhanSo operator - (PhanSo const& PhanSoA, PhanSo const& PhanSoB)
{
	PhanSo KetQua(PhanSoA.GetTuSo() * PhanSoB.GetMauSo() - PhanSoA.GetMauSo()* PhanSoB.GetTuSo(), PhanSoA.GetMauSo() * PhanSoB.GetMauSo());
	return KetQua;
}
PhanSo operator * (PhanSo const& PhanSoA, PhanSo const& PhanSoB)
{
	PhanSo KetQua(PhanSoA.GetTuSo()* PhanSoB.GetTuSo(), PhanSoA.GetMauSo() * PhanSoB.GetMauSo());
	return KetQua;
}
PhanSo operator / (PhanSo const& PhanSoA, PhanSo const& PhanSoB)
{
	PhanSo KetQua(PhanSoA.GetTuSo()* PhanSoB.GetMauSo(), PhanSoA.GetMauSo() * PhanSoB.GetTuSo());
	return KetQua;
}

std::istream & operator >>(std::istream & cin, PhanSo &PhanSoA) {
	PhanSoA.NhapPhanSo();
	return cin;
}
std::ostream & operator <<(std::ostream & cout, PhanSo PhanSoA) {
	PhanSoA.InPhanSo();
	return cout;
}