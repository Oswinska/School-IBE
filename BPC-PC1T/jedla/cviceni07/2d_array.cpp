// range_in_2d_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdarg.h>
#include <iostream>
#include "Body2d.h"
#define POCET_BODU 10

int main()
{
	int body[POCET_BODU][2] = { 5, 10,
	 -14, 2,
	 45, 4,
	 -9, 8,
	 58, -3,
	 47, 5,
	 -18, -86,
	 75, 7,
	 -25, 51,
	 17, 98 };
	int index, index2;
	double range = 0;
	int x = 0;
	int y = 0;
	// select own point to which will be compared with "body"
	printf("get point in Cartesian coordinate system: ");
	scanf_s("%d %d", &x, &y);
	index = indexNejblizsi(POCET_BODU, body, x, y);
	index2 = indexNejvzdalenejsi(POCET_BODU, body, x, y);
	range = prumernaVzdalenost(POCET_BODU, body, x, y);
	if (index == -1)
	{
		("something goes wrong");
	}
	else
	{
		printf("close point is [%d] [%d] and avrg distance is %lf and farthest point is [%d] [%d]", body[index][0], body[index][1], range, body[index2][0], body[index2][1] );

	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
