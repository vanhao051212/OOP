#include "NS.h"



NS::NS()
{
}
NS::NS(char HoTen[40], char DiaChi[100], char NgaySinh[20], bool GioiTinh) {
	Person(HoTen, DiaChi, NgaySinh, GioiTinh);
}
void NS::SetInfo() {
	std::cin.ignore();
	std::cout << "Nghe Dang: ";
	gets_s(m_NgheDanh);
	std::cout << "Chuyen Mon: ";
	gets_s(m_ChuyenMon);
}
void NS::SetNewInfo() {
	std::cout << "Nhap Vao Ten Nghe Si: ";
	gets_s(m_HoTen);
	SetPerson();
	SetInfo();
}

void NS::Output() {
	std::cout << "Nghe Si: " << m_HoTen;
	Common_Output();
	std::cout << "\nCo Nghe Dang La: " << m_NgheDanh << "\n Chuyen Mon: " << m_ChuyenMon;

}
NS::~NS()
{
}
