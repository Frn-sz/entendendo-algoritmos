#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lentgh 100

int find_min(int *v, int search_start)
{
    int min = v[search_start];
    int pos = search_start;
    for (size_t i = search_start; i < lentgh; ++i)
    {
        if (min > v[i])
        {
            min = v[i];
            pos = i;
        }
    }

    return pos;
}

void selection_sort(int *v)
{
    int temp;
    int min_pos = 0;
    for (size_t i = 0; i < lentgh; ++i)
    {
        min_pos = find_min(v, i);
        temp = v[i];
        v[i] = v[min_pos];
        v[min_pos] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int v[lentgh];

    srand(time(NULL));
    for (size_t i = 0; i < lentgh; ++i)
        v[i] = rand() % lentgh;

    printf("Não ordenado\n");
    for (size_t i = 0; i < lentgh; ++i)
        printf("%d\n", v[i]);

    selection_sort(v);

    printf("Ordenado\n");
    for (size_t i = 0; i < lentgh; ++i)
        printf("%d\n", v[i]);

    return 0;
}
