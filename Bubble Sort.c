// Test Question 4 Systems Programming
// One round of bubble sort



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


// Sorting array with bubble sort

for (j = 0; j < size - 1; j++)
for (i = 0; i < size - 1; i++)
    if (a[i] > a[i + 1])
    {
        z = a[i];
        a[i] = a[i + 1];
        a[i + 1] = z;
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

/* printf("Printing array backwards: \n");
// to print array backwards
for (i = size - 1; i >= 0; i--)
printf("%d \n", a[i]);







/* for (i=0; i<size; i++)
printf("%d \n", a[i]);
i--; <------ this will make it infinite


*/