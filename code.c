#include <stdio.h>
#include <locale.h>
#include <math.h>

void task1()
{
    char c;

    printf("Задание 1\n");
    printf("Введите символ: ");
    scanf("%c", &c);
    printf("\n");

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;
    default:
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 'а' && c <= 'я') || (c >= 'А' && c <= 'Я'))
        {
            printf("Это буква\n");
        }
        else
        {
            printf("Это не цифра и не буква\n");
        }
    }
}

void task2()
{
    float x, y;
    char cc;

    printf("\nЗадание 2\n");
    printf("Введите выражение в формате (например: 5+3 или 2^3): ");
    scanf("%f %c %f", &x, &cc, &y);
    printf("\n");

    switch (cc)
    {
    case '+':
        printf("= %.6f\n", x + y);
        break;

    case '-':
        printf("= %.6f\n", x - y);
        break;

    case '*':
        printf("= %.6f\n", x * y);
        break;

    case '/':
        if (y == 0.0f)
        {
            printf("Ошибка: деление на ноль!\n");
        }
        else
        {
            printf("= %.6f\n", x / y);
        }
        break;

    default:
        printf("Ошибка: неизвестная операция %c!\n", cc);
        break;
    }
}

void task3()
{
    int years;
    int months;

    printf("\nЗадание 3\n");
    printf("Введите возраст в месяцах (от 1 до 60): ");
    scanf("%d", &months);
    printf("\n");

    years = months / 12;
    months = months - years * 12;
    if (years == 0)
    {
        if (months == 1)
        {
            printf("%d месяц", months);
        }
        else if (months > 1 && months < 5)
        {
            printf("%d месяца", months);
        }
        else if ((months >= 5 && months < 12) || months == 0)
        {
            printf("%d месяцев\n", months);
        }
    }

    else if (years == 1)
    {
        if (months == 1)
        {
            printf("%d год %d месяц", years, months);
        }
        else if (months > 1 && months < 5)
        {
            printf("%d год %d месяца", years, months);
        }
        else if ((months >= 5 && months < 12) || months == 0)
        {
            printf("%d год %d месяцев\n", years, months);
        }
    }

    else if (years > 1 && years < 5)
    {
        if (months == 1)
        {
            printf("%d года %d месяц", years, months);
        }
        else if (months > 1 && months < 5)
        {
            printf("%d года %d месяца", years, months);
        }
        else if ((months >= 5 && months < 12) || months == 0)
        {
            printf("%d года %d месяцев\n", years, months);
        }
    }

    else
    {
        if (months == 1)
        {
            printf("%d лет %d месяц", years, months);
        }
        else if (months > 1 && months < 5)
        {
            printf("%d лет %d месяца", years, months);
        }
        else if ((months >= 5 && months < 12) || months == 0)
        {
            printf("%d лет %d месяцев\n", years, months);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    task1();
    task2();
    task3();
}