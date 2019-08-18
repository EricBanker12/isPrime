#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    /*printf("Hello World!\0");*/
    if (argc < 2) {
        printf("No number given.");
        return 0;
    }
    int num = atoi(argv[1]);
    printf("Is %d prime? %s", num, isPrime(num) ? "True." : "False.");

    return 0;
}