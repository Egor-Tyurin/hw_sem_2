#include <stdio.h>
#include <string.h>

char str[7] = {'H' , 'e' , 'l' , 'l' , 'l' , 'o' , 'l'};
int k = 0 ;
int maxk = 0;

int main() {
    char sumbol;
    printf("Начальная строка : %s \n", str);
    printf("Введите символ, который хотите проверить: ");
    scanf("%c",&sumbol);
    for(int i = 0; i <= 7; i++) {
        if (str[i] == sumbol) {
            k++;
            if (k > maxk) {
                maxk = k;
            }
        } else {
            k = 0;
        }
    }
    printf("%d",maxk);
    return 0;
} 



