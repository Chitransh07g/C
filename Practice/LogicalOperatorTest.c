# include <stdio.h>

int main()
{
    int x = 5, y = 0, z;
    z = (x > 0) && (y = 10);
    printf(" %d %d \n", y, z);
    return 0 ; 
}