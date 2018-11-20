#include "SV.h"

SV::SV()
{
}
SV::SV(char HoTen[40], char DiaChi[100], char NgaySinh[20], bool GioiTinh) {
	Person(HoTen, DiaChi, NgaySinh, GioiTinh);
}

void SV::SetInfo() {
	std::cin.ignore();
	std::cout << "Sv Truong: ";
	gets_s(m_Truong);
	std::cout << "Sv Nganh: ";
	gets_s(m_Nganh);
	std:: cout<< "Nien Khoa: ";
	gets_s(m_NienKhoa);
	std::cout << "Sv Nam: ";	
	std::cin >> m_Nam;
}
void SV::SetNewInfo() {
	std::cout << "Nhap Vao Ten Sinh Vien: ";
	gets_s(m_HoTen);
	SetPerson();
	SetInfo();
}



void SV::Output() {
	std::cout << "Sinh Vien: " << m_HoTen;
	Common_Output();
	std::cout << "\nLa Sinh Vien Nam " << m_Nam << "\nTruong: " << m_Truong << "\nNganh: " << m_Nganh << "\nNienKhoa: " << m_NienKhoa;

}
SV::~SV()
{
}
