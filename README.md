# Assignment 03 - System Calls and Files

This assignment will give you exercises on making system calls and working with files in C.  Assignment is worth **210** points.

## Last name, first name

`Github username`

## Information For **ALL** Exercises

- Must be written in C.
- Must compile and run on Linux (ie. class server or Darwin).
- All input or output file names must be command-line arguments.
- All code (*.c) files must be in the `src/` folder.
- All binary files must be in the `bin/` folder.
- Use a Makefile with targets for each of the exercises.
  - A target named `clean` should remove all the binary and object files for every exercise.
  - Each exercise should have **2** targets.  One for the build and another to run it.
  - Target names must follow this format `ex??_bld` and `ex??_run` (ex. `ex01_bld` and `ex02_run`).
- Don't forget to put your name and Github user name in the `README.md` file.

## Exercise 01 (15 points)

Write a program the opens an input file for reading and an output for writing.  Basically, you are coding your version of the `cp` Linux command.

## Exercise 02 (15 points)

Write a program that uses`getc` and `putc` to copy the input file to the output file, one character at a time.

## Exercise 03 (15 points)

Write a program that uses `lseek` to copy the contents of one file into another file at starting at position 100.

## Exercise 04 (15 points)

Write a program using `open`, `create`, `read`, `link`, `write`, `lseek`, `close` and `unlink` that determines the length of a file **without using a loop** in the code.

## Exercise 05 (15 points)

Implement `ls` and `ls -l` command in Linux using `opendir`, `readdir` and `closedir`.

## Exercise 06 (15 points)

Implement `cat` and `mv` commands in Linux using system calls.

## Exercise 07 (15 points)

Write a program to list for every file in the current working directory, its `inode` number and filename.

## Exercise 08 (15 points)

Write a program that redirects standard output (`stdout`) to a file that is passed as an argument. (**Hint**: `ls > file`)

## Exercise 09 (15 points)

Write a program which scans the current working directory and prints the directory listing except regular files and directories. (Prints only special files).

## Exercise 10 (15 points)

Write a program that creates a symbolic link and hard links to a file and identify the difference between them.

## Exercise 11 (15 points)

Write a program for deleting a directory by using `rmdir()`.

## Exercise 12 (15 points)

Write a program to demonstrate the usage of `dup2`. If we read through the duplicated file descriptor, we will continue from the previous update in file pointer.

## Exercise 13 (15 points)

Write a program demonstrates the usage of `fstat` to retrieve the details of file.

## Exercise 14 (15 points)

Write a program demonstrates the usage of `stat`, to print different attributes of a file which includes `size`, `inode number`, whether it is a regular file or directory etc...
