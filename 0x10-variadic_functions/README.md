# 0x10-variadic_functions

This is the code manual for the project 0x10-variadic_functions.  
The table below has the files contained in this directory and a description.  

## Files

|Filename | Description|
|---------|------------|
|0-sum_them_all.c | A function that returns the sum of all its parameters.|
|1-print_numbers.c | A function that prints numbers, followed by a new line.|
|2-print_strings.c | A function that prints strings, followed by a new line.|
|3-print_all.c | A function that prints anything.|


## Compilation

To compile the files in this directory we shall be using the following command in your terminal.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [C-FILE] [C-FUNCTION] -o [OUTPUT-FILE]
```

Remember to replace the words in square brackets with the corresponding files and valid filename for the output file as shown below.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
```

## Testing
To test the compiled program we run the command as shown below.  

```commandline
$ ./[OUTPUT-FILE]
```

Remember to replace the words in the square bracket with the corresponding filename as shown below.  

```commandline
$ ./a 
1122
500
```

## Licence

This directory and it's contents are open for use by the ALX Checker.
