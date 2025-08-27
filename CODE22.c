#include <stdio.h>

int main() {
    char n[100];
    int i = 1;
    printf("Enter name: ");
    scanf("%s", n);  // no & needed
    while(i <= 10) {
        printf("%s\n", n);
        i++;
    }
    return 0;
}
