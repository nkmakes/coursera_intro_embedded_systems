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
 * @file stats.h 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author N. Rodriguez
 * @date Decemeber 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print Statistics of given array
 *
 * A function that prints the statistics of an array 
 * including minimum, maximum, mean, and median.
 *
 * @param unsigned char pointer to a n-element data array 
 * @param unsigned integer as the size of the array
 *
 * @return <Add Return Informaiton here>
 */
void print_statistics(__uint8_t* location, __uint8_t arraysize);


/**
 * @brief Print a array
 *
 * Given an array of data and a length, prints 
 * the array to the screen
 *
 * @param unsigned char pointer to a n-element data array 
 * @param unsigned integer as the size of the array
 *
 * @return <Add Return Informaiton here>
 */
void print_array(__uint8_t* location, __uint8_t arraysize);


/**
 * @brief Find median of given array
 *
 * Given an array of data and a length, 
 * returns the median value
 *
 * @param unsigned char pointer to a n-element data array 
 * @param unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
__uint8_t find_median(__uint8_t* location, __uint8_t arraysize);


/**
 * @brief Find mean of given array
 *
 * Given an array of data and a length, 
 * returns the mean
 *
 * @param unsigned char pointer to a n-element data array 
 * @param unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
__uint8_t find_mean(__uint8_t* location, __uint8_t arraysize);


/**
 * @brief Find maximum of given array
 *
 * Given an array of data and a length, 
 * returns the maximum
 *
 * @param unsigned char pointer to a n-element data array 
 * @param unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
__uint8_t find_maximum(__uint8_t* location, __uint8_t arraysize);


/**
 * @brief Find minimum vale of given array
 *
 * Given an array of data and a length, 
 * returns the minimum
 *
 * @param unsigned char pointer to a n-element data array 
 * @param unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
__uint8_t find_minimum(__uint8_t* location, __uint8_t arraysize);


/*
 * @brief Sort an array, from big to small
 *
 * Given an array of data and a length, 
 * sorts the array from largest to smallest.  
 * (The zeroth Element should be the largest value,
 * and the last element (n-1) 
 * should be the smallest value.
 *
 * @param unsigned char pointer to a n-element data array 
 * @param unsigned integer as the size of the array
 *
 * @return void
 */
void sort_array(__uint8_t* location, __uint8_t arraysize);

#endif /* __STATS_H__ */
