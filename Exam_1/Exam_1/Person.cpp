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
	cout<<"����˵�����Ϊ:"<<name.c_str()<<endl;
	cout<<"����˵��Ա�Ϊ: "<<sex<<endl;
	cout<<"����˵�����Ϊ: "<<age<<endl;
	cout<<"����˵�нˮΪ: "<<salary<<endl;
	cout<<endl;
}

void  CPerson::Show()
{
	cout<<"�ܹ���"<<icount<<"����"<<endl;
	cout<<icount<<"���˵�ƽ��нˮΪ:"<<avgsalary<<endl;
}