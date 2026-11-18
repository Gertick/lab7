### ***Домашнее задание к работе 7***
---
## ***Условие задачи***

Написать программу, которая для заданного возраста в месяцах (от 1 до 60) выводит текстовое сообщение, отображающее возраст в годах и месяцах с правильным склонением.

## ***1. Алгоритм и блок-схема***

* ***Алгоритм***
  1. **Начало**
  2. Задать исходные данные: ввести возраст в месяцах months.
  3. Вычислить количество полных лет: years = months / 12.
  4. Вычислить оставшиеся месяцы: months = months - years * 12.
  5. Проверить значение переменной years и оставшихся months с помощью ветвления, чтобы корректно подобрать склонение для слов «год / года / лет» и «месяц / месяца / месяцев».
  6. Вывести результат на экран.
  7. **Конец**

***Блок-схема***

<img width="573" height="970" alt="изображение" src="https://github.com/user-attachments/assets/c0be490e-3d21-44d9-a754-5e97c4a0fd3c" />

https://drive.google.com/file/d/1f7iPdljRDMqSoCFBc1FsZaQngiGVrtLS/view?usp=sharing

## ***2. Реализация программы***

```c
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

# 3. ***Результаты работы программы***

Введите возраст в месяцах (от 1 до 60): 24

2 года 0 месяцев

# 4. ***Информация о разработчике***

***Леонов Арсений , бТИИ-261***
