/* ch01.programing-exercise-06.c */

/* ===================================80 chars=============================== */

/*
   Given the radius of a circle, write a program to compute and display its
   area. Use a symbolic constant to define the PI value and assume a suitable
   value for radius.
*/
#include <stdio.h>

#define PI 3.14159265359

int main( void )
{
	/* INPUT: Radius */
	#define RADIUS 3.0
	float area;

	/*
	        CALCULATE: Area

	        Area = Pi * r * r
	*/
	area = PI * RADIUS * RADIUS;
	printf( "PI = %f\tRadius = %f\tArea = %f\n", PI, RADIUS, area );
}

/* ===================================80 chars=============================== */

/* EOF */

