# 0x1A-hash_tables

This is the code manual for the project 0x1A-hash_tables.  
The table below has the files contained in this directory and a description.  

## Files

|Filename | Description|
|---------|------------|
|0-hash_table_create.c| A function that creates a hash table.|
|100-sorted_hash_table.c| All hash functions in this repository in a sorted table|
|1-djb2.c| A hash function implementing the djb2 algorithm.|
|2-key_index.c| A function that gives you the index of a key|
|3-hash_table_set.c| A function that adds an element to the hash table.|
|4-hash_table_get.c| A function that retrieves a value associated with a key|
|5-hash_table_print.c| A function that prints a hash table.|
|6-hash_table_delete.c| A function that deletes a hash table.|
|hash_tables.h| The header file|
|README.md| This Readme  file |


## Compilation

To compile the files in this directory we shall be using the following command in your terminal.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [C-FILE] [C-FUNCTION] -o [OUTPUT-FILE]
```

Remember to replace the words in square brackets with the corresponding files and valid filename for the output file as shown below.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
```

## Testing
To test the compiled program we run the command as shown below.  

```commandline
$ ./[OUTPUT-FILE]
```

Remember to replace the words in the square bracket with the corresponding filename as shown below.  

```commandline
$ ./c 
6953392314605
237
3749890792216096085
341
5861846
470
```

## Licence

This directory and it's contents are restricted for use by the ALX Checker.
