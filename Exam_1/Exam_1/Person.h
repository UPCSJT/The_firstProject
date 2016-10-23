#pragma once
#include "iostream"
using namespace std;


class CPerson
{
public:
	CPerson(void);
	~CPerson(void);
private:
	int age;
	bool sex;
	string name;
	int salary;
	static int icount;
	static int  avgsalary;
	static int sumsalary;
public:
	CPerson(int age1, bool sex1,string name1,int salary1);
	void Display(void);
	void static Show();
};

