// 026_namespace example-01.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
using namespace std;
namespace IM
{
	int a = 1, b = 2, c = 3;
}
namespace FL
{
	int a = 4, b = 5, c = 6;
}
using namespace IM;// using namespace FL

int main()
{
	cout << a << endl;

	return 0;
}
