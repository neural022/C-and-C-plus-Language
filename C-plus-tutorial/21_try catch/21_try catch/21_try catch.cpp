// 21_try catch.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	try
	{
		cout << "A" << endl;
		//throw 123;
	}
	catch (...)	//	... �ƻ�y���౵ ���@�뤣�|�ϥΥ�
	{
		cout << "B" << endl;
	}
	cout << "C" << endl;

	return 0;
}
