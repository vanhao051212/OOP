#include "CDate.h"



CDate::CDate()
{
}
CDate::CDate(int DD) :m_YY(2000), m_MM(1), m_DD(DD) {

}
CDate::CDate(int DD, int MM) : m_YY(2000), m_MM(MM), m_DD(DD) {

}
CDate::CDate(int DD, int MM, int YY) : m_YY(YY), m_MM(MM), m_DD(DD) {

}
int CDate::GetDD()const {
	return m_DD;
}
int CDate::GetMM()const {
	return m_MM;
}
int CDate::GetYY()const {
	return m_YY;
}
void CDate::SetDD() {
	std::cout << "Nhap Vao Ngay: ";
	std::cin >> m_DD;
}
void CDate::SetMM() {
	std::cout << "Nhap Vao Thang: ";
	std::cin >> m_MM;
}
void CDate::SetYY() {
	std::cout << "Nhap Vao Nam: ";
	std::cin >> m_YY;
}
void CDate::SetCDate(int YY, int MM, int DD) {
	m_DD = DD;
	m_MM = MM;
	m_YY = YY;
}
void CDate::ResetCDate() {
	SetYY();
	SetMM();
	SetYY();
}
void CDate::Output() {
	std::cout << m_DD << "/" << m_MM << "/" << m_YY<<"\n";
}
bool CDate::NamNhuan() {
	if (m_YY % 4 == 0 && m_YY % 100 != 0) {
		return true;
	}
	return false;
}
void CDate::Cong(CDate CDate1) {
	bool Stt_Loop = true;
	int Temp = CDate1.GetDD();
	int Ngay_T2 = 28;
	if (NamNhuan()) {
		Ngay_T2 = 29;
	}
	else {
		Ngay_T2 = 28;
	}
	while (Stt_Loop) {
		Temp += m_DD;
		switch (m_MM) {
			case 1: case 3: case 5: case 7: case 8: case 10:{

				if (Temp > 31) {
					m_MM++;
					Temp -= 31;
					m_DD = 0;
					Stt_Loop = true;
					break;
				}
				else {
					m_DD = Temp;
					Stt_Loop = false;
					break;
				}
			}
			case 2: {
				if (Temp > Ngay_T2) {
					m_MM++;
					Temp -= Ngay_T2;
					m_DD = 0;
					Stt_Loop = true;
					break;
				}
				else {
					m_DD = Temp;
					Stt_Loop = false;
					break;
				}
			}	
			case 4: case 6 :case 9:case 11: {
				if (Temp > 30) {
					m_MM++;
					Temp -= 30;
					m_DD = 0;
					Stt_Loop = true;
					break;
				}
				else {
					m_DD = Temp;
					Stt_Loop = false;
					break;
				}
			}	
			case 12: {
				Temp += m_DD;
				if (Temp > 31) {
					m_MM = 1;
					m_YY ++;
					Temp -= 31;
					m_DD = 0;
					Stt_Loop = true;
					break;
				}
				else {
					m_DD = Temp;
					Stt_Loop = false;
					break;
				}
			}
			default: break;
		}
	}
	
}
void CDate::Tru(CDate CDate1) {
	bool Stt_Loop = true;
	bool Stt_Sub = false;
	int Temp = CDate1.GetDD();
	int Ngay_T2 = 28;

	while (Stt_Loop) {
		if (NamNhuan()) {
			Ngay_T2 = 29;
		}
		else {
			Ngay_T2 = 28;
		}

		switch (m_MM) {
		case 2: case 4: case 6: case 8: case 9: case 11: {
			if ((m_DD - Temp) > 0) {
				m_DD -= Temp;
				Stt_Loop = false;
				break;
			}
			else {
				Temp -= m_DD;
				m_MM--;
				m_DD =31;
				Stt_Loop = true;
				break;
			}
		}
		case 3: {
			if ((m_DD - Temp) > 0) {
				m_DD -= Temp;
				Stt_Loop = false;
				break;
			}
			else {
				Temp -= m_DD;

				m_MM--;
				m_DD = Ngay_T2;
				Stt_Loop = true;
				break;
			}
		}
		case 5: case 7:case 10:case 12: {
			if ((m_DD - Temp) > 0) {
				m_DD -= Temp;
				Stt_Loop = false;
				break;
			}
			else {
				Temp -= m_DD;

				m_MM--;
				m_DD = 30;
				Stt_Loop = true;
				break;
			}
		}
		case 1: {
			if ((m_DD - Temp) > 0) {
				m_DD -= Temp;
				Stt_Loop = false;
				break;
			}
			else {
				Temp -= m_DD;
				m_MM=12;
				m_YY--;
				m_DD = 31;
				Stt_Loop = true;
				break;
			}
		}
		default: break;
		}
	}

}
CDate::~CDate()
{
}



std::istream & operator >>(std::istream& cin, CDate & cdate){
	cdate.ResetCDate();
	return cin;
}
std::ostream & operator <<(std::ostream& cout, CDate & cdate) {
	cdate.Output();
	return cout;
}

CDate operator+(CDate CDate1, CDate CDate2) {
	CDate KetQua= CDate1;
	KetQua.Cong(CDate2);
	return KetQua;
}
CDate operator-(CDate CDate1, CDate CDate2) {
	CDate KetQua = CDate1;
	KetQua.Tru(CDate2);
	return KetQua;
}


CDate &CDate::operator++(int) {
	Cong(1);
	return *this;
}
CDate &CDate:: operator--(int) {
	Tru(1);
	return *this;
}
CDate &CDate::operator++() {
	Cong(1);
	return *this;
}
CDate &CDate:: operator--() {
	Tru(1);
	return *this;
}