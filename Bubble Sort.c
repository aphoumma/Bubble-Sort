// Bubble sort w/ Optimization
// Stop Bubble Sort After Elements are Sorted
// Uses "swapped" variable check if any swap took place
// If no swap occurs on an iteration of the loop, then the bubble sort will end


//#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

int *a;
int size = 6;
int i;
int z;
int j;
int swapped; // flag variable mark if a swap occurs

//dynamic memory allocation for array 
a = (int*)calloc(size, (sizeof(int)));

a[0] = 8;
a[1] = 45;
a[2] = 3;
a[3] = 98;
a[4] = 11;
a[5] = 0;

printf("Printing array forwards: \n");

for (i = 0; i < size; i++)
{
printf("%d \n", a[i]);
}




// Sorting array with Optimized Bubble Sort
for (i = 0; i < size-1; i++) 
{
    swapped = 0; // flag variable set to false
    for (j = 0; j < size-i-1; j++) 
    {
        if (a[j] > a[j + 1])
        {
            z = a[j];
            a[j] = a[j + 1];
            a[j + 1] = z; 
            swapped = 1; // if there is a swap, the flag variable is marked as true 
        if (swapped == 0) // if there is no swap on this pass through loop, flag variable will stay false and bubble sort will end
            i = 10; // this is condition to stop the loop
        }
    }
}


printf("Printing array forward after bubble sort \n");

for(i=0; i<size; i++)
printf("%d \n", a[i]);


printf("We will free memory and after that, try to print our array which cannot be done. \n");
// to free memory and prove it is freed!
free(a);
for (i = 0; i < size; i++)
printf("%d \n", a[i]);

}