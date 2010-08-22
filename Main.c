/* 
 * Main.c
 * Demo program testing APConsoleLib Functions
 * (C) 2008 Anton Pirogov
 */

#include <stdio.h>
#include "APConsoleLib.h"

int main()
{
	int i;
	short xsize;
	short ysize;
	char *text = "HelloworldABCDEF";
	char key = 0;

	setConsoleTitle("Console Lib Test");
	setConsoleSize(50, 15);
	clearConsole();

	for (i = 0; i < 16; i++) {
		setConsoleColor(i);
		printf("%c", text[i]);
	}

	getConsoleSize(&xsize, &ysize);
	consoleGotoXY(10, 10);
	printf("Terminal size:%ix%i\n", xsize, ysize);

	while (key != 'q') {
		key = 0;
		if (kbhit())
			key = getch();
		if (key != 'q' && key != 0) {
			consoleGotoXY(10, 10);
			printf("You pressed: %c (%i)\n", key, key);
		}
	}

	printf("Input: ");
	int ix;
	scanf("%i", &ix);
	return 0;
}