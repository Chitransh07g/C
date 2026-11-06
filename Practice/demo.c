# include <stdio.h>


int sum (int a , int b){
    return a+b ;
}

int main()
{
    int x = 5 ;
    printf("%d%d%d",x++,++x,x);
    printf("\n");
    printf("The sum of the numbers are :- %d\n", sum(3,3));
}