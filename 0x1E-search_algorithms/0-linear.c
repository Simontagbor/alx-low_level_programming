/* File: 0-linear.c - implement a basic linear search
 * Auth:Simon Tagbor
 */


#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *                 of integers using linear search.
 * @array: A pointer to the first element of the array to search.
 * @size:  The number of elements in the array.
 * @value: The search value.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */

int linear_search(int *array, size_t size, int value) {
        size_t index;
        if (array == NULL)
                return (-1);

        for (index = 0; index < size; index++)
        {
                printf("Value checked array[%ld] = [%d]\n", index, array[index]);
                if (array[index] == value)
                    return (index);

        }

        return (-1);
}



