//
//  ReverseString.c
//  DemoTrial
//
//  Created by Rahul Mane on 12/04/17.
//  Copyright © 2017 Rahul Mane. All rights reserved.
//

#include "ReverseString.h"
#include<string.h>


char*  reverseStringUsingRecurssion(char* str){
    static int i = 0;
    static char rev[100];
    
    if(*str){
        reverseStringUsingRecurssion(str+1);
        rev[i++] = *str;
    }
    
    return rev;
}

void reverseUsingRecursion(){
    char str[100];
    char *rev;

    
    printf("Enter string : ");
    gets(str);
    
    rev = reverseStringUsingRecurssion(str);
    printf("reverseUsingRecursion %s ",rev);
}

void reverseString(){
    char str[100];
    int i;
    long j = 0;
    char temp;

    j = strlen(str) - 1;
    i = 0;
    
    while (i < j ) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    
    printf("\nRevered string : %s \n",str);
}


void palindrome(){
    char str[100];
    int flag = 0;
    printf("Enter string to check  : \n");
    scanf("%s",str);
    
    for (int i = 0; i < strlen(str) - 1; i++) {
        if(str[i] != str[strlen(str)-1- i]){
            flag = 1;
            break;
        }
    }
    
    if(flag == 1){
        printf("String is NOT palindrome");
    }
    else{
        printf("String is palindrome");
    }
}
