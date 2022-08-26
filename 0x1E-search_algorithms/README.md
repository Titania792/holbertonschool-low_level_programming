# 0x1E. C - Search Algorithms
## Tasks

### 0. Linear search

Write a function that searches for a value in an array of integers using the  Linear search algorithm

-   Prototype :  `int linear_search(int *array, size_t size, int value);`
-   Where  `array`  is a pointer to the first element of the array to search in
-   `size`  is the number of elements in  `array`
-   And  `value`  is the value to search for
-   Your function must return the first index where  `value`  is located
-   If  `value`  is not present in  `array`  or if  `array`  is  `NULL`, your function must return  `-1`
-   Every time you compare a value in the array to the value you are searching, you have to print this value
-   File:  [`0-linear.c`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/0-linear.c)

### 1. Binary search

Write a function that searches for a value in a sorted array of integers using the  Binary search algorithm

-   Prototype :  `int binary_search(int *array, size_t size, int value);`
-   Where  `array`  is a pointer to the first element of the array to search in
-   `size`  is the number of elements in  `array`
-   And  `value`  is the value to search for
-   Your function must return the index where  `value`  is located
-   You can assume that  `array`  will be sorted in ascending order
-   You can assume that  `value`  won’t appear more than once in  `array`
-   If  `value`  is not present in  `array`  or if  `array`  is  `NULL`, your function must return  `-1`
-   You must print the array being searched every time it changes.
-   File:  [`1-binary.c`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/1-binary.c)

### 2. Big O #0

What is the  `time complexity`  (worst case) of a linear search in an array of size  `n`?
-   File:  [`2-O`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/2-O)

### 3. Big O #1

What is the  `space complexity`  (worst case) of an iterative linear search algorithm in an array of size  `n`?
-   File:  [`3-O`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/3-O)

### 4. Big O #2

What is the  `time complexity`  (worst case) of a binary search in an array of size  `n`?
-   File:  [`4-O`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/4-O)


### 5. Big O #3

What is the  `space complexity`  (worst case) of a binary search in an array of size  `n`?
-   File:  [`5-O`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/5-O)


### 6. Big O #4

What is the space complexity of this function / algorithm?
-   File:  [`6-O`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/6-O)

### 8. Big O #5

What is the  `time complexity`  (average case) of a jump search in an array of size  `n`, using  `step = sqrt(n)`?
-   File:  [`101-O`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/101-O)

### 14. Big O #6

What is the  `time complexity`  (average case) of a jump search in a singly linked list of size  `n`, using  `step = sqrt(n)`?
-   File:  [`107-O`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/107-O)


### 15. Big O #7

What is the  `time complexity`  (average case) of a jump search in a skip list of size  `n`, with an express lane using  `step = sqrt(n)`?
-   File:  [`108-O`](https://github.com/Titania792/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/108-O)