#include <stdio.h>
void swap(int *, int *);

int main()
{
    int x = 20;
    int y = 5;
    printf(" x: %d, y: %d\n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
