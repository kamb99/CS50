/*
 * B. Kaminskyi
 */
#include <stdio.h>

int main(void)
{
    // mario
    int height = 0; // висота яку вводимо
    int hashes = 1; // хеші. на початку циклу збільшуємо на 1. при цьому завжди в першому рядку буде 2 хеша
    int counter = 0;
    // вводимо висоту
    scanf("%i",&height);

    // змінна для циклу яка зменшується на кожній ітерації
    counter = height;

    // вічний цикл. виключаємо його через ретурн 0
    while(true)
    {
        hashes++;
        //прінт спейсів
        for (int i = 0; i < height - hashes + 1; ++i)
        {
            printf(" ");
        }

        //прінт хешів
        for (int i = 0; i < hashes; ++i)
        {
            printf("#");
        }

        // перехід на новий рядок
        printf("\n");

        // зменшуємо змінну яка відображає кількість рядків що залишились
        counter--;

        // якщо counter = 0 то виходимо з програми.
        if (counter == 0)
        {
            return 0;
        }
    }


}