#pragma once
#include<iostream>
#include<math.h>
class CTimeSpan
{
public:
	CTimeSpan();
	CTimeSpan(int Hour, int Min, int Sec);
	CTimeSpan(int Hour, int Min);
	CTimeSpan(int Hour);
	void ChuanHoa();
	int GetHour()const;
	int GetMin()const;
	int GetSec()const;
	void Set(int Hour = 0, int Min = 0, int Sec = 0);
	void OutPut();
	void Input();
	~CTimeSpan();

private:
	int m_Hour;
	int m_Min;
	int m_Sec;
};

CTimeSpan operator + (CTimeSpan const& Time_1, CTimeSpan const& Time_2);
CTimeSpan operator - (CTimeSpan const& Time_1, CTimeSpan const& Time_2);
bool operator == (CTimeSpan const& Time_1, CTimeSpan const& Time_2);
bool operator != (CTimeSpan const& Time_1, CTimeSpan const& Time_2);
bool operator > (CTimeSpan const& Time_1, CTimeSpan const& Time_2);
bool operator < (CTimeSpan const& Time_1, CTimeSpan const& Time_2);
bool operator >= (CTimeSpan const& Time_1, CTimeSpan const& Time_2);
bool operator <= (CTimeSpan const& Time_1, CTimeSpan const& Time_2);

std::istream& operator >>(std::istream& cin, CTimeSpan & Time);
std::ostream& operator <<(std::ostream& cout, CTimeSpan Time);


