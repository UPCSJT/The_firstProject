// Exam_1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Person.h"
#include <iostream.h>
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	CPerson S1(18,"male","��ͬѧ",3000);
	CPerson S2(18,"male","��ͬѧ",3000);
	CPerson S3(18,"male","��ͬѧ",3000);
	CPerson S4(18,"male","��ͬѧ",3000);
	CPerson S5(18,"male","��ͬѧ",3000);


	S1.Display();
	S2.Display();
	S3.Display();
	S4.Display();
	S5.Display();

	S1.Show();

	system("pause");
	return 0;
}

