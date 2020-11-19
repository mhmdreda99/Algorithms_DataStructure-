/**
 * @file main.c
 * @author Mohamed Reda (mhmdreda99@Rgithub.com)
 * @brief A simple approach is to do a linear search, i.e  

Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
If x matches with an element, return the index.
If x doesn’t match with any of elements, return -1.
 * @version 0.1
 * @date 2020-11-19
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32_t;
typedef enum fun_ret{
    R_NOK,
    R_OK
}fun_ret_t;

#define MAX_ARRAY 9UL
#define ARRAY_INIT {11, 22, 33, 44, 55, 66, 77, 88, 99}
#define ZERO_INIT 0

uint32_t my_array[MAX_ARRAY] = ARRAY_INIT;

/**
  * Start traverse from the left most element of my_array[] and one by one compare (Your Element) with each element of my_array[]
  * If (Your Element) matches with an element in the array, update the "index" of this element and return 'R_OK'.
  * If (Your Element) doesn�t match with any of the elements in the array, return 'R_NOK'.
  */

/**
  * Linear search is rarely used practically because other search algorithms such as the binary search algorithm
    allow faster searching comparison to Linear search.
  * The time complexity of above algorithm is O(n).
  */

/**
  * @brief  Search for uint32_t element in array based data structure .
  * @param  arr_ptr    Pointer to the array.
  * @param  arr_length Number of elements in the Array.
  * @param  element    The element to search for it.
  * @param  elem_index The index of the element to search for it.
  * @retval Status if the function execution
  */
fun_ret_t linear_search(uint32_t *arr_ptr, uint32_t arr_length, uint32_t element, uint32_t *elem_index){
    uint32_t l_element_counter = ZERO_INIT;
    for(l_element_counter=ZERO_INIT; l_element_counter<arr_length; l_element_counter++){
        if(arr_ptr[l_element_counter] == element){
            *elem_index = l_element_counter;
            return R_OK;
        }
        else{
            // Nothing
        }
    }
    return R_NOK;
}

int main()
{
    uint32_t l_element_index = ZERO_INIT;
    fun_ret_t ret_status = R_NOK;

    printf("l_element_index = %i\n", l_element_index);

    ret_status = linear_search(my_array, 9, 66, &l_element_index);

    if(R_NOK == ret_status){
        printf("Element Does not Exist !!\n");
    }
    else{
        printf("l_element_index = %i\n", l_element_index);
    }

    return 0;
}
