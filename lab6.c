#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    float x, y;

    printf("Введите координаты x и y: ");
    scanf("%f %f", &x, &y);

    if ((x >= -1 && x <= 2 && y >= -5 && y <= 5) || (x >= -5 && x <= -1 && y >= -5 && y <= -2) || (x >= 2 && x <= 6 && y >= 2 && y <= 5)) {
        printf("Точка принадлежит области");
    }
    else {
        printf("Точка не принадлежит области");
    }
}