#include <stdio.h>

int main()
{
    int x=10;
    int *px=&x;
    int **ppx=&px;
    printf("%d", &px);
    
    return 0;
}
