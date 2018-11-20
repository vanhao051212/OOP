#pragma once
#include<iostream>
class SoPhuc
{
public:
	SoPhuc(float PhanThuc=0);

	void NhapSoPhuc();
	void InSoPhuc() const;
	void SetSoPhuc(float PhanThuc, float PhanAo);
	float GetThuc()const;
	float GetAo()const;
	SoPhuc Cong(SoPhuc const& SoPhucB);
	SoPhuc Tru (SoPhuc const& SoPhucB);
	SoPhuc Nhan(SoPhuc const& SoPhucB);
	SoPhuc Chia(SoPhuc const& SoPhucB);
	~SoPhuc();

private:
	float m_PhanThuc=0;
	float m_PhanAo=0;
};

SoPhuc operator + (SoPhuc const& SoPhucA, SoPhuc const& SoPhucB );
SoPhuc operator - (SoPhuc const& SoPhucA, SoPhuc const& SoPhucB);
SoPhuc operator * (SoPhuc const& SoPhucA, SoPhuc const& SoPhucB);
SoPhuc operator / (SoPhuc const& SoPhucA, SoPhuc const& SoPhucB);
bool operator ==(SoPhuc const& SoPhucA, SoPhuc const& SoPhucB);
bool operator !=(SoPhuc const& SoPhucA, SoPhuc const& SoPhucB);
std::istream & operator >> (std::istream & cin, SoPhuc & SoPhucA);
std::ostream & operator << (std::ostream & cout, SoPhuc & SoPhucA);