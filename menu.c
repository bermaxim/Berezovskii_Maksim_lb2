#include <stdio.h>

#define N 100

#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

int main(){

    int array[N];
    int i = 0;

    while (scanf("%d", &array[i]) == 1){
        i++;
    }   

    int len = i;
    
    int index_max = abs_max(array, len);
    int index_min = abs_min(array, len);

    switch (array[0])
    {
    case 0:
        printf("%d\n", array[index_max]);
        break;
    case 1:                            
        printf("%d\n", array[index_min]);
        break;
    case 2:
        printf("%d\n", diff(array, index_max, index_min));
        break;
    case 3:
        printf("%d\n", sum(array, len, index_max));
        break;
    default:
        printf("Данные некорректны\n");
        break;
    }
    
    return 0;
}