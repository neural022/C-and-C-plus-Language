// 10_file with mean and standard deviation.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"

#include"stdlib.h"
#include"time.h"
#include "string.h"
#include "math.h"

int main()
{
	char s[10];
	float sum = 0, sum2 = 0;

	FILE*f;
	f = fopen("a.txt", "r");
	fscanf(f, "%s", s);
	fscanf(f, "%s", s);
	for (int i = 0; i < 50; i++)
	{
		int u;
		fscanf(f, "%d", &u);
		fscanf(f, "%d", &u);
		sum += u;
		sum2 += u*u;
	}
	fclose(f);
	float a = sum2 - sum*sum / 50;
	printf("�����Ȭ�%6.2f\n", sum / 50);
	printf("�зǮt��%6.2f\n", sqrt(a / 50));

	return 0;
}

