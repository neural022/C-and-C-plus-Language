// 05_array with bubble sort.cpp : �w�q�D���x���ε{�����i�J�I�C
//

//	visual studio scanf solution
//	�M�ס��ݩʡ��e�m�B�z�����s��(add: _CRT_SECURE_NO_WARNINGS)
#include "stdafx.h"
#define N 6

int main()
{
	// example: bubble sort
	int a[N], t;
	for (int i = 0; i < N; i++) scanf("%d", &a[i]);
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < (N - 1) - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int j = 0; j < N; j++) printf("%d", a[j]);

	return 0;
}

