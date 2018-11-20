#include "Person.h"



Person::Person()
{
}
Person::Person(char HoTen[40], char DiaChi[100], char NgaySinh[20], bool GioiTinh) {
	strcpy_s(m_HoTen, HoTen);
	strcpy_s(m_DiaChi, DiaChi);
	strcpy_s(m_NgaySinh, NgaySinh);
	m_GioiTinh = GioiTinh;
}

void Person::SetPerson() {
	std::cout << "Nhap Vao Dia Chi: ";
	gets_s(m_DiaChi);
	std::cout << "Nhap Vao Ngay Sinh: ";
	gets_s(m_NgaySinh);
	std::cout << "Nhap Vao Gioi Tinh (1: Nam, 0: Nu): ";
	std::cin >> m_GioiTinh;
}
void Person::SetNewPerson() {
	std::cout << "Nhap Vao Ten: ";
	gets_s(m_HoTen);
	SetPerson();
}
void Person::Common_Output() {
	std::cout << "\nDia Chi: " << m_DiaChi;
	std::cout << "\nNgay Sinh: " << m_NgaySinh;
	std::cout << "\nGioi Tinh: ";
	if (m_GioiTinh)
		std::cout << "Nam";
	else
		std::cout << "Nu";
	
}
void Person::Output() {
	std::cout << "Ca Nhan: " << m_HoTen;
	Common_Output();
}
Person::~Person()
{
}
