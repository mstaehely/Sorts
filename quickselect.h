/* A simple quickselect implementation in C
* This is a basic function which will be modified to 
* work with structs to hold numerical values of any type,
* allowing for more general use. This version functions only
* on integers.
*
* Copyright 2016 Matthew Staehely
*/

#ifndef _QUICKSELECT_H_
#define _QUICKSELECT_H_

// Partition/quicksort. In-place.
//
// Arguments:
//
// - arr: the array or subarray being sorted
//
// - left: the leftmost index of the array/subarray
//
// - right: the rightmost index of the array/subarray
//
// Returns the position of the pivot after sorting.
int partition(int arr[], int left, int right, int pivot);

// Quickselect. Will return the k-th smallest element's index of list within
// left to right inclusive.
//
// Arguments:
//
// - arr: the array being selected upon
//
// - left: the leftmost index of the array
//
// - right: the rightmost index of the array
//
// - k: the kth element or index..
int quickselect(int arr[], int left, int right, int k);

#endif
