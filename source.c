#include <stdio.h>
#include <stdlib.h>

void swap_in_array(int *array, int matrixes[5][4][2])
{
    for (int k = 0; k < 2; k++)
    {
        int a = k * 2 + 2 - 1;
        int b = 5 - (k * 2 + 2); // loop use kiye  for defining index "a" as {2,4} and b as {4,2} for swapping
        for (int y = 0; y < 4; y++)
            for (int x = 0; x < 2; x++)
                // iterate algo use kiye  over the matrixes and swap the actual ints yha pe  (using a and b as indexes for the matrix)
                array[a * 8 + x + y * 2] = matrixes[b][y][x];
    };
}

void print_as_matrixes(int *array)
{
    for (int y = 0; y < 4; y++)
    {
        for (int k = 0; k < 5; k++)
        {
            for (int a = 0; a < 2; a++)
            {
                printf("%d,", array[k * 8 + a + y * 2]);
            };
            printf(" ");
        };
        printf("\n");
    };
};

