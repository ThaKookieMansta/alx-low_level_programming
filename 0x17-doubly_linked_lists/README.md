# 0x17-doubly_linked_lists

This is the code manual for the project 0x15. C - File I/O.  
The table below has the files contained in this directory and a description.  

## Files

|Filename | Description|
|---------|------------|
|0-print_dlistint.c | A function that prints all the elements of a dlistint_t list.|
|1-dlistint_len.c | A function that returns the number of elements in a linked dlistint_t list.|
|2-add_dnodeint.c | A function that adds a new node at the beginning of a dlistint_t list.|
|3-add_dnodeint_end.c | A function that adds a new node at the end of a dlistint_t list.|
|4-free_dlistint.c | A function that frees a dlistint_t list.|
|5-get_dnodeint.c | A function that returns the nth node of a dlistint_t linked list.|
|6-sum_dlistint.c | A function that returns the sum of all the data (n) of a dlistint_t linked list.|
|7-insert_dnodeint.c | A function that inserts a new node at a given position.|
|8-delete_dnodeint.c | A function that deletes the node at index index of a dlistint_t linked list.|




## Compilation

To compile the files in this directory we shall be using the following command in your terminal.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [C-FILE] [C-FUNCTION] -o [OUTPUT-FILE]
```

Remember to replace the words in square brackets with the corresponding files and valid filename for the output file as shown below.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
```

## Testing / Running
To test the compiled program we run the command as shown below.  

```commandline
$ ./[OUTPUT-FILE]
```

Remember to replace the words in the square bracket with the corresponding filename as shown below.  

```commandline
$ ./a 
9
8
-> 2 elements
``` 


## Licence

This directory and it's contents are open for use by the ALX Checker.
