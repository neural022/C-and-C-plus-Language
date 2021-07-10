// 09_uniform distribution with circle simulation.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

float u()
{
	return (rand()*1.0 / RAND_MAX);
}

int main()
{
	float r, x, y, pi, s;
	int sum = 0;
	scanf("%f", &r);
	srand(time(NULL)); rand();
	for (int i = 0; i < 100000; i++)
	{
		x = u();
		y = u();
		if (x*x + y*y < 1) sum++;
	}
	pi = sum*4.0 / 100000;
	printf("�b�|��%f���ꭱ�n��%f\n", r, pi*r*r);

	return 0;
}
