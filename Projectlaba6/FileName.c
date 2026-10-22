#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    task1();
    task2();
    task3();

    return 0;
}

int task1()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    // a. Объявление целой переменной, year;
    int year;

    // b. Приглашение к вводу года;
    printf("Введите год: ");

    // c. Ввод с клавиатуры значений;
    scanf("%d", &year);

    // Вычисление остатка от деления введенного числа на 4
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // f. Вывод на экран результата
        printf("год %d високосный\n", year);
    }
    else {
        // f. Вывод на экран результата
        printf("год %d не високосный\n", year);
    }

    return 0;
}

int task2()
{
    double x, F;

    printf("Введите x: ");
    scanf("%lf", &x);

    /*
     * КОНТРОЛЬНЫЕ ПРИМЕРЫ:
     * 1) x = 3 (ветвь x >= 3): F = -(3*3) + 3*3 + 9 = 9
     * 2) x = 2 (ветвь x < 3):  F = 2 / (2*2*2 - 6) = 2 / 2 = 1
     */

    if (x >= 3) {
        F = -x * x + 3 * x + 9;
        printf("F(x) = %g\n", F);
    }
    else {
        // Проверяем знаменатель, чтобы не делить на ноль
        double znam = x * x * x - 6;

        // Тернарная операция прямо в printf:
        // Если znam != 0, выводим число, иначе выводим текст ошибки
        znam != 0 ? printf("F(x) = %g\n", x / znam)
            : printf("Ошибка: деление на ноль!\n");
    }

    return 0;
}

int task3()
{
    int n;

    printf("Введите число от 1 до 99: ");
    scanf("%d", &n);

    if (n < 1 || n > 99) {
        printf("Ошибка: число должно быть от 1 до 99.\n");
        return 0;
    }

    if (n % 10 == 1 && n != 11) {
        printf("%d копейка\n", n);
    }
    else if (n % 10 >= 2 && n % 10 <= 4 && (n < 10 || n > 20)) {
        printf("%d копейки\n", n);
    }
    else {
        printf("%d копеек\n", n);
    }

    return 0;
}