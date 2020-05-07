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
 * @brief Basic statistics on an array.
 *
 * The given array is of fixed length and of unsigned character type.
 * Some operations to be done are finding mean,median,sorting array in descending order,etc.
 *
 * @author Darshit Ambasana
 * @date 3/5/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
 
float find_mean(unsigned char *p,unsigned int len);
/**
 * Its job is to calculate mean of array and return result.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 *
 * @return returns a float value, mean of array.
 */


float find_median(unsigned char *p,unsigned int len);
/**
 * Its job is to calculate median of array and return result.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 *
 * @return returns a float value, median of array.
 */

void print_statistics();
/**
 * Its job is to print all statistics calculated in program.
 */

void print_array(unsigned char *p,unsigned int len);
/**
 * Its job is to print the array.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 */

unsigned char find_maximum(unsigned char *p,unsigned int len);
/**
 * Its job is to find maximum from array and return its value.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 *
 * @return returns a unsigned char value, maximum of array.
 */

unsigned char find_minimum(unsigned char *p,unsigned int len);
/**
 * Its job is to find minimum from array and return its value.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 *
 * @return returns a unsigned char value, minimum of array.
 */

void sort_array(unsigned char *p,unsigned int len);
/**
 * Its job is to sort the array in descending order.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 */

#endif /* __STATS_H__ */
