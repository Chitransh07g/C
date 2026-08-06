# include<stdio.h>

/*
   1. # include ----- ek preprocessor directive h
   2.  #  ----- ye instruction h jo complier ke rum hone se phlerun hot h .... aur ye preprocessor directive ke liye hota h 
   3.  stdio = Standard Input Output
   4.  .h = header file extension
   5. < > — compiler standard system directories me dhundhta hai
*/

int main(){
    printf("Hello worlds \n");
    int age = 23;
    printf("Age of mine is %d \n",age);

    printf("Enter the Age of fthe person \n");

    // input lene ke liye 
    scanf("%d", &age);
    // here & is user to store the input value at the adress age
    
    printf("The updated age is : %d \n", age);

    return 0;
}