#include <stdio.h>

int main(void) {
    int age;
    char gender;

    printf("あなたの生物学的な性別は？\n男ならm、女ならwを入力\n:");
    if (scanf(" %c", &gender) != 1) {
        printf("性別の入力が正しくありません。\n");
        return 1;
    }

    printf("あなたは何歳ですか？\n");
    if (scanf("%d", &age) != 1) {
        printf("年齢が数字として正しく入力されませんでした。\n");
        return 1; 
    }

    if (gender == 'm') {
        if (age >= 20) {
            printf("成人男性\n");
        }
        else {
            printf("少年\n");
        }
    }
    else if (gender == 'w') {
        if (age >= 20) {
            printf("成人女性\n");
        }
        else {
            printf("少女\n");
        }
    }
    else {
        printf("性別の入力が間違っています。'm'または'w'を入力してください。\n");
    }
  return 0;
}