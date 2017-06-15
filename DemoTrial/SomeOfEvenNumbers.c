//
//  SomeOfEvenNumbers.c
//  DemoTrial
//
//  Created by Rahul Mane on 12/04/17.
//  Copyright © 2017 Rahul Mane. All rights reserved.
//

#include "SomeOfEvenNumbers.h"


void sumOfEvenNumbers(){
    int i = 0;
    int numberOfElements;
    int array[100];
    
    int sum = 0;
    
    printf("Enter number of elements arrays \n");
    scanf("%d",&numberOfElements);
    
    printf("Elements in array will be : %d\n",numberOfElements);

    for (i = 0; i<numberOfElements; i++) {
        scanf("%d",&array[i]);
    }
    
    for (i = 0; i < numberOfElements; i++) {
        if(array[i] % 2 == 0){
            sum = sum + array[i];
        }
    }
    
    printf("SUM is : %d",sum);
}


void pattern(){
    int i,j;
    int rows = 4;
    int column = (rows*2-1);
    
    int c = '7' - '0';

    printf("Some %d",'0');
    
    for(i = 0; i <  10; i++){
        for (j = 0; j < 10; j ++) {
            printf(" %3.d",(i+1)*(j+1));
        }
        printf("\n");
    }
    
    
    for (i = 1; i <= 5; i++) {
        for (j = 0 ; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n\n\n\n");


    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < column ; j++) {
            if(j < (column/2 - i)){
                printf(" ");
            }
            else if(j > (column/2 + i)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < column ; j++) {
            if(j < (column/2 - i)){
                printf("*");
            }
            else if(j > (column/2 + i)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
