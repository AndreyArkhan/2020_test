#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
 
int lg_res;  
int func_d (char * w1);
char* d1[7] = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};

char** dirReduc(char** arr, int sz, int* lg);
int func_compare_w(char *w1, char *w2);

int main () {

	char** d3 = malloc((sizeof(d1) + 1) * sizeof(char*));
	assert(d3 != NULL); 

	d3 = dirReduc(d1, 7, &lg_res);
//    printf("%s%d\n", "sizeof=",  sizeof(d1) / sizeof(char *));
    printf("%s%d\n", "num=", lg_res);
//    printf("%s%s\n", "d3[1]=", d3[1]);
//    printf("%s%s\n", "d1[0]=", d1[0]);
//    printf("%s%s\n", "d1[1]=", d1[1]);
	for (int i=0; i <lg_res; i++) {
	printf("%s\n", d3[i]);
	}
	
/*	int i = 0;
 	while (d2[i])	{
		printf("%s\n", d2[i]);
		free(d2[i]);
		i++;
	}
	free(d2); 
*/
}
  

char** dirReduc(char** arr, int sz, int* lg) {
  
	char** arr_out = malloc((sizeof(arr) + 1) * sizeof(char*));
	assert(arr_out != NULL);

    char** stack = malloc((sizeof(arr) + 1) * sizeof(char*));
    assert(arr_out != NULL);
    int stack_count = 0;

//	int i = 0;
//	for (; i < sz; i++) {
//		char *temp = malloc(strlen(arr[i]) * sizeof(char));
//		assert(temp != NULL);
//		strcpy(temp, arr[i]);
//		d2[i] = temp;
//	}
//	d2[i] = NULL;

//char* d1[7] = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
	int arr_tmp_count = 0;
	char * first_w = malloc(10);
    char * second_w = malloc(10);
    int count_inp_arr = 0;
    int count_out_arr = 0;


    first_w = arr[count_inp_arr];
    second_w = arr[count_inp_arr+1];
    stack[stack_count] = arr[count_inp_arr];

    while (count_inp_arr < sz-1) {
        if (func_compare_w(first_w, second_w)) {   // cmp and place words to out arr
            arr_out[count_out_arr] = first_w;
            count_out_arr++;
            arr_out[count_out_arr] = second_w;
            count_out_arr++;
            count_inp_arr  = count_inp_arr + 2;
        }
        else {
            count_inp_arr ++;
        }
    }

    *lg = count_out_arr++;

  return arr_out;//resultArray; //arr; //0; //arr_temp;
}
//char* d1[7] = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
int func_compare_w(char *w1, char *w2) // return 0, if it need to kill
{
    if (func_d(w1) + func_d(w2) != 0 )
        return 1;
    else
        return 0;
}

int func_d (char * w) {
    int d;
	
	if (w == "NORTH") d = 1;
	else 
		if (w == "SOUTH") d = -1;
	else 
		if (w == "EAST") d = 2;
	else 
		if (w == "WEST") d = -2;		

	return d;			
}


// https://www.codewars.com/kata/550f22f4d758534c1100025a/train/c

/* //----------------------- 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <criterion/criterion.h>

char* joinStringsStringArray(char *strings[], int count);
// arr: directions to reduce, sz: size of arr, lg size of returned array
// function result will be freed
char** dirReduc(char** arr, int sz, int* lg);

// dotest compares your results and test results by way of strings
void dotest(char** arr, int sz, char* expr) {
    int lg = -1;
    char** act = dirReduc(arr, sz, &lg);
    char* sact = joinStringsStringArray(act, lg);
    if(strcmp(sact, expr) != 0)
        printf("Expected:\n%s\nGot:\n%s\n", expr, sact);
    cr_assert_str_eq(sact, expr, "");
    if (strcmp(sact, "{}") != 0) {free(sact); sact = NULL;}
    free(act); act = NULL;
}

Test(dirReduc, ShouldPassAllTheTestsProvided) {
    {
        char* d1[7] = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
        dotest(d1, 7,  "{WEST}");
    }
    {
        char* d1[4] = {"NORTH", "WEST", "SOUTH", "EAST"};
        dotest(d1, 4,  "{NORTH, WEST, SOUTH, EAST}");
    }
    {
        char* d1[10] = {"NORTH", "WEST", "SOUTH", "EAST", "NORTH", "WEST", "SOUTH", "EAST", "SOUTH", "NORTH"};
        dotest(d1, 10,  "{NORTH, WEST, SOUTH, EAST, NORTH, WEST, SOUTH, EAST}");
    }
    {
        char* d1[4] = {"NORTH", "SOUTH", "WEST", "EAST"};
        dotest(d1, 4,  "{}");
    }
} */