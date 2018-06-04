// CMydate.6.4.cpp : 定义控制台应用程序的入口点。
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
	cout << "基类默认构造函数" << year << "年" << month << "月" << day << "日" << endl;
}
CDate::CDate(int ty, int tm, int td)
{
	year = ty;
	month = tm;
	day = td;
	cout << "基类构造函数" << year << "年" << month << "月" << day << "日" << endl;
}
void CDate::display()
{
	cout << "基类display" << year << "年" << month << "月" << day << "日" << endl;
}
CDate::~CDate(void)
{
	cout << "基类析构函数" << year << "年" << month << "月" << day << "日" << endl;
}
class CMyDate:public CDate
{
public:
	CMyDate(int ty, int tm, int td)
	{
		year = ty;
		month = tm;
		day = td;
		//cout << "派生类构造函数" << year << "年" << month << "月" << day << "日" << endl;
	}
	/*CMyDate()
	{
		cout << "派生类构造函数" << year << "年" << month << "月" << day << "日" << endl;
	}*/
};
int main()
{
	CDate omydate1(2018,6,4);
	omydate1.display();
    return 0;
}

