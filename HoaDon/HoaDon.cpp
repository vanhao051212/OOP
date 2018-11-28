#include "HoaDon.h"


HoaDon::HoaDon()
{
}
void HoaDon::Xuat() {
	SanPham::Xuat();
	cout << "\nSo Luong Ban: " << m_SL;
	cout << "\tGia Ban: " << m_GiaBan;
	cout << "\tThanh Tien: " << ThanhTien();
	cout << "\nThue: " << Thue();
	cout << "\nTien Lai: " << Lai();
}
void HoaDon::Nhap() {
	SanPham::Nhap();
	cout << "Nhap Vao So Luong Ban: ";
	cin >> m_SL;
	cout << "Nhap Gia Ban: ";
	cin >> m_GiaBan;
}
int HoaDon::ThanhTien() {
	return m_SL * m_GiaBan;
}
double HoaDon::Thue() {
	return ThanhTien()*0.1;
}
int HoaDon::Lai() {
	return (m_GiaBan - m_GiaThanh)*m_SL;
}
HoaDon::~HoaDon()
{
}
istream& operator >>(istream&cin, HoaDon & HD) {
	HD.Nhap();
	return cin;
}
ostream& operator<<(ostream& cout, HoaDon HD) {
	HD.Xuat();
	return cout;
}