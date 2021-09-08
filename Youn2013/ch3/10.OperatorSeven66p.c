#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 12;
    int result1, result2, result3;

    result1 = (num1==0 && num2==12); //(and 연산자)
    result2 = (num1<12 || num2>12); //(or 연산자)
    result3 = (!num1);               //(not연산자)

    printf("result1: %d \n", result1 );
    printf("result2: %d \n", result2 );
    printf("result3: %d \n", result3 );
    return 0;
}