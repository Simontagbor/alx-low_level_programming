# 0x1E. C - Search Algorithms
This project explores search algorithms and their relative time and space complexities. at the end of the project discovered:

* What a search algorithm is
* The types of search algorithms
	* Linear search
	* Binary search
* considerations for choosing the best algorithm given the usecase

the details of the tasks are provided as follows: 

## Tasks
### `Linear Search                                                                                                           `
Write a function that searches for a value in an array of integers using the Linear search algorithm

* Prototype : `int linear_search(int *array, size_t size, int value);`
* Your function must return the first index where value is located
* If value is not present in array or if array is NULL, your function must return`-1`

```
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```
