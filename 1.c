#include <stdio.h>
#include <stdbool.h>

bool isFizzBuzz(int n) {
    return n % 3 == 0 || n % 5 == 0;
}

int main(){
    int maxNumber = 1000;
    int counter = 0;
    for (int i = 1; i< maxNumber; i++){
        if (isFizzBuzz(i)){
            counter = counter + i;
        }
    }
    printf("%d\n", counter);
    return counter;
}