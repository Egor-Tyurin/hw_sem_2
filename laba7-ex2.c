#include <stdio.h>
#include <stdlib.h>

void combSort(int *arr, int length)
{
    int flag = 1;
    double shrink = 1.2473309;  
    int x = length;   

    
    while(x > 1 || flag)
    {
        
        if(x > 1)
        {
            x = (int)(x / shrink);
        }
        
        flag = 0;  
        int i = 0;
        while(i + x < length)  
        {
            if(*(arr + i) > *(arr + i + x))  
            {
                int tmp = *(arr + i);
                *(arr + i) = *(arr + i + x);
                *(arr + i + x) = tmp;
                flag = 1;  
            }
            i++; 
        }
    }
}

int main()
{
    int arr[] = {10, 5, 8, 20, 2, 18};  
    int length = sizeof(arr)/sizeof(arr[0]); 
    int *ptr;  
    ptr = &arr[0]; 

    combSort(ptr, length);  

    
    printf("Отсортированный массив: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}