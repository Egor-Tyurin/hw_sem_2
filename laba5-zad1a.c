#include <stdio.h>  // Библиотека для работы с функциями ввода-вывода
#include <stdbool.h>
#include <stdlib.h>	//Данная библиотека для многих функций Си нужна, но не здесь
#include <locale.h> // Библиотека для указания локации (региональной кодировки) для Visual Studio

int bissectrice(double, double);
int vertical(double, double);
int horizontal(double, double);

// Конструкция с void main работает только на Си. Си++ такое уже не примет.
// Дело в том, что при выполнении функции main() запускается новый Процесс (Process), к которой автоматически подколючается Runtime Library.
// return 0; - является кодом выхода из этого Process. Поэтому необходим int main(){return0;}
int main() {
	int x=-5;
	int y=5;
	printf( "x=" );
	scanf("%d", &x);
	printf( "y=" );
	scanf("%d", &y);
	printf("%d", (!vertical(x, y) && !horizontal(x, y) && bissectrice(x, y)) || (vertical(x, y) && horizontal(x, y)));
	return 0;
}

int bissectrice(double x, double y) {
	bool res = true;
	res = ((y <= -x));
	return res;
}

/*
ЛОГИЧЕСКИЕ ВЫРАЖЕНИЯ:
	!
	&&
	||

ЛОГИЧЕСКИЕ ПОБИТОВЫЕ ВЫРАЖЕНИЯ:
	~
	&
	|
	^
	>>
	<<

*/
int vertical(double x, double y) {
	bool res = true;
	res = (x > 4);
	return res;
}
int horizontal(double x, double y) {
	bool res = true;
	res = (y > 3);
	return res;
}

/*
Черновик:
На вход (double x, double y)

3 функции:
bissectrice(double x, double y)
vertical(double x, double y)
horizontal(double x, double y)
выход int result;

*/
//Тесты
// (0,0)
// (100,100)
// (5,4)
// (5,3)
// (-50,50)
// (-1,1)
// (0,-1)
// (-5,6) (False)
// (13,2) (False)
// (-5,2)