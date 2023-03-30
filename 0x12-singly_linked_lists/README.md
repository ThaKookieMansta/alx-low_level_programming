# 0x12. C - Singly linked lists

This is the code manual for the project 0x12. C - Singly linked lists.  
The table below has the files contained in this directory and a description.  

## Files

|Filename | Description|
|---------|------------|
|0-print_list.c | A function that prints all the elements of a list_t list.|
|1-list_len.c | A function that returns the number of elements in a linked list_t list.|
|2-add_node.c | A function that adds a new node at the beginning of a list_t list.|
|3-add_node_end.c | A function thatadds a new node at the end of a list_t list.|
|4-free_list.c | A function that frees a list_t list. |
|100-first.c| A function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the main function is executed.|
|101-hello_holberton.asm | A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.|


## Compilation

To compile the files in this directory we shall be using the following command in your terminal.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [C-FILE] [C-FUNCTION] -o [OUTPUT-FILE]
```

Remember to replace the words in square brackets with the corresponding files and valid filename for the output file as shown below.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
```

## Testing
To test the compiled program we run the command as shown below.  

```commandline
$ ./[OUTPUT-FILE]
```

Remember to replace the words in the square bracket with the corresponding filename as shown below.  

```commandline
$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
```

## Licence

This directory and it's contents are open for use by the ALX Checker.
