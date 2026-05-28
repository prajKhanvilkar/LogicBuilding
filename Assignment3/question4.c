#include<stdio.h>

void Display(char cValue){
    char cChar = '\0';
    if(cValue >= 'A' && cValue <= 'Z'){
        cChar = cValue.toLowerCase();
    }
    else if(cValue >= 'a' && cValue <= 'z'){
        cChar = cValue.toUpperCase();
    }
}
int main(){
    char cValue = 0;
    printf("Enter Character: \n");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}