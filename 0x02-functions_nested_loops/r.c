#include <unistd.h>

int _putchar(char c)
{
	return (write (1, &c, 1));
}

int main(void)
{
	_putchar ('Hello');
	return (0);
}
