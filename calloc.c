#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char * p;

    p = calloc(15, sizeof(char));

    if(p == NULL)
    {
        printf("Could not able allocate memory\n");

    }
    else
    {
        strcpy(p, "Allocation memory was successful!\n");
    }

    printf("%s", p);
    free(p);
}