#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}