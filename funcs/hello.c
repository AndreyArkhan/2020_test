#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
 
int lg_res;  
int func_d (char * w1);
char* d1[7] = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};

char** dirReduc(char** arr, int sz, int* lg); 

int main () {

	char** d3 = malloc((sizeof(d1) + 1) * sizeof(char*));
	assert(d3 != NULL); 

	d3 = dirReduc(d1, 7, &lg_res); 
	
	for (int i=0; i <7; i++) {
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
  
	char** d2 = malloc((sizeof(arr) + 1) * sizeof(char*));
	assert(d2 != NULL); 

	int i = 0;
	for (; i < sizeof(arr) / sizeof(char *); i++) {
		char *temp = malloc(strlen(arr[i]) * sizeof(char));
		assert(temp != NULL);
		strcpy(temp, arr[i]);
		d2[i] = temp;
	}
	d2[i] = NULL;

	/*
	//int arr_tmp_count = 0;
	char ** arr_temp[7];
	for (int i = 0; i < sz - 1; i++) {
	// resultArray[i] = arr[i];
	 	  if (func_d(arr[i]) + func_d(arr[i+1]) != 0 ) {
		  arr_temp[arr_tmp_count] = arr[i];
		  arr_tmp_count ++;
		  arr_temp[arr_tmp_count] = arr[i+1];
		  arr_tmp_count ++;
	  }  
	*/

  *lg = sz;
  
  return d2;//resultArray; //arr; //0; //arr_temp;
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