#include <stdio.h>
int main() 
{
    const int i = 2;
    const int* ptr1 = &i;
    int* ptr2 = (int*)ptr1;
    *ptr2 = 3;
    printf("i = %d\n", i);
    printf("i = ptr2 = %d", *ptr2);
return 0; 
}
/*1) Результатом программы будет непредсказуемое значение переменной i, так как мы изменили ее через указатель, 
игнорируя константность переменной.
2) Результат тот же.
3) Неопределенное поведение (Undefined Behaviour) - это ситуация, когда поведение программы не определено 
стандартом языка программирования. Это может произойти при выполнении некорректного кода, например, при обращении к 
 неинициализированным переменным, выходу за границы массивов или изменении констант через указатели. 
 В таких случаях поведение программы может зависеть от компилятора, операционной системы или конкретных 
 условий выполнения программы, что делает ее непредсказуемой и ненадежной.*/