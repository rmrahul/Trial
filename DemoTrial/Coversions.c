//
//  Coversions.c
//  DemoTrial
//
//  Created by Rahul Mane on 12/04/17.
//  Copyright © 2017 Rahul Mane. All rights reserved.
//

#include "Coversions.h"


void decimalToBinary(){
    int i = 1;
    int decimalNumber;
    int remainder = 0;
    long binary = 0;
    
    printf("Enter number of to convert \n");
    scanf("%d",&decimalNumber);
    
    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        binary = binary + (remainder * i);
        i = i * 10;
    }
    
    printf("Binary number : %ld\n",binary);
    
}

void binaryToDecimal(){
    int i = 0;
    int binaryNumber;
    int decimalNumber = 0;
    int remainder = 0;
    
    printf("Enter binary number : \n");
    scanf("%d",&binaryNumber);
    
    while(binaryNumber != 0){
        remainder = binaryNumber % 10;
        binaryNumber = binaryNumber / 10;
        decimalNumber = decimalNumber + (remainder * pow(2,i));
        i++;
    }
    
    
    printf("Decimal number is : %d",decimalNumber);
}
