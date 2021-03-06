/* 01pe14.c */
/* ===================================80 chars=============================== */

/*
A point on the circumferenceInt of a circle whose center is (0,0) is (4,5).
Write a program to compute perimeter and areaInt of the circle.

Hint: Use the formula given in Exercise 1.11.
*/

/*
Compiled & tested with:
gcc -std=c89 -pedantic -Wall -Werror $filename.c -o binary/$filename
*/

#include <stdio.h>
/* Required for: exit() */
#include <stdlib.h>

/* Required for: sqrt() */
#include <math.h>

/* On Borland C++ v.3.1 we use round() from custom implementation */
#ifdef _WIN32
#elif defined __unix__
#elif defined __APPLE__
#else
#include "round.h"
#endif

typedef struct {
	int x, y;
} Point;

#define P1X 0
#define P1Y 0
#define P2X 4
#define P2Y 5
#define PI 3.14159265359

/*
Distance between two points (x₁, y₁) and (x₂, y₂) is governed
by the formula:	D² = (x₂ - x₁)² + (y₂ - y₁)²

rounded to nearest int.
*/
int pointDistanceInt(Point p1, Point p2)
{
	return round(sqrt(((p2.x - p1.x) * (p2.x - p1.x)) +
			  ((p2.y - p1.y) * (p2.y - p1.y))));
}

float pointDistanceFloat(Point p1, Point p2)
{
	return sqrt(((p2.x - p1.x) * (p2.x - p1.x)) +
		    ((p2.y - p1.y) * (p2.y - p1.y)));
}

int main(void)
{
	/* Origin */
	Point p1;
	/* Given Point */
	Point p2;
	/*
	int	a, b, c;
	int	perimeter;
	float	s;
	*/
	int radiusInt;
	float radiusFloat;
	int diameterInt;
	float diameterFloat;
	int circumferenceInt;
	float circumferenceFloat;
	int areaInt;
	float areaFloat;

	/* origin */
	p1.x = P1X;
	p1.y = P1Y;
	/* given point */
	p2.x = P2X;
	p2.y = P2Y;

	radiusInt = pointDistanceInt(p2, p1);
	radiusFloat = pointDistanceFloat(p2, p1);
	diameterInt = 2 * radiusInt;
	diameterFloat = (float)2 * radiusFloat;
	circumferenceInt = PI * diameterInt;
	circumferenceFloat = PI * diameterFloat;
	areaInt = PI * radiusInt * radiusInt;
	areaFloat = (float)PI * radiusFloat * radiusFloat;

	printf("\n\n");
	printf("--------------------------------------------\n");
	printf("INPUT\n\n");
	printf("Points\t\t\t: p1=%d,%d   p2=%d,%d\n", p1.x, p1.y, p2.x, p2.y);
	printf("--------------------------------------------\n");
	printf("\n\n");
	printf("--------------------------------------------\n");
	printf("CALCULATION RESULTS\n\n");
	printf("*** INT **********************************\n");
	printf("radiusInt (p2->p1 distance)\t: %d\n", radiusInt);
	printf("diameterInt\t\t\t: %d\n", diameterInt);
	printf("circumferenceInt\t\t: %d\n", circumferenceInt);
	printf("areaInt\t\t\t\t: %d\n", areaInt);
	printf("*** FLOAT **********************************\n");
	printf("radiusFloat (p2->p1 distance)\t: %f\n", radiusFloat);
	printf("diameterFloat\t\t\t: %f\n", diameterFloat);
	printf("circumferenceFloat\t\t: %f\n", circumferenceFloat);
	printf("areaFloat\t\t\t: %f\n", areaFloat);
	printf("--------------------------------------------\n");
	printf("\n");

	return 0;
}

/* ===================================80 chars=============================== */

/* EOF */
