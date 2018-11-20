#include "DaThucBacn.h"



DaThucBacn::DaThucBacn()
{
	for (int i = 0; i < Max; i++) {
		m_HeSo[i] = 0;
	}
}
DaThucBacn::DaThucBacn(int Bac) :m_Bac(Bac) {
	SetDaThuc(m_Bac);
}
DaThucBacn::DaThucBacn(int HeSo[Max], int Bac) {
	m_Bac = Bac;
	for (int i = 0; i < Max; i++) {
		if (i <= m_Bac) {
			m_HeSo[i] = HeSo[i];
		}
		else m_HeSo[i] = 0;
		
	}
}
void DaThucBacn::SetBac() {
	std::cout << "Nhap Vao Bac Cua Bieu Thuc: ";
	std::cin >> m_Bac;
}
void DaThucBacn::SetBac(int Bac) {
	m_Bac = Bac;
}
void DaThucBacn::SetDaThuc() {
	for (int i = 0; i <= m_Bac; i++) {
		std::cout << "Nhap Vao He So Cua x^" << i << " : ";
		std::cin >> m_HeSo[i];
	}
}
void DaThucBacn::SetDaThuc(int Bac) {
	m_Bac = Bac;
	for (int i = 0; i <= m_Bac; i++) {
		std::cout << "Nhap Vao He So Cua x" << i << " : ";
		std::cin >> m_HeSo[i];
	}
}
void DaThucBacn::SetDaThuc(int HeSo[Max], int Bac) {
	m_Bac = Bac;
	for (int i = 0; i < Max; i++) {
		if (i <= m_Bac) {
			m_HeSo[i] = HeSo[i];
		}
		else m_HeSo[i] = 0;

	}
}
void DaThucBacn::OutPut() {
	for (int i = 0; i <= m_Bac; i++) {
		if (i == m_Bac) {
			std::cout << m_HeSo[m_Bac - i]<<" = 0\n";
		}
		else if (m_HeSo[m_Bac - i] != 0) {
			if (m_HeSo[m_Bac - i] == 1)
			{
				std::cout << "x^" << m_Bac - i << " + ";
			}
			else std::cout << m_HeSo[m_Bac - i] << "x^" << m_Bac - i << " + ";
		}
	}
}
int DaThucBacn::GetHeSo(int addr) const{
	return m_HeSo[addr];
}
int DaThucBacn::GetBac()const {
	return m_Bac;
}
DaThucBacn::~DaThucBacn()
{
}

DaThucBacn operator + (DaThucBacn const& DaThucA, DaThucBacn const& DaThucB) {
	int Temp[Max];
	int bac=0;
	if (DaThucA.GetBac() > DaThucB.GetBac()) {
		bac = DaThucA.GetBac();
	}
	else bac = DaThucB.GetBac();
	for (int i = 0; i <= bac; i++) {
		Temp[i] = DaThucA.GetHeSo(i) + DaThucB.GetHeSo(i);
	}
	return DaThucBacn(Temp, bac);
}
DaThucBacn operator - (DaThucBacn const& DaThucA, DaThucBacn const& DaThucB) {
	int Temp[Max];
	int bac = 0;
	if (DaThucA.GetBac() > DaThucB.GetBac()) {
		bac = DaThucA.GetBac();
	}
	else bac = DaThucB.GetBac();
	for (int i = 0; i <= bac; i++) {
		Temp[i] = DaThucA.GetHeSo(i) - DaThucB.GetHeSo(i);
	}
	return DaThucBacn(Temp, bac);
}
DaThucBacn operator * (DaThucBacn const& DaThucA, int A) {
	int Temp[Max];
	for (int i = 0; i <= DaThucA.GetBac(); i++) {
		Temp[i] = A * DaThucA.GetHeSo(i);
	}
	return DaThucBacn(Temp, DaThucA.GetBac());
}

void DaThucBacn ::operator +=(DaThucBacn const & DaThucA) {
	int Temp[Max];
	int bac = 0;
	if (DaThucA.GetBac() > this->m_Bac) {
		bac = DaThucA.GetBac();
	}
	else bac = this->m_Bac;
	for (int i = 0; i <= bac; i++) {
		Temp[i] = DaThucA.GetHeSo(i) + this->GetHeSo(i);
	}
	this->SetDaThuc(Temp, bac);

}
void DaThucBacn ::operator -=(DaThucBacn const & DaThucA) {
	int Temp[Max];
	int bac = 0;
	if (DaThucA.GetBac() > this->m_Bac) {
		bac = DaThucA.GetBac();
	}
	else bac = this->m_Bac;
	for (int i = 0; i <= bac; i++) {
		Temp[i] =  this->GetHeSo(i) - DaThucA.GetHeSo(i);
	}
	this->SetDaThuc(Temp, bac);

}

int DaThucBacn::operator()(int x) {
	int KetQua = 0;
	for (int i = 0; i <= m_Bac; i++) {
		KetQua += m_HeSo[i] * pow(x, i);
	}
	return KetQua;
}

std::istream& operator >> (std::istream &cin, DaThucBacn & DaThucA) {
	int bac;
	std::cout << "Nhap Vao Bac: ";
	std::cin >> bac;
	DaThucA.SetDaThuc(bac);
	return cin;
}

std::ostream& operator << (std::ostream &cout, DaThucBacn & DaThucA) {
	DaThucA.OutPut();
	return cout;
}