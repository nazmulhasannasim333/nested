#include <stdio.h>

int char_to_ascii(char ch)
{
    int asc_val = ch;
    return asc_val;
}

int main()
{
    char ch;
    scanf("%c", &ch);
    int result = char_to_ascii(ch);
    printf("%d", result);
    return 0;
}