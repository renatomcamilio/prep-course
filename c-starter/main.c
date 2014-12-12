//
//  main.c
//  c-starter
//
//  Created by Renato Camilio on 12/11/14.
//  Copyright (c) 2014 Renato Camilio. All rights reserved.
//

#include <stdio.h>



int Fuzz, Bizz, Nezz;

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

void home() {
    int option;
    
    printf("------------------\n");
    printf("Hey there! Choose a program:\n\n");
    printf("[1] FizzBuzz\n");
    printf("[2] FuzzBizzNezz\n");
    printf("------------------\n");
    
    scanf("%d", &option);
    
    switch (option) {
        case 1:
            showFizzBuzz();
            home();
            break;
        case 2:
            puts("under development :)");
            home();
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
