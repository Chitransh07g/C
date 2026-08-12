# include<stdio.h>

int main(){
    int a , b ;
    printf("Enter the  first number :-");
    scanf("%d",&a);
    printf("Enter the  Second number :-");
    scanf("%d",&b);
    
    printf("\nvalues before swapping \n");
    printf(" a = %d \n", a);
    printf(" b = %d \n", b);

    a = a + b ;
    b = a - b ;
    a = a - b ;
    
    printf("\nSwaped values are \n");
    printf(" a = %d \n", a);
    printf(" b = %d \n", b);

    return 0 ;
}