#include <stdio.h>
#include <stdlib.h>

int mutex = 1, full = 0, empty = 10, data = 0;

void producer() {
    --mutex; 
    ++full; 
    --empty; 
    data++;
    printf("Producer produces item number: %d\n", data);
    ++mutex;
}

void consumer() {
    --mutex; 
    --full; 
    ++empty;
    printf("Consumer consumes item number: %d\n", data);
    data--; 
    ++mutex;
}

int main() {
    int n;
    printf("1. Enter 1 for Producer\n2. Enter 2 for Consumer\n3. Enter 3 to Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                if (mutex == 1 && empty != 0) producer();
                else printf("The Buffer is full. New data cannot be produced!\n");
                break;
            case 2:
                if (mutex == 1 && full != 0) consumer();
                else printf("The Buffer is empty! New data cannot be consumed!\n");
                break;
            case 3:
                exit(0);
        }
    }
}

