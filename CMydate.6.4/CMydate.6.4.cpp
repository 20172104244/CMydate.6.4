// CMydate.6.4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CDate
{
protected:
	int year;
	int month;
	int day;
public:
	CDate();
	CDate(int ty, int tm, int td);
	void display();
	~CDate();
};
CDate::CDate()
{
	int year = 2017;
	int month = 12;
	int day = 19;
	cout << "����Ĭ�Ϲ��캯��" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::CDate(int ty, int tm, int td)
{
	year = ty;
	month = tm;
	day = td;
	cout << "���๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
}
void CDate::display()
{
	cout << "����display" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::~CDate(void)
{
	cout << "������������" << year << "��" << month << "��" << day << "��" << endl;
}
class CMyDate:public CDate
{
public:
	CMyDate(int ty, int tm, int td)
	{
		year = ty;
		month = tm;
		day = td;
		//cout << "�����๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
	}
	/*CMyDate()
	{
		cout << "�����๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
	}*/
};
int main()
{
	CDate omydate1(2018,6,4);
	omydate1.display();
    return 0;
}

