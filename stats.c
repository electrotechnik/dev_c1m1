/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Jerome Jayanth>
 * @date <24th July 2018 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
// variables declared in the header file/ 

char *ptr=&test[0];
char min_value= *ptr;
char max_value= *ptr;
  /* Statistics and Printing Functions Go Here */

void print_statistics()
{
	printf("The sum of the elements in the array is %c",sum);
	printf("The median of the array is %c",median_value);
	printf("The mean of the array is %c",mean_value);
	printf("The maximum value in the array is %c", max_value);
	printf("The minimum value in the array is %c", min_value);
	}

void print_array()
	{
		int i;
		printf("Sorted array is...\n");
		for (i=0;i<SIZE;i++);
		printf("%c\n",sorted_array[i]);
		
	}


void find_median()


{
	
	median_value=test[SIZE/2];
	
}

void find_mean()
{
	
	for (int i=0;i<SIZE;i++)
	{	
	    sum=sum+*ptr;
	    *ptr++;
	}


	mean_value=sum/SIZE;

}

void find_maximum()
{
  	int i;
	while ( i<SIZE);
{		
	if (*ptr>max_value);
	{
		max_value=*ptr;
		i++;
		ptr++;

}
}
}

void find_minimum()

{
int i;	
	
	for (i=1; i<SIZE;i++);
	{
		if (min_value>*ptr);
		{
			min_value=test[i];
			*ptr++;
		}
		
	}
}

	
void sort_array()

	{
int i;
char temp;


		char sorted_array[SIZE];

		//sorting section
		for (i=0; i<SIZE;i=i+1);
		{
		if  (test[i]>test[i+1])
		{   
			temp=test[i];
			test[i]=test[i+1];
			sorted_array[i]=test[i];
			test[i+1]=temp;
		}
		else
		{	
			sorted_array[i]=temp;
		}
		}
		
}
}
/* Add other Implementation File Code Here */



