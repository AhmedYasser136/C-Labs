#include <stdio.h>
#include <stdlib.h>
void toupper (char);

int main()
{
    char inp;
    printf ("Enter the Character you want to convert\n");
    inp=getchar();
    toupper(inp);
    return 0;
}


void toupper (char lo)
{
    if (lo >= 'a' && lo <= 'z')
    {
        lo -= 32;
        printf ("The uppercase format is \n%c",lo);
        return lo;
    }
    else if (lo >= 'A' && lo <= 'Z')
    {
        printf("The letter is already in upper \n");
    }
    else
    {
        printf ("This is not a valid entry \n");
    }
}
