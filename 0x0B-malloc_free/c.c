#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int word_count(char *s)
{
	int c = 0, i;
	char *n_words = " .,;\n\t";
	int x = strlen(s);

	for (i = 0; i < x; i++)
	{
		while (i < x)
		{
			if (strchr(n_words, s[i]) != NULL)
				break;
			i++;
		}
		c++;

		while (i < x)
		{
			if (strchr(n_words, s[i]) == NULL)
				break;
			i++;
		}

	}
	return (c - 1);
}



char **strtow(char *str)
{                                                           
	char **rz; 
	int x, z, lxn, i;

	if (str == NULL || str == "")
		return (NULL);

	int lxw = word_count(str);

	rz = malloc (sizeof(char *) * lxw);
	if (rz == NULL)
		return (NULL);

	char *tx = strtok(str, " ");
	while (tx != NULL)
	{
		rz[i] = tx;
		char *tx = strtok (NULL, " ");
		i++;
	}

	return (rz);
}





void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}


int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
