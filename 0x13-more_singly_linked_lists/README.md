# 0x13. C - More singly linked lists

This is the code manual for the project 0x13. C - More singly linked lists.  
The table below has the files contained in this directory and a description.  

## Files

|Filename | Description|
|---------|------------|
|0-print_listint.c | A function that prints all the elements of a listint_t list.|
|1-listint_len.c | A function that returns the number of elements in a linked listint_t list.|
|2-add_nodeint.c | A function that adds a new node at the beginning of a listint_t list.|
|3-add_nodeint_end.c | A function that adds a new node at the end of a listint_t list.|
|4-free_listint.c | A  function that frees a listint_t list. |
|5-free_listint2.c| A function that frees a listint_t list.|
|6-pop_listint.c | A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).|
|7-get_nodeint.c | A function that returns the nth node of a listint_t linked list.|
|8-sum_listint.c | A function that returns the sum of all the data (n) of a listint_t linked list.|
|9-insert_nodeint.c | A function that inserts a new node at a given position.|
|10-delete_nodeint.c | A function that deletes the node at index index of a listint_t linked list.|


## Compilation

To compile the files in this directory we shall be using the following command in your terminal.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [C-FILE] [C-FUNCTION] -o [OUTPUT-FILE]
```

Remember to replace the words in square brackets with the corresponding files and valid filename for the output file as shown below.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
```

## Testing
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
