/* 09pe01.c */
/* ===================================80 chars=============================== */

/*
Write a function exchange to interchange the values of two variables, say x and
y. Illustrate the use of this function, in a calling function. Assume that x and
y are global variables.
*/

/*
Compiled & tested on:
	Apple LLVM version 9.1.0 (clang-902.0.39.1)
	Target: x86_64-apple-darwin17.5.0
with:
	clang -x c -std=c89 -pedantic-errors -Wall -Werror -Wextra -Wcomment \
	-Wparentheses -Wformat-zero-length 09pe01.c -o binary/09pe01
*/

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* CONFIGURATION */
#define LINES_TO_CLEAR_SCREEN 90
#define DASH_COUNT_FOR_HEADER_FOOTER 66
/* ********************************** */
#define TITLE "FUNCTION: EXCHANGE"
#define CFGDEBUG 1

/* FUNCTION PROTOTYPES */
void cls(void);
void displayHeader(void);
void displayFooter(void);
void exchange(void);

/* GLOBALS */
int x = 5;
int y = 10;

/* PROGRAM ENTRY POINT */
int main(void)
{
	/* BEGIN: Declare Variables ***************************************** */
	/* END: Declare Variables ******************************************* */

	/* BEGIN: Program Main Code ***************************************** */
	cls();
	displayHeader();

	printf("PRE exchange() execution values:\tx=%d\ty=%d\n", x, y);
	exchange();
	printf("POST exchange() execution values:\tx=%d\ty=%d\n", x, y);

	/* END: Program Main Code ******************************************* */

	/* BEGIN: Standard Footer Section *********************************** */
	displayFooter();
	/* END: Standard Footer Section ************************************* */

	return 0;
}

/* FUNCTIONS */
void cls(void)
{
	int n;
	for (n = 0; n < LINES_TO_CLEAR_SCREEN; n++) {
		printf("\n");
	}
}

void displayHeader(void)
{
	char s[] = TITLE;
	int tmp = 0;
	for (tmp = 0; tmp < DASH_COUNT_FOR_HEADER_FOOTER; tmp++) {
		printf("-");
	}
	printf("\n%s\n\n", s);
}

void displayFooter(void)
{
	int tmp = 0;
	for (tmp = 0; tmp < DASH_COUNT_FOR_HEADER_FOOTER; tmp++) {
		printf("-");
	}
	printf("\n");
}

void exchange()
{
	int tmp = y;

	y = x;
	x = tmp;
}

/* ===================================80 chars=============================== */
/* EOF */
