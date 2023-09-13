/**
 * print_name - Prints a name using a provided printing function.
 *
 * @name: A pointer to a null-terminated string containing the name to print.
 * @f: A pointer to a function that takes a pointer to a character string
 *      (name) as its parameter and performs the actual printing.
 *
 * This function takes a name and a pointer to a printing function as
 * parameters. It invokes the provided printing function to display the name.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
