#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128
 
void scan_array(int* array, char* str) {
    int i = 0;
 
    while (str[i] != '\0') {
        if (str[i] != '*') {
            array[(int)str[i]] += 1;
        }
        i += 1;
    }
}
 
void printing_array(int* array, int size_array) {
    int i = 0;
 
    while (i < size_array) {
        if (array[i] > 0) {
            printf("%c:%d\n", i, array[i]);
        }
        i += 1;
    }
}
 
int main(int ac, char **av) {
    int i = 1;
    int array[MAX_ARRAY_SIZE] = {0};
       
    while (i < ac) {
        scan_array(&array[0], av[i]);
        i += 1;
    }
    printing_array(&array[0], MAX_ARRAY_SIZE);
    return EXIT_SUCCESS;
}