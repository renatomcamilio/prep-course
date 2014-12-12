//
//  main.c
//  c-starter
//
//  Created by Renato Camilio on 12/11/14.
//  Copyright (c) 2014 Renato Camilio. All rights reserved.
//

#include <stdio.h>



void showFizzBuzz() {
    for (int num = 0; num <= 100; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (num % 3 == 0) {
            printf("Fizz\n");
        } else if (num % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", num);
        }
    }
}

void showFuzzBizzNezz() {
    int fuzz, bizz, nezz;
    
    printf("Ok, firstly set 'Fuzz' value: ");
    scanf("%d", &fuzz);
    
    printf("Now set 'Bizz' value: ");
    scanf("%d", &bizz);
    
    printf("And finally, 'Nezz' value: ");
    scanf("%d", &nezz);
    
    for (int num = 1; num <= nezz; num++) {
        if (num % fuzz == 0 && num % bizz == 0) {
            printf("FuzzBizz\n");
        } else if (num % fuzz == 0) {
            printf("Fuzz\n");
        } else if (num % bizz == 0) {
            printf("Bizz\n");
        } else {
            printf("%d\n", num);
        }
    }
}

void home() {
    int option;
    
    printf("------------------\n");
    printf("Hey there! Choose a program:\n\n");
    printf("[1] FizzBuzz\n");
    printf("[2] FuzzBizzNezz\n\n");
    printf("[0] Exit\n");
    printf("------------------\n");
    
    scanf("%d", &option);
    
    switch (option) {
        case 1:
            showFizzBuzz();
            home();
            break;
        case 2:
            showFuzzBizzNezz();
            home();
            break;
        case 0:
            return;
            break;
        default:
            puts("Invalid option, please choose one valid option from the list");
            home();
            break;
    }
}

int main(int argc, const char * argv[]) {
    home();
    
    return 0;
}
