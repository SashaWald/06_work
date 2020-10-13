//Sasha Wald
//Systems Level Programming
//HW 6
//10-13-20

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int my_array[10];
    int *arrayp1 = my_array;
    
    srand(time(NULL));
    
    int i;
    for(i = 0; i < 9; i++){
        my_array[i] = rand();
    }
    
    my_array[9] = 0;
    
    for(i = 0; i < 10; i++){
        printf("value %d in a1: %d\n",i,my_array[i]);
    }
    printf("\n");
    
    int my_array_2[10];
    int *arrayp2 = my_array_2;
    
    for (i = 0; i < 10; i++){
        int j = 9-i;
        *(arrayp2+i) = *(arrayp1 + j);
    }
    for (i = 0; i < 10; i++){
        printf("value %d in a2: %d\n",i,my_array_2[i]);
    }
    return(0);
}