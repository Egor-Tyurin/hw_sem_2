#include <stdio.h>
void test(int);
void positive();
void negative();

void test(int x) {
    printf("Введите целое число х: ");
    scanf("%d",&x);
    { if (x >= 0) {
         positive();
    }
    else {
        negative();
    }
    }
}

void positive() {
    printf("Положительное");
}

void negative() {
    printf("Отрицательное");
}

int main(int x) {
    test(x);
    return 0;
}