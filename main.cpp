#include <iostream>
#include "array.h"
#define SIZE 10

void menu(){
    printf("Select an option:\n");
    printf("1. Enter the values into array\n");
    printf("2. Display the content of the array\n");
    printf("3. Determine the minimum value\n");
    printf("4. Determine the maximum value\n");
    printf("5. Determine the average value\n");
    printf("6. Save to file\n");
    printf("7. Restore from file\n");
    printf("8. Delete last number\n");
    printf("9. Delete first number\n");
    printf("0. Exit\n");
    printf("Select an option: \n\n");
}

int main() {
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    printf("Simple array\n\n");

    int option = 0;

    do{
        menu();
        scanf("%d", &option);
        switch (option){
            case 0 :
                break;
            case 1 :
                printf("Entering the values into array\n\n");
                enterDataIntoArray(array);
                break;
            case 2 :
                displayArray(array);
                break;
            case 3 : {

                printf("Minimum value = %d\n");
                break;
            }
            case 4 : {

                printf("Maximum value = %d\n");
                break;
            }
            case 5 :
                printf("Average value = %f\n");
                break;
            case 6:

                break;
            case 7 :

                break;
            case 8 :

                break;
            case 9 :

                break;
            default:
                printf("Pick the right number\n");
        }
    }
    while(option !=0);
    printf("THE END\n");
    return 0;
}