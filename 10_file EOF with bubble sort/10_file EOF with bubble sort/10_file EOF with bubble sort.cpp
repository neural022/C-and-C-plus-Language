// 10_file EOF with bubble sort.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "stdio.h"

void sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
}

int main()
{
	int n = 0;
	int a[1000];
	char s[10];
	char t[10];

	printf("�п�J�ɦW:");
	scanf("%s", s);
	printf("�п�X�ɦW:");
	scanf("%s", t);

	FILE*f;
	f = fopen(s, "r");
	while (fscanf(f, "%d", &a[n]) != EOF) n++;	//	significant!!
	fclose(f);

	sort(a, n);
	FILE*g;
	g = fopen(t, "w");
	for (int i = 0; i < n; i++) fprintf(g, "%d\n", a[i]);
	fclose(g);

	return 0;
}

