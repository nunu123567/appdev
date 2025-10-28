#pragma once
// constant definition
enum COLORS { BLACK=30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE };

//function declaration
void setBGcolor(int c);
void clearScreen(void);
void gotoXY(int x, int y);
void setFGcolor(int c);
void resetcolors(void);