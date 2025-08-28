#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice;
    srand(time(0)); // seed with current time

    dice = (rand() % 6) + 1;
    printf("You rolled a %d!\n", dice);

    return 0;
}
