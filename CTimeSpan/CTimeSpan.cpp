#include "CTimeSpan.h"



CTimeSpan::CTimeSpan() {

}
CTimeSpan::CTimeSpan(int Hour , int Min , int Sec ) {
	m_Hour = Hour;
	m_Min = Min;
	m_Sec = Sec;
}
CTimeSpan::CTimeSpan(int Hour, int Min) {
	m_Hour = Hour;
	m_Min = Min;
	m_Sec = 0;
}
CTimeSpan::CTimeSpan(int Hour) {
	m_Hour = Hour;
	m_Min = 0;
	m_Sec = 0;
}
void CTimeSpan::ChuanHoa() {
	m_Min += (m_Sec / 60);
	m_Sec %= 60;
	m_Hour += (m_Min / 60);
	m_Min %= 60;
	//m_Hour %= 60;
}
int CTimeSpan::GetHour()const {
	return m_Hour;
}
int CTimeSpan::GetMin()const{
	return m_Min;
}
int CTimeSpan::GetSec()const {
	return m_Sec;
}
void CTimeSpan::Set(int Hour , int Min , int Sec ) {
	m_Hour = Hour;
	m_Min = Min;
	m_Sec = Sec;
}
void CTimeSpan::OutPut() {
	ChuanHoa();
	std::cout << m_Hour << ":" << m_Min << ":" << m_Sec << "\n";
}
void CTimeSpan::Input() {
	std::cout << "Nhap Vao Gio: ";
	std::cin >> m_Hour;
	std::cout << "Nhap Vao Phut: ";
	std::cin >> m_Min;
	std::cout << "Nhap Vao Giay: ";
	std::cin >> m_Sec;
}
CTimeSpan::~CTimeSpan()
{
}

CTimeSpan operator + (CTimeSpan const& Time_1, CTimeSpan const& Time_2) {
	int temp = Time_1.GetHour() * 3600 + Time_1.GetMin() * 60 + Time_1.GetSec() + Time_2.GetHour() * 3600 + Time_2.GetMin() * 60 + Time_2.GetSec();
	CTimeSpan KetQua(0, 0, temp);
	KetQua.ChuanHoa();
	return KetQua;
}
CTimeSpan operator - (CTimeSpan const& Time_1, CTimeSpan const& Time_2) {
	int temp = Time_1.GetHour() * 3600 + Time_1.GetMin() * 60 + Time_1.GetSec() - (Time_2.GetHour() * 3600 + Time_2.GetMin() * 60 + Time_2.GetSec());
	CTimeSpan KetQua(0, 0, abs(temp));
	KetQua.ChuanHoa();
	return KetQua;
}

bool operator == (CTimeSpan const& Time_1, CTimeSpan const& Time_2) {
	if ((Time_1.GetHour() * 3600 + Time_1.GetMin() * 60 + Time_1.GetSec()) == (Time_2.GetHour() * 3600 + Time_2.GetMin() * 60 + Time_2.GetSec()))
		return true;
	return false;
}
bool operator != (CTimeSpan const& Time_1, CTimeSpan const& Time_2) {
	if (!(Time_1 == Time_2))
		return true;
	return false;
}
bool operator > (CTimeSpan const& Time_1, CTimeSpan const& Time_2) {
	if ((Time_1.GetHour() * 3600 + Time_1.GetMin() * 60 + Time_1.GetSec()) > (Time_2.GetHour() * 3600 + Time_2.GetMin() * 60 + Time_2.GetSec()))
		return true;
	return false;
}
bool operator < (CTimeSpan const& Time_1, CTimeSpan const& Time_2) {
	if ((Time_1.GetHour() * 3600 + Time_1.GetMin() * 60 + Time_1.GetSec()) < (Time_2.GetHour() * 3600 + Time_2.GetMin() * 60 + Time_2.GetSec()))
		return true;
	return false;
}
bool operator >= (CTimeSpan const& Time_1, CTimeSpan const& Time_2) {
	if (Time_1 == Time_2 || Time_1 > Time_2)
		return true;
	return false;
}
bool operator <= (CTimeSpan const& Time_1, CTimeSpan const& Time_2) {
	if (Time_1 == Time_2 || Time_1 < Time_2)
		return true;
	return false;
}
std::istream& operator >>(std::istream& cin, CTimeSpan & Time) {
	Time.Input();
	return cin;
}
std::ostream& operator <<(std::ostream& cout, CTimeSpan Time) {
	Time.OutPut();
	return cout;
}