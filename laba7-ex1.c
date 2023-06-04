#include <stdio.h>
#include <string.h>

//Cортировка выбором
void selectionSort(char arr[][100], int a) {
    int i;
    int j;
    int minimum_id;
    for (i = 0; i < a-1; i++) {
        minimum_id = i;
        for (j = i+1; j < a; j++)
            if (strcmp(arr[j], arr[minimum_id]) < 0)
                minimum_id = j;

        if (minimum_id != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minimum_id]);
            strcpy(arr[minimum_id], temp);
        }

        printf("Сортировка выбором,итерация номер %d: ", i+1);
        for (int n = 0; n < a; n++)
            printf("%s ", arr[n]);
        printf("\n");
    }
}

// Сортировка пузырьком
void bubbleSort(char arr[][100], int b) {
    int i;
    int j;
    for (i = 0; i < b-1; i++) {
        for (j = 0; j < b-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
        printf("Сортировка пузырьком, итерация номер %d: ", i+1);
        for (int k = 0; k < b; k++)
            printf("%s ", arr[k]);
        printf("\n");
    }
}

// Сортировка расчёской
void combSort(char arr[][100], int с) {
    int gap_sort = с;
    float shrink_sort = 1.3;
    int sorted = 0;
    while (!sorted) {
        gap_sort = (int)(gap_sort / shrink_sort);
        if (gap_sort > 1) {
            sorted = 0;
        } else {
            gap_sort = 1;
            sorted = 1;
        }

        int i = 0;
        while (i + gap_sort < с) {
            if (strcmp(arr[i], arr[i + gap_sort]) > 0) {
                char temp[100];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[i + gap_sort]);
                strcpy(arr[i + gap_sort], temp);
                sorted = 0;
            }
            i++;
        }
        printf("Сортировка расчёской, номер %d: ", gap_sort);
        for (int k = 0; k < с; k++)
            printf("%s ", arr[k]);
        printf("\n");
    }
}

int main() {
    char arr[10][100];
    printf("Введите 10 слов\n");
    for (int i = 0; i < 10; i++)
        scanf("%s", arr[i]);

    selectionSort(arr, 10);
    bubbleSort(arr, 10);
    combSort(arr, 10);

    return 0;
}