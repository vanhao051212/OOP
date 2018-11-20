#include "Bo.h"



Bo::Bo()
{
}
Bo::Bo(int SoLuong, int LuongSua) :GiaSuc(SoLuong, LuongSua) {

}
void Bo::SetSoLuong() {
	std::cout << "Nhap Vao So Luong Bo: ";
	std::cin >> m_SoLuong;
}
void Bo::Output() {
	std::cout << "So Luong Bo: " << m_SoLuong;
	CommonOutput();
	std::cout << "\nTieng Keu: " << m_TiengKeu << "\n";
}
void Bo::ChoSua() {
	m_LuongSua += rand() % GioiHanSua;
}
Bo::~Bo()
{
}
