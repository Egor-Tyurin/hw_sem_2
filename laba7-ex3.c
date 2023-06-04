#include <stdio.h>

int main() {
    char word[77];
    char *x;
    int glasnye = 0;
    int soglasnye = 0;

printf("Введите слово: ");
scanf("%s", word);

    x = word;

while (*x != '\0') {
    if (*x == 'a' || *x == 'e' || *x == 'i' || *x == 'o' || *x == 'u') {
    glasnye++;
    } else {
    soglasnye++;
    }
    x++;
}

printf("Количество гласных: %d\n", glasnye);
printf("Количество согласных: %d\n", soglasnye);

return 0;
}