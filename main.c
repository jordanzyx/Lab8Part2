#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));

    int array[20] = {0};
    int array2[101] = {0};

    //Generate the random numbers
    for (int i = 0; i < 20; ++i) {
        array[i] = (rand() % 100) + 1;
        array2[array[i]] = array2[array[i]] + 1;
    }
    
    return 0;
}