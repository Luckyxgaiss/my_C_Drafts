#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>
 
#define N 15
char str[] = {'*', ' ', '@', ' ', '#', ' ', '\'',  ' ', '$', ' ', '%', ' ', '&', ' ', '!'};
 
void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}
 
void getCoord(double y, double x)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
 
void hideCursor()
{
    CONSOLE_CURSOR_INFO cursor= { 1, 0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}
 
void layer(int x, int y, int num, int col) {
    color(col);
    getCoord(x, y);
    int idx = rand()%N;
    printf("%c", str[idx]);
    for(int k = 1; k <= num; ++k) {
        idx = rand()%N;
        getCoord(x + k - 1, y);
        printf("%c", str[idx]);
        for(int i = 1; i <= (k*2-1)/2; i++) {
            getCoord(x + k - 1, y - i);
            idx = rand()%N;
            printf("%c", str[idx]);
            getCoord(x + k - 1, y + i);
            idx = rand()%N;
            printf("%c", str[idx]);
        }
    }
 
}
 
void triangle(int x, int y, int num, int col) {
    getCoord(x, y);
    color(col);
    printf("*");
 
    for(int i = 1; i <= num; ++i) {
            int x1 = x + i;
            int y1 = y - i;
        for(int j = 0; j < i * 2 + 1; ++j) {
            getCoord(x1, y1 + j);
            printf("*"); 
        }
    }
}
 
void triangleRight(double x, double y, double num, double col) {
    getCoord(x, y*2);
    color(col);
    printf("*");
 
    for(int i = 1; i <= num; ++i) {
            double x1 = x - i;
            double y1 = y - i;
        for(int j = 0; j < i * 2 + 1; ++j) {
            getCoord(x1 + j, y1 * 2);
            printf("*"); 
        }
    }
}
 
void triangleLeft(double x, double y, double num, double col) {
    getCoord(x, y*2);
    color(col);
    printf("*");
    for(int i = 1; i <= num; ++i) {
            double x1 = x - i;
            double y1 = y + i;
        for(int j = 0; j < i * 2 + 1; ++j) {
            getCoord(x1 + j, y1 * 2);
            printf("*"); 
        }
    }
}
 
void rectangle(int x, int y, int h, int w, int col1, int col2) {
    color(col1);
    for(int i = 0; i <= h; ++i) {
        for(int j = 0; j <= w/2; ++j) {
            getCoord(x + i, y - j);
            if(i % 3 || j % 2)
                printf("*");
            else {
                color(col2);
                printf("!");
                color(col1);
            }
                
            getCoord(x + i, y + j);
            if(i % 3 || j % 2)
                printf("*");
            else {
                color(col2);
                printf("!");
                color(col1);
            }
            
        }
    }
}
 
int main() {
    hideCursor();
    int colTop = 4;
    int colMid = 4;
    int colEnd = 13;
    while(true) {
        colTop = colTop == 4 ? 9 : 4;
        triangleLeft(5, 27.8, 2, colTop);
        triangleRight(5, 27.8, 2, colTop);
        Sleep(100);
        layer(5, 55, 10, 2);
        layer(9, 55, 16, 2);
        layer(14, 55, 26, 2);
        colMid = colMid == 4 ? 5 : 4;
        triangle(11, 55, 3, colMid);
        triangle(19, 60, 3, colMid);
        triangle(29, 42, 3, colMid);
        triangle(31, 57, 3, colMid);
        colEnd = colEnd == 13 ? 1 : 13;
        rectangle(40, 55, 15, 18, 6, colEnd);
        Sleep(200);
    }
    return 0;
}


