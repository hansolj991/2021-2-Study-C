#include <stdio.h>

int main(void)
{
    int num1, num2; //���� ����
    int num3 = 30, num4 = 30; //���� ����� �ʱ�ȭ

    printf("num1: %d, num2: %d \n", num1, num2); //�ƹ��͵� �ʱ�ȭ���� �ʾƼ� �����Ⱚ ���
    num1 = 10; //���� �ʱ�ȭ
    num2 = 20; //���� �ʱ�ȭ

    printf("num1: %d, num2: %d \n", num1, num2);
    printf("num3: %d, num4: %d \n", num3, num4);
    return 0;
}