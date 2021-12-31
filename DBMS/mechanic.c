#include "STU_STR.h"
void gotoxy (int x, int y)   {
         COORD	Pos = {x, y};
         SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), Pos);
   }
void setColor (int fg, int bg)   {
    int	color = bg * 16 + fg;  // bg: 배경색, fg: 글자색
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), color);
}
void movePosition (char key, int *y, int max, int min)   {
    switch(key) {
        case 72: // up
            *y -= 1;
            if (*y < min) *y = min;
            break;
        case 80: // down
            *y += 1;
            if (*y > max) *y = max;
            break;

        default:
            break;
    }
}
