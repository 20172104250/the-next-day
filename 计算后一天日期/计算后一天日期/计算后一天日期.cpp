// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class NDate
{
private:
	int year;
	int month;
	int day;
public:
	void NextDate(int y, int m, int d);
	void play();
};
void NDate::NextDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "�������������" << year << "��" << month << "��" << day << "��" << endl;
	if (month == 2)
	{
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		{
			if (day == 29)
			{
				month = month + 1;
				day = 1;
			}
			else
			{
				month = month;
				day = day + 1;
			}
		}

		else
		{
			if (day == 28)
			{
				month = month + 1;
				day = 1;
			}
			else
			{
				month = month;
				day = day + 1;
			}
		}
	}
	else if (month == 12)
	{
		if (day == 31)
		{
			month = 1;
			day = 1;
		}
		else
		{
			month = month + 1;
			day = 1;
		}
	}
	else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
	{
		if (day = 30)
		{
			month = month + 1;
			day = 1;
		}
		else
		{
			month = month;
			day = day + 1;
		}
	}
	else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
	{
		if (day = 31)
		{
			month = month + 1;
			day = 1;
		}
		else
		{
			month = month;
			day = day + 1;
		}
	}


	if (month = 12, day = 31)
	{
		year = year + 1;
		month = 1;
		day = 1;
	}
}

void NDate::play()
{
	cout << "��һ����" << year << "��" << month << "��" << day << "��" << endl;
}
int main()
{
	NDate oj;
	oj.NextDate(2000, 12, 31);
	oj.play();
	return 0;
}
