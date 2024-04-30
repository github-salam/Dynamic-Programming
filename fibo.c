//find nth term of a fibonacci number

#include <stdio.h>
#include <stdlib.h>

int count = 0;


int fib(int n, int* memo){
    if(memo[n] != -1){
        return memo[n];
    }
    count++;
    if(n<0) return -1;
    if(n == 0 || n == 1) return n;
    int sum = fib(n-1, memo) + fib(n-2, memo);
    memo[n] = sum;
    return sum;
}


int main(){

    printf("Enter the nth number : ");
    int n;
    scanf("%d", &n);
    int* memo = (int*)malloc((n+1)*sizeof(int));
    if(memo == NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    for(int i = 0; i <= n; i++){
        memo[i] = -1;
    }
    int result = fib(n, memo);
    printf("%d\n", count);
    free(memo);
    return 0;
}