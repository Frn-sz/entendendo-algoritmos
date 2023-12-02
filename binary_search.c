#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define ARRAY_SIZE 100
/*
Algoritmo de pesquisa binária simples
Aceita apenas números inteiros positivos
*/

int binary_search(int *array, int target, int *qnt_attempts)
{
    int low_pos = 0;
    int high_pos = ARRAY_SIZE;

    while (low_pos <= high_pos)
    {
        (*qnt_attempts)++;
        int middle_pos = (low_pos + high_pos) / 2;
        int guess = array[middle_pos];

        if (target == guess)
        {
            return middle_pos;
        }
        else if (guess > target)
        {
            high_pos = middle_pos - 1;
        }
        else
        {
            low_pos = middle_pos + 1;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int *array = (int *)(malloc(sizeof(int) * ARRAY_SIZE));

    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = i + 50;
    }

    int target;
    int qnt_attempts = 0;

    printf("Digite seu chute: ");
    scanf("%d", &target);

    int result = binary_search(array, target, &qnt_attempts);

    if (result == -1)
    {
        printf("Seu chute não está na lista.");
        return 0;
    }

    printf("Seu chute está na posição:%d\n Número de tentativas: %d", result, qnt_attempts);
    return 0;
}
