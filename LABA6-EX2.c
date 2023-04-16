#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 5

void find_element(int arr[ROWS][COLS], int target) {
    for(int i=0; i < ROWS; ++i) {
        for(int j=0; j < COLS; ++j) {
            if(arr[i][j] == target) {
                printf("Элемент %d найден в строке %d, столбце %d\n",target, i+1, j+1);
                return;
            }
        }
    }
    printf("Элемент %d не найден в массиве\n", target);
}

int main() {
    int arr[ROWS][COLS];
    srand(time(NULL));  // заполняем массив случайными числами от 1 до 10
    for(int i=0; i < ROWS; ++i) {
        for(int j=0; j < COLS; ++j) {
            arr[i][j] = rand() % 10 + 1;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Введите значение искомого элемента: ");
    int target;
    scanf("%d", &target);
    find_element(arr, target);
    return 0;
}