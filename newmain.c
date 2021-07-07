/* 
 * File:   newmain.c
 * Author: I14746
 *
 * Created on May 10, 2020, 3:12 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int add(int a,int b);

int main(int argc, char** argv) {
    int d = 12;
    int e = 15;
    int f = 0;
    f = add(d,e);
    while(1){
    f = f * 2;   
    for(int p=0;p<10;p++){
        f = f + 1;
    }
    // return (EXIT_SUCCESS);
    }
}

int add(int a, int b){
    int c = 0;
    c = a + b;
    return c;
}