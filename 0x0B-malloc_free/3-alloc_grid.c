#include "main.h"

/**
 * alloc_grid - 
 * 
 * @width: 
 * @height: 
 * 
 * Return: 
*/

int **alloc_grid(int width, int height)
{
    size_t xx, zz, idx, idz, frr, fcc;

    if (width < 1 || height < 1)
        return (0);

    rxx[malloc (width * sizeof(int))][malloc (height * sizeof(int))];
    frr = width * sizeof(int);
    fcc = height * sizeof(int);


    if (xx == NULL)
        return (0);

    for (idx = 0; idx < fcc; idx++)
    {
        for (idz = 0; idz < frr; idz++)
        {
            rxx[idx][idz] =  0;
        }
        
    }
    

}

