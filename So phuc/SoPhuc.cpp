#include "SoPhuc.h"


SoPhuc::SoPhuc(float PhanThuc) :m_PhanThuc(PhanThuc), m_PhanAo(0)
{
	;
}



void SoPhuc::NhapSoPhuc()
{
	std::cout << "Nhap Vao Phan Thuc: ";
	std::cin >> m_PhanThuc;
	std::cout << "Nhap Vao Phan Ao: ";
	std::cin >> m_PhanAo;
}

void SoPhuc::InSoPhuc() const
{
	std::cout << "So Phuc: "<<m_PhanThuc <<" + "<<m_PhanAo<<"i\n";
}
void SoPhuc::SetSoPhuc(float PhanThuc, float PhanAo) {
	m_PhanThuc = PhanThuc;
	m_PhanAo = PhanAo;
}
float SoPhuc::GetThuc()const {
	return m_PhanThuc;
}
float SoPhuc::GetAo()const {
	return m_PhanAo;
}
SoPhuc SoPhuc::Cong(SoPhuc const& SoPhucB)
{
	SoPhuc KetQua;
	KetQua.SetSoPhuc(this->GetThuc() + SoPhucB.GetThuc(), this->GetAo() + SoPhucB.GetAo());
	return KetQua;
}
SoPhuc SoPhuc::Tru(SoPhuc const& SoPhucB)
{
	SoPhuc KetQua;
	KetQua.SetSoPhuc(this->GetThuc() - SoPhucB.GetThuc(), this->GetAo() - SoPhucB.GetAo());
	return KetQua;
}
SoPhuc SoPhuc::Nhan(SoPhuc const& SoPhucB)
{
	SoPhuc KetQua;
	KetQua.SetSoPhuc(this->GetThuc() * SoPhucB.GetThuc() - this->GetAo() * SoPhucB.GetAo(), this->GetThuc()*SoPhucB.GetAo() + SoPhucB.GetThuc()*this->GetAo());
	return KetQua;
}
SoPhuc SoPhuc::Chia(SoPhuc const& SoPhucB)
{
	SoPhuc KetQua;
	KetQua.SetSoPhuc((m_PhanThuc*SoPhucB.m_PhanThuc + m_PhanAo * SoPhucB.m_PhanAo) / (SoPhucB.m_PhanThuc*SoPhucB.m_PhanThuc + SoPhucB.m_PhanAo*SoPhucB.m_PhanAo), (SoPhucB.m_PhanThuc*m_PhanAo - m_PhanThuc * SoPhucB.m_PhanAo) / (SoPhucB.m_PhanThuc*SoPhucB.m_PhanThuc + SoPhucB.m_PhanAo*SoPhucB.m_PhanAo));
	return KetQua;
}
SoPhuc::~SoPhuc()
{
}

SoPhuc operator + (SoPhuc const& SoPhucA, SoPhuc const& SoPhucB) {
	SoPhuc KetQua;
	KetQua.SetSoPhuc(SoPhucA.GetThuc() + SoPhucB.GetThuc(), SoPhucA.GetAo() + SoPhucB.GetAo());
	return KetQua;
}


SoPhuc operator - (SoPhuc const& SoPhucA, SoPhuc const& SoPhucB) {
	SoPhuc KetQua;
	KetQua.SetSoPhuc(SoPhucA.GetThuc() - SoPhucB.GetThuc(), SoPhucA.GetAo() - SoPhucB.GetAo());
	return KetQua;
}
SoPhuc operator * (SoPhuc const& SoPhucA, SoPhuc const& SoPhucB) {
	SoPhuc KetQua;
	KetQua.SetSoPhuc(SoPhucA.GetThuc() * SoPhucB.GetThuc() - SoPhucA.GetAo() * SoPhucB.GetAo(), SoPhucA.GetThuc()*SoPhucB.GetAo() + SoPhucB.GetThuc()*SoPhucA.GetAo());
	return KetQua;
}
SoPhuc operator / (SoPhuc const& SoPhucA, SoPhuc const& SoPhucB) {
	SoPhuc KetQua;
	KetQua.SetSoPhuc((SoPhucA.GetThuc()*SoPhucB.GetThuc() + SoPhucA.GetAo() * SoPhucB.GetAo()) / (SoPhucB.GetThuc()*SoPhucB.GetThuc() + SoPhucB.GetAo()*SoPhucB.GetAo()), (SoPhucB.GetThuc()*SoPhucA.GetAo() - SoPhucA.GetThuc() * SoPhucB.GetAo()) / (SoPhucB.GetThuc()*SoPhucB.GetThuc() + SoPhucB.GetAo()*SoPhucB.GetAo()));
	return KetQua;
}
bool operator ==(SoPhuc const& SoPhucA, SoPhuc const& SoPhucB) {
	if (SoPhucA.GetThuc() == SoPhucB.GetThuc() && SoPhucA.GetAo() == SoPhucB.GetAo())
		return true;
	return false;
}
bool operator !=(SoPhuc const& SoPhucA, SoPhuc const& SoPhucB) {
	if (!(SoPhucA == SoPhucB))
		return true;
	return false;
}
std::istream & operator >> (std::istream & cin, SoPhuc & SoPhucA) {
	SoPhucA.NhapSoPhuc();
	return cin;
}
std::ostream & operator << (std::ostream & cout, SoPhuc & SoPhucA) {
	SoPhucA.InSoPhuc();
	return cout;
}