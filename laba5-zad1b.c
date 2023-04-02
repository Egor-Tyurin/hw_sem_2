#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>


int main() {

    double x ;
    double y ;
    
    printf("x= ");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    
    if ((x >= 0) && (y >= 0) && (x <= 5) && (y <= 5) && ((pow((y-5),2) + pow((x-5),2)) >= 25)){
        printf("1");
    } 
    else{
        printf("0");
    }
    return 0;
}

//Тесты:
// (95748,946967) (False)
// (65,8) (False)
// (0,6) (False)
// (77,0) (False)
// (3,3) (False)

// (0,0) - значения должны быть истинными
// (1,1)
// (0,5)
// (5,0)
// (2,1)