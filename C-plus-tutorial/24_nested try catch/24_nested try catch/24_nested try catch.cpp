// 24_nested try catch.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	try
	{
		try
		{
			cout << "A" << endl; throw 3.2;
			cout << "AA" << endl;
		}
		catch (...)	//	��������	C�|���� 
		{			//	catch (int) ����������~���� C���|���� �Y�~���]������|�o���Y�����~X
			cout << "B" << endl;
		}
		cout << "C" << endl;
	}
	catch (...)
	{

	}

	return 0;
}

