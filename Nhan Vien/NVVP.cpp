#include "NVVP.h"



NVVP::NVVP()
{
}
NVVP::NVVP(char HoTen[40], char NgaySinh[20]) : NhanVien(HoTen, NgaySinh) {

}
void NVVP::SetSoNgayLV(int SoNgayLV) {
	m_SoNgayLV = SoNgayLV;
}
int NVVP::GetSoNgayLV()const {
	return m_SoNgayLV;
}
void NVVP::SetLuong() {
	m_Luong = m_SoNgayLV * 100000;
}
void NVVP::Output() {
	std::cout << "Nhan Vien Van Phong " << m_HoTen;
	std::cout << "\nNgay Sinh: " << m_NgaySinh;
	std::cout << "\nLuong: " << m_Luong;
}
NVVP::~NVVP()
{
}
