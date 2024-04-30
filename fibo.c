//find nth term of a fibonacci number

#include <stdio.h>

int count = 0;

int fib(int n){
    count++;
    if(n<0) return -1;
    if(n == 0 || n == 1) return n;
    int sum = fib(n-1) + fib(n-2);
    return sum;
}


int main(){

    printf("Enter the nth number : ");
    int n;
    scanf("%d", &n);
    int result = fib(n);
    printf("%d\n", count);

    return 0;
}