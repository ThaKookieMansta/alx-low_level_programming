# 0x15. C - File I/O

This is the code manual for the project 0x15. C - File I/O.  
The table below has the files contained in this directory and a description.  

## Files

|Filename | Description|
|---------|------------|
|0-read_textfile.c | A function that reads a text file and prints it to the POSIX standard output.|
|1-create_file.c | A function that creates a file.|
|2-append_text_to_file.c | A function that appends text at the end of a file.|
|3-cp.c | A program that copies the content of a file to another file.|
| | A |




## Compilation

To compile the files in this directory we shall be using the following command in your terminal.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [C-FILE] [C-FUNCTION] -o [OUTPUT-FILE]
```

Remember to replace the words in square brackets with the corresponding files and valid filename for the output file as shown below.

```commandline
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
```

## Testing / Running
To test the compiled program we run the command as shown below.  

```commandline
$ ./[OUTPUT-FILE]
```

Remember to replace the words in the square bracket with the corresponding filename as shown below.  

```commandline
$ ./a Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
```

## Licence

This directory and it's contents are open for use by the ALX Checker.
