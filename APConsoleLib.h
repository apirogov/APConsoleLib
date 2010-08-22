/* 
 * APConsoleLib.h
 * (C) 2008 Anton Pirogov
 */

#ifndef APCONSOLELIB_H
#define	APCONSOLELIB_H

#ifdef	__cplusplus
extern "C" {
#endif

#define CONSOLELIB_VERSION  "0.1"   /* Current version */
#ifdef WIN32    /* Windows specific */
#include <windows.h>
#include <conio.h>

#else           /* Linux specific */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
    /* these are standard in windows */
    int getch(void);
    int kbhit(void);
#endif

    void clearConsole(void);
    void consoleGotoXY(short, short);
    void setConsoleColor(short);
    void setConsoleTitle(char*);
    void setConsoleSize(short, short);
    void getConsoleSize(short*, short*);

#ifdef	__cplusplus
}
#endif

#endif	/* APCONSOLELIB_H */

