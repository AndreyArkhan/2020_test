#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!\n");
    int *test = malloc(10 * sizeof(int));
    for(int i = 0; i <=10; i++)
    {
        test[i] = 10;
    }
    return 0;
}
