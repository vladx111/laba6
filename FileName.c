
#include <locale.h>
#include <stdio.h>

int zadanie1();
int zadanie2();
int zadanie3();

int main() {
    setlocale(LC_ALL, "RUS");

    int yeas;
    int ost;

    printf("Введите год: ");
    scanf_s("%d", &yeas);

    ost = yeas % 4;

    if (ost == 0) {
        printf("Год %d високосный\n", yeas);
    }
    else {
        printf("Год %d не високосный\n", yeas);
    }

    zadanie1();  
    zadanie2();
    zadanie3();
    

    return 0;
}

int zadanie1() {
    int yeas;

    printf("Введите год для задания 2: ");
    scanf_s("%d", &yeas);

    if ((yeas % 4 == 0 && yeas % 100 != 0) || yeas % 400 == 0) {
        printf("Год %d високосный\n", yeas);
    }
    else {
        printf("Год %d не високосный\n", yeas);
    }

    return 0;
}

int zadanie2() {

    double x;

    printf("Введите x: ");
    scanf_s("%lf", &x);

    printf("F(%.2f) = %.6f\n", x,
        (x >= -3.5) ? (4 * x * x + 2 * x - 19) :
        (2 * x / (-4 * x + 1)));

    return 0;
}

int zadanie3() {

    int N;
    int a, b, c;
    int p;

    printf("Введите число N (N < 1000): ");
    scanf_s("%d", &N);

    if (N > 1000) {
        printf("N меньше 1000");

    }
    else {
        a = N / 100;
        b = (N / 10) % 10;
        c = N % 10;

        p = a * b * c;

        printf("Произведение цифр числа %d равно %d\n", N, p);

        printf("Произведение %s трехзначным числом\n",
            (p >= 100 && p <= 999) ? "является" : "не является");
    }
    return 0;
}





















