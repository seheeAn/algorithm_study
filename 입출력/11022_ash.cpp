#include <stdio.h>

int main() {
    int num, A, B;
    scanf_s("%d", &num); //visual studio������ scanf_s�� ����ϰ� scanf�� �����... ��¼������

    for (int i = 0; i < num; i++) {
        scanf_s("%d %d", &A, &B);
        printf("Case #%d: %d + %d = %d \n", i+1, A, B, A + B);
    }
    return 0;
}