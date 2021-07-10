// 09_normal distribution with fishing simulation.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

float u()
{
	return rand()*1.0 / RAND_MAX;
}

float z()
{
	float sum = 0;
	for (int i = 0; i < 12; i++) sum += u();
	return sum - 6.0;
}

int main()
{
	//	fishing ground A: fish mean = 90cm, standard deviation = 15
	//	fishing ground B: fish mean = 80cm, standard deviation = 25
	//	simulation of 1000
	//	question: calculate fishing ground A max fish > fishing ground B max fish probability

	float x, y;
	int n = 0, m = 0;

	srand(time(NULL)); rand();
	for (int i = 0; i < 1000; i++)
	{
		float maxx1 = 0;
		float maxx2 = 0;
		for (int j = 0; j < 100; j++)
		{
			x = z() * 15 + 90;
			y = z() * 25 + 80;
			if (x > maxx1) maxx1 = x;
			if (y > maxx2) maxx2 = y;
		}
		if (maxx1 > maxx2) n++;
		else m++;
	}
	printf("A���j:%f\n", n*1.0 / 1000);
	printf("B���j:%f\n", m*1.0 / 1000);

	return 0;
}

