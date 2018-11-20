#include "De.h"



De::De()
{
}
De::De(int SoLuong, int LuongSua) :GiaSuc(SoLuong, LuongSua) {

}
void De::SetSoLuong() {
	std::cout << "Nhap Vao So Luong De: ";
	std::cin >> m_SoLuong;
}
void De::Output() {
	std::cout << "So Luong De: " << m_SoLuong;
	CommonOutput();
	std::cout << "\nTieng Keu: " << m_TiengKeu << "\n";
}
void De::ChoSua() {
	m_LuongSua += rand() % GioiHanSua;
}
De::~De()
{
}
