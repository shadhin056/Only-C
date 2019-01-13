//
// Created by ShadhiN on 7/15/2018.
//
#include <stdio.h>
#include <string.h>
int f_call = 0;
int fib(int n) {
    f_call = f_call + 1;
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 1)+fib(n - 2);
}
int main() {
    int n;
    char s[3];
    printf("Enter any number = ");
    scanf("%d", &n);
    if (n == 1) {
        strcpy(s, "st");
    } else if (n == 2) {
        strcpy(s, "nd");
    } else if (n == 3) {
        strcpy(s, "rd");
    } else {
        strcpy(s, "th");
    }
    printf("%d %s fibonacci number is %d\n ", n, s, fib(n));
    printf("Number of function calls : %d\n", f_call);
    return 0;
}
