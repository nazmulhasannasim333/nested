#include<stdio.h>
char capital_to_small(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch + 32;
    }
}

int main(){
    char ch;
    scanf("%c", &ch);
    char small = capital_to_small(ch);
    printf("%c", small);
    return 0;
}