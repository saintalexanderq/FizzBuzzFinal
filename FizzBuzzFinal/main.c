//
//  main.c
//  FizzBuzzFinal
//
//  Created by Alex Quigley on 2017-09-27.
//  Copyright © 2017 Alex Quigley. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* FIZZ BUZZ
     Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz" */
    int i;
    for(i = 1; i <= 100; i++) {
        if(i % 3 == 0) // multiple of 3 prints fizz
            printf("Fizz\n");
        else {
            if(i % 5 == 0) // multiple of 5 prints buzz
                printf("Buzz\n");
            else{
                if(i % 3 == 0 && i % 5 == 0) // multiple of 3 & 5 prints fizzbuzz
                    printf("FizzBuzz\n");
                else{
                    printf("%d\n", i);
                }
            }
        }
    }
    
    
    
    return 0;
}
