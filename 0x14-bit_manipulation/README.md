# 0x14. C - Bit manipulation

This is the code manual for the project 0x14. C - Bit manipulation.  
The table below has the files contained in this directory and a description.  

## Files

|Filename | Description|
|---------|------------|
|0-binary_to_uint.c | A function that converts a binary number to an unsigned int.|
|1-print_binary.c | A function that prints the binary representation of a number.|
|2-get_bit.c | A function that returns the value of a bit at a given index.|
|3-set_bit.c | A function that sets the value of a bit to 1 at a given index.|
|4-clear_bit.c | A function that sets the value of a bit to 0 at a given index.|
|5-flip_bits.c| A function that returns the number of bits you would need to flip to get from one number to another.|
| | |
| | |



## Compilation

To compile the files in this directory we shall be using the following command in your terminal.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [C-FILE] [C-FUNCTION] -o [OUTPUT-FILE]
```

Remember to replace the words in square brackets with the corresponding files and valid filename for the output file as shown below.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
```

## Testing
To test the compiled program we run the command as shown below.  

```commandline
$ ./[OUTPUT-FILE]
```

Remember to replace the words in the square bracket with the corresponding filename as shown below.  

```commandline
$ ./a 
1
5
0
98
402
```

## Licence

This directory and it's contents are open for use by the ALX Checker.
