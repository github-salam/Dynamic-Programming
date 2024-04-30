#include <stdio.h>
#include <stdlib.h>

int count = 0;

int fib(int n, int* t){
    if(n == -1){
        return -1;
    }
    else if(n == 0) t[0] = 0;
    else if(n == 1) t[1] = 1;
    else{
        t[0] = 0;
        t[1] = 1;
        for(int i = 2; i <= n; i++){
            t[i] = t[i - 1] + t[i - 2];
            count++;
        }
    }
    return t[n];
}


int main(){

    printf("Enter the nth number : ");
    int n;
    scanf("%d", &n);
    int* T = (int *)malloc((n+1) * sizeof(int));
    int result = fib(n,T);
    printf("%d\n", count);

    free(T);

    return 0;
}
