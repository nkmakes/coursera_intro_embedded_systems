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
 * @file stats.c
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author N. Rodriguez
 * @date December 2021
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

  print_array(test, SIZE);
  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);
}

void print_statistics(__uint8_t* location, __uint8_t arraysize) 
{
  printf("Minimum value of array -> %d\n", find_minimum(location, arraysize));
  printf("Maximum value of array -> %d\n", find_maximum(location, arraysize));
  printf("Mean value of array    -> %d\n", find_mean(location, arraysize));
  printf("Median value of array  -> %d\n", find_median(location, arraysize));
}

void print_array(__uint8_t* location, __uint8_t arraysize) 
{
  for (__uint8_t i=0; i<arraysize; i++) {
    printf("%d ", *(location+i));
  }
  printf("\n");
}

__uint8_t find_median(__uint8_t* location, __uint8_t arraysize) 
{
  sort_array(location, arraysize);
  return *(location+(arraysize/2));
}


__uint8_t find_mean(__uint8_t* location, __uint8_t arraysize) 
{
  __uint16_t solution = 0;
  for (__uint8_t i=0; i<arraysize; i++) {
    solution += *(location+i);
  }
  return solution/2;
}



__uint8_t find_maximum(__uint8_t* location, __uint8_t arraysize) 
{
  __uint8_t solution = 0;
  for (__uint8_t i=0; i<arraysize; i++) {
    if (*(location+i) > solution ) {
      solution = *(location+i);
    }
  }
  return solution;
}


__uint8_t find_minimum(__uint8_t* location, __uint8_t arraysize) 
{
  __uint8_t solution = 255;
  for (__uint8_t i=0; i<arraysize; i++) {
    if (*(location+i) < solution ) {
      solution = *(location+i);
    }
  }
  return solution;
}


void sort_array(__uint8_t* location, __uint8_t arraysize) 
{
  __uint8_t temp=0;
  for (__uint8_t i=0; i<arraysize; i++) {
    for (__uint8_t j=i+1; j<arraysize; j++) {
      if (*(location+i) < *(location+j)) {
        temp = *(location+i);
        *(location+i) = *(location+j);
        *(location+j) = temp;
      }
    }
  }
}