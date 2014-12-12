//
//  main.c
//  c-stater
//
//  Created by Renato Camilio on 12/11/14.
//  Copyright (c) 2014 Renato Camilio. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
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
    
    return 0;
}
