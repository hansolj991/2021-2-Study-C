#include <stdio.h>

int main(void)
{
    int num1, num2; //변수 선언
    int num3=30, num4=30; //변수 선언과 초기화
    
    printf("num1: %d, num2: %d \n", num1, num2); //아무것도 초기화되지 않아서 쓰레기값 출력
    num1=10; //변수 초기화
    num2=20; //변수 초기화

    printf("num1: %d, num2: %d \n", num1, num2);
    printf("num3: %d, num4: %d \n", num3, num4);
    return 0;
    }