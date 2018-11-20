#pragma once
#include<iostream>
#include<math.h>
class CDate
{
public:
	CDate();
	CDate(int DD);
	CDate(int MM, int YY);
	CDate(int DD, int MM, int YY);
	int GetDD()const;
	int GetMM()const;
	int GetYY()const;
	void SetDD();
	void SetMM();
	void SetYY();
	void SetCDate(int YY, int MM, int DD);
	void Output();
	void ResetCDate();
	bool NamNhuan();
	void Cong(CDate CDate1);
	void Tru(CDate CDate1);

	CDate & operator++(int);
	CDate & operator--(int);
	CDate & operator++();
	CDate & operator--();
	~CDate();

private:
	int m_DD=1;
	int m_MM=1;
	int m_YY=2000;
};

std::istream & operator >>(std::istream& cin, CDate & cdate);
std::ostream & operator <<(std::ostream& cout, CDate & cdate);

CDate operator+(CDate CDate1, CDate CDate2);
CDate operator-(CDate CDate1, CDate CDate2);



