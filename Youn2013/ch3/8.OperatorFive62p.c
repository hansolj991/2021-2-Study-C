#include <stdio.h>

int main(void)
{
    int num1=10;
    int num2=(num1--)+2; // 후위 감소 (선 연산 후 감소)

    printf("num1: %d \n", num1); //감소된 값 들어감
    printf("num2: %d \n", num2);
    return 0;
}