#include <stdio.h>

int main(void) {
    int age;
    char gender;

    printf("���Ȃ��̐����w�I�Ȑ��ʂ́H\n�j�Ȃ�m�A���Ȃ�w�����\n:");
    if (scanf(" %c", &gender) != 1) {
        printf("���ʂ̓��͂�����������܂���B\n");
        return 1;
    }

    printf("���Ȃ��͉��΂ł����H\n");
    if (scanf("%d", &age) != 1) {
        printf("�N������Ƃ��Đ��������͂���܂���ł����B\n");
        return 1; 
    }

    if (gender == 'm') {
        if (age >= 20) {
            printf("���l�j��\n");
        }
        else {
            printf("���N\n");
        }
    }
    else if (gender == 'w') {
        if (age >= 20) {
            printf("���l����\n");
        }
        else {
            printf("����\n");
        }
    }
    else {
        printf("���ʂ̓��͂��Ԉ���Ă��܂��B'm'�܂���'w'����͂��Ă��������B\n");
    }
  return 0;
}