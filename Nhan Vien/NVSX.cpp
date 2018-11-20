#include "NVSX.h"



NVSX::NVSX():NhanVien()
{
}
NVSX::NVSX(char HoTen[40], char NgaySinh[20]) : NhanVien(HoTen, NgaySinh) {

}
void NVSX::SetLuongCB(int LuongCB) {
	m_LuongCB = LuongCB;
}
void NVSX::SetSoSP(int SoSP) {
	m_SoSP = SoSP;
}
int NVSX::GetLuongCB()const {
	return m_LuongCB;
}
int NVSX::GetSoSP()const {
	return m_SoSP;
}
void NVSX::SetLuong() {
	m_Luong = m_LuongCB + m_SoSP * 5000;
}
void NVSX::Output() {
	std::cout << "Nhan Vien San Xuat: " << m_HoTen;
	std::cout << "\nNgay Sinh: " << m_NgaySinh;
	std::cout << "\nLuong: " << m_Luong;
}
NVSX::~NVSX()
{
}
