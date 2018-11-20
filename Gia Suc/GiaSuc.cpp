#include "GiaSuc.h"



GiaSuc::GiaSuc()
{
}
GiaSuc::GiaSuc(int SoLuong, int LuongSua) :m_SoLuong(SoLuong), m_LuongSua(LuongSua) {

}
void GiaSuc::SetSoLuong() {
	std::cout << "Nhap Vao So Luong Gia Suc: ";
	std::cin >> m_SoLuong;
}
int GiaSuc::GetSoLuong()const {
	return m_SoLuong;
}
int GiaSuc::GetLuongSua()const {
	return m_LuongSua;
}
void GiaSuc::CommonOutput()const {
	std::cout << "\nLuong Sua: " << m_LuongSua;
	std::cout << "\nTinh Trang: ";
	if (m_Stt_Hungry)
		std::cout << "Doi Bung";
	else std::cout << "No";
}
void GiaSuc::Output() {
	std::cout << "So Luong : " << m_SoLuong;
	CommonOutput();
}
void GiaSuc::SinhCon() {
	m_SoLuong += rand() % SoConMax;
}
GiaSuc::~GiaSuc()
{
}
