#include <stdio.h>
long long factorial(int);

long long factorial(int x) {
    if (x == 1)
    {
        return 1;
    }
    return x * factorial(x - 1);
}


int main() {
    int n ;
    printf("Введите натуральное n: ");
    scanf("%d",&n);
    printf("%d! = %lld\n", n , factorial(n));
    return 0;
}
