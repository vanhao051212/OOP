#include<iostream>
#include"CDate.h"

using namespace std;


int main() {

	CDate A(2,8,2017);
	A=A++ + ++A;
	A.Output();
	system("pause");
	return 0;
}