#include "NhanVien.h"



NhanVien::NhanVien() : m_HoTen(""), m_NgaySinh(""), m_Luong(0)
{
}
NhanVien::NhanVien(char HoTen[40], char NgaySinh[20]) : m_Luong(0) {
	strcpy_s(m_HoTen, HoTen);
	strcpy_s(m_NgaySinh, NgaySinh);
}
void NhanVien::SetTen() {
	std::cout << "Nhap Vao Ten Nhan Vien: ";
	gets_s(m_HoTen);
}
void NhanVien::SetNgaySinh() {
	std::cout << "Nhap Vao Ngay Sinh: ";
	gets_s(m_NgaySinh);
}
void NhanVien::SetNhanVien() {
	SetTen();
	SetNgaySinh();
}
void NhanVien::SetLuong(int Luong) {
	m_Luong = Luong;
}
int NhanVien::GetLuong()const {
	return m_Luong;
}
void NhanVien::Output() {
	std::cout << "Nhan Vien " << m_HoTen;
	std::cout << "\nNgay Sinh: " << m_NgaySinh;
	std::cout << "\nLuong: " << m_Luong;
}
NhanVien::~NhanVien()
{
}
