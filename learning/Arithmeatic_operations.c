# include <stdio.h>

int main(){
    float a ,b;
    printf("Enter two numbers \n");
    scanf("%f %f",&a ,&b);
    printf("Addition = %.2f \n ", a+b);
    printf("Substraction = %.2f \n ", a-b);
    printf("Multiplication  = %.2f \n ", a*b);
    if (b != 0)
        printf("Division = %.2f \n ", a/b);
    else 
        printf("Divison is not possible by Zero \n");
    
    return 0;    
}