#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[256];
    gets(str);

    int n, num1, num2;
    int total = 0;
    int i;
    n = strlen(str);

    for(i = 0;i < n;i = i + 2){
        switch (str[i]){
            case '0':
                num1 = 0;
                break;
            case '1':
                num1 = 1;
                break;
            case '2':
                num1 = 2;
                break;
            case '3':
                num1 = 3;
                break;
            case '4':
                num1 = 4;
                break;
            case '5':
                num1 = 5;
                break;
            case '6':
                num1 = 6;
                break;
            case '7':
                num1 = 7;
                break;
            case '8':
                num1 = 8;
                break;
            case '9':
                num1 = 9;
                break;

        }
         switch (str[i+1]){
            case '0':
                num2 = 0;
                break;
            case '1':
                num2 = 1;
                break;
            case '2':
                num2 = 2;
                break;
            case '3':
                num2 = 3;
                break;
            case '4':
                num2 = 4;
                break;
            case '5':
                num2 = 5;
                break;
            case '6':
                num2 = 6;
                break;
            case '7':
                num2 = 7;
                break;
            case '8':
                num2 = 8;
                break;
            case '9':
                num2 = 9;
                break;
        }
        switch (str[i+1]){
            case '+':
                total = num1 + num2;
                break;
            case '-':
                total = num1 - num2;
                break;
            case '/':
                total = num1 / num2;
                break;
            case '*':
                total = num1 * num2;
                break;
        }
    }

    puts(" ");
    printf("%s = %d", str, total);

    puts(" ");

return 0;
}

