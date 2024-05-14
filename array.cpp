#include <iostream>
#define SIZE 10

void displayArray(int array[]) {
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
int enterDataIntoArray(int array[]) {
    printf("Enter data into array\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] =\n", i);
        scanf("%d",&array[i]);
    }
    return 0;
}

int findMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int findMinimumValue(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}


