#include "SanPham.h"



SanPham::SanPham()
{
}
void SanPham::Nhap() {
	fflush(stdin);
	cin.ignore();
	cout << "Nhap Vao Ten San Pham: ";
	gets_s(m_TenSP);
	cout << "Nam SX: ";
	cin >> m_NamSX;
	cout << "Gia: ";
	cin >> m_GiaThanh;

}
void SanPham::Xuat() {
	cout << "\nSP: " << m_TenSP << "\tSX Nam: " << m_NamSX << "\tCo Gia La: " << m_GiaThanh;
}
int SanPham::GetGia()const {
	return m_GiaThanh;
}
int SanPham::GetNamSX()const {
	return m_NamSX;
}
void SanPham::SetGia() {
	cout << "Nhap Vao Gia: ";
	cin >> m_GiaThanh;
}
void SanPham::SetNamSX() {
	cout << "Nhap Vao Nam SX: ";
	cin >> m_NamSX;
}
void SanPham::SetTen() {
	cout << "Nhap Vao Ten San Pham: ";
	gets_s(m_TenSP);
}
SanPham::~SanPham()
{
}
