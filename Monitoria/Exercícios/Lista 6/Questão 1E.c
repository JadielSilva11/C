#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    int *ptr=&x;

    printf("%d", *ptr);
    
    return 0;
}