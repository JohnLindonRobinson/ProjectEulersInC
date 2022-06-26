#include <stdio.h>
#include <stdlib.h>

int nextFibonacci(int a, int b){
    return a + b;
}

int main(int argc, char **argv){
    // print the number of arguments
    if (argc != 2){
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    int n = atoi(argv[1]);
    int sum = 0;
    int a = 0;
    int b = 1;
    while(a <= n && b <= n){
        if (b % 2 == 0){
            printf("%d\n", b);
            sum += b;
        }
        int c = nextFibonacci(a, b);
        a = b;
        b = c;
    }
    printf("%d\n", sum);

    return 0;
}