#include "CN.h"



CN::CN()
{
}
CN::CN(char HoTen[40], char DiaChi[100], char NgaySinh[20], bool GioiTinh) {
	Person(HoTen, DiaChi, NgaySinh, GioiTinh);
}
void CN::SetInfo() {
	std::cin.ignore();
	std::cout << "Nhap Vao Noi Lam Viec: ";
	gets_s(m_NoiLV);
	std::cout << "Nhap Vao Luong: ";
	std::cin >> m_Luong;
}

void CN::SetNewInfo() {
	std::cout << "Nhap Vao Ten Cong Nhan: ";
	gets_s(m_HoTen);
	SetPerson();
	SetInfo();
}
void CN::Output() {
	std::cout << "Cong Nhan: " << m_HoTen;
	Common_Output();
	std::cout << "\nLam Viec Tai: " << m_NoiLV << "\nCo Muc Luong La: " << m_Luong;
}
CN::~CN()
{
}
