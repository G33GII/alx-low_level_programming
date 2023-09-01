# Command-Line Arguments in C (argc and argv)

This C program is a simple example illustrating how to use `argc` and `argv` to handle command-line arguments in C programming. Command-line arguments are a powerful way to pass parameters to a program when it's executed from the terminal.

## Table of Contents
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Example](#example)
- [License](#license)

## Prerequisites

Before you run this program, ensure that you have a C compiler installed on your system. You can use GCC (GNU Compiler Collection) or any other C compiler of your choice.

## Usage

1. Clone or download this repository to your local machine.

2. Open your terminal or command prompt.

3. Navigate to the directory where the source code file (usually named `main.c`) is located.

4. Compile the program using a C compiler. For example, with GCC:


Replace `program_name` with the desired name for your executable.

5. Run the program with command-line arguments:


Replace `program_name` with the name you specified in step 4 and replace `arg1`, `arg2`, `arg3`, etc., with your desired command-line arguments.

## Example

Let's assume you have compiled the program as `myprogram` and you want to pass some arguments:

```bash
$ ./myprogram hello world 123
Program name: ./myprogram
Argument 1: hello
Argument 2: world
Argument 3: 123


Make sure to include a `LICENSE` file in your project directory with the appropriate license terms or replace the license section in the README with your preferred licensing information. Additionally, replace `main.c` and `program_name` with your actual source code file and the name you want to give to your executable.


==============================
/**
* main - simple program which writes the arguments
*        supplied to main on the program's standard output.
* 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
        while(argc--)
                printf("%s\n", *argv++);
        exit(EXIT_SUCCESS);
}



/* $ ./show_args abcde text hello
* show_args
* abcde
* text
* hello
* $
*/ 
