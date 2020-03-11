#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int test_stack()
{
    int data_array[10] = {0};
    struct Stack stack;
    int i = 0;
    char word[] = "WEST";

    int ret = stack_init(&stack);
    if(ret  < 0)
    {
        fprintf(stderr,"stack init failed\n");
    }

    stack_push(&stack,&word);
//    srand(time(NULL));
//    for(i = 0;i<10;i++)
//    {
//        data_array[i] = rand()%100;
//        printf("%d\t",data_array[i]);
//        stack_push(&stack,&data_array[i]);
//    }
//    fprintf(stdout,"\n");

    char *p = (char *)stack_pop(&stack);
 //   fprintf(stdout,"%s\t",*p);

//    while(stack_empty(&stack) == 0)
//    {
//        int *p = (int *)stack_pop(&stack);
//        fprintf(stdout,"%d\t",*p);
//    }
    fprintf(stdout,"\n");

    return 0;
}
int main()
{
    test_stack();
    return 0;
}
