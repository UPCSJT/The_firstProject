#include "StdAfx.h"
#include "Person.h"
#include "iostream"
using namespace std;


int CPerson::icount=0;
 int CPerson::avgsalary=0;
 int CPerson::sumsalary=0;

CPerson::CPerson(void)
	: age(0)
	, sex(false)
	, salary(0)
{
}


CPerson::~CPerson(void)
{
}


CPerson::CPerson(int age1, bool sex1, string name1, int salary1):
age(age1),sex(sex1),name(name1),salary(salary1)
{
    icount++;
	sumsalary=sumsalary+salary;
	avgsalary=sumsalary/icount;

}


void CPerson::Display(void)
{
	cout<<"这个人的姓名为:"<<name.c_str()<<endl;
	cout<<"这个人的性别为: "<<sex<<endl;
	cout<<"这个人的年龄为: "<<age<<endl;
	cout<<"这个人的薪水为: "<<salary<<endl;
	cout<<endl;
}

void  CPerson::Show()
{
	cout<<"总共有"<<icount<<"个人"<<endl;
	cout<<icount<<"个人的平均薪水为:"<<avgsalary<<endl;
}