#include <stdio.h>

int main() {

    int num = 0;
    int num2 = 0;
    float num3 = 0;
    int T = 1;

    printf("--------�Ҽ�ã�� ���α׷�----------\n\n");
    printf("�Է� : ");
    scanf_s("%d", &num);
    printf("%d������ ���� �� �Ҽ��� ã�� ��..\n", num);

    printf("2 ");

    for (int i = 3; i <= num; i++)
    {
        for (int j = 2; j <= i - 1; j++)
        {
            num2 = i;
            num3 = num2 % j;

            if (num3 == 0)
            {
                T = 1;
                break;
            }
            else
            {
                T = 0;
            }

        }
        if (T == 0)
        {
            printf("%d ", i);
        }
    }


    return 0;
}