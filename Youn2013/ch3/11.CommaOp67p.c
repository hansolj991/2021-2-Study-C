#include <stdio.h>

int main(void)
{
    int num1=1, num2=2;
    printf("Hello "), printf("world! \n"); // 콤마 사용해서 프린트 연속호출 가능
    num1++, num2++;
    printf("%d", num1), printf("%d", num2),printf("\n");
    return 0;
}