#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= val; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        val++;
        space--;
    }

    // create dymond pattern
    space = 1;
    val = n - 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= val; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        val--;
        space++;
    }

    return 0;
}