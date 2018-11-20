#include "Cuu.h"



Cuu::Cuu()
{
}
Cuu::Cuu(int SoLuong, int LuongSua) :GiaSuc(SoLuong, LuongSua) {

}
void Cuu::SetSoLuong() {
	std::cout << "Nhap Vao So Luong Cuu : ";
	std::cin >> m_SoLuong;
}
void Cuu::Output() {
	std::cout << "So Luong Cuu: " << m_SoLuong;
	CommonOutput();
	std::cout << "\nTieng Keu: " << m_TiengKeu << "\n" ;
}
void Cuu::ChoSua() {
	m_LuongSua += rand() % GioiHanSua;
}
Cuu::~Cuu()
{
}
