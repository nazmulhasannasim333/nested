#include <stdio.h>

char small_to_capital(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    return ch;
}

int main()
{
    char ch;
    scanf("%c", &ch);
    char capital = small_to_capital(ch);
    printf("%c", capital);
    return 0;
}