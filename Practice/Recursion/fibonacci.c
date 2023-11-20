/*
Programmer: Rumaisa Kashif
Date: 20th November 2023
Description: Fibonacci sequence
*/

#include <stdio.h>

int fib(int n) {
    if (n==1 || n==2) {
        return 1;
    } 
    else 
    {
        return fib(n-1)+fib(n-2);
    }
}

int main() {
    int a;
    printf("Enter the number of terms you want: \n");
    scanf("%d", &a);

    if (a < 1) 
    {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Fibonacci sequence: ");
    for (int i=1; i<=a; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}//end main
