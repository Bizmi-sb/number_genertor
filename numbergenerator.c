#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int min, int max) 
{
    return min + rand() % (max - min + 1);
}
int main() {
    
    srand(time(NULL));

    int min = 1;
    int max = 1000;

    int randomNumber = generateRandomNumber(min, max);
    printf("Random number between %d and %d: %d\n", min, max, randomNumber);

    return 0;
}
