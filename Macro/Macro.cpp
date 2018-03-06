// Macros.cpp: Macro will and bad.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>


#define F 3
#define MAX1(a,b) a>b ? a:b // It will not work correctly because it isn't in parentheses. External operations can affect part of the Macro
#define MAX2(a,b) ((a)>(b) ? (a):(b)) // The correct way is to enclose everything in parentheses

int main()
{
	int x = 3; // some value
	int m = MAX1(x, F + 1) * 2; // 2 is multiplying a part of the operation. Them assign it to g
	printf("The result of the incorrect Macro is: %d,\nPress a key to continue\n", m); // show m in console
	_getch(); // pause
	int g = MAX2(x, F + 1) * 2; // 2 is multiplying the result of the operation. Them assign it to g
	printf("The result of the correct Macro is: %d,\nPress a key to exit\n", g); // show g in console
	_getch(); // pause

}