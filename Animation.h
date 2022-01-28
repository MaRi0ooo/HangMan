#ifndef ANIMATION_H
#define ANIMATION_H

#include <Windows.h>
#include <iostream>

template<int txt = 7, int bg = 0>
std::ostream& color(std::ostream& text) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | txt));
	return text;
}

void printLogo();
void printName();

#endif // !ANIMATION_H