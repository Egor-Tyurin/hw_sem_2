#include <stdio.h>

int main(int n) {
    
    printf("Введите степень бинома Ньютона: ");
    scanf("%d", &n);

    int pascal[n+1][n+1]; //объявление массива
    for (int i = 0; i <= n; i++) {   //цикл по строкам массива
        for (int j = 0; j <= i; j++) {  //цикл по столбцам массива
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } 
            else {
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
    }

    printf("Треугольник Паскаля до строки с номером %d:\n", n);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}