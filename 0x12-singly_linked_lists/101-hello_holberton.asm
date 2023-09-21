global main              /* Declare the entry point of the program as "main" */
extern printf            /* Declare the use of the "printf" function */

section .text
main:                    /* Start of the main function */
    mov edi, format      /* Load the address of the format string into edi */
    xor eax, eax         /* Clear the eax register (set it to 0) */
    call printf          /* Call the printf function to print the message */
    mov eax, 0           /* Set the return value to 0 (success) */
    ret                  /* Return from the main function */
    format db `Hello, Holberton\n`,0  /* Define a null-terminated string */
    