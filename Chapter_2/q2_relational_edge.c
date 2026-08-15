# include <stdio.h>

int main(){
    int a = 5, b = 5;
    printf("%d \n", a == b);

    if (a = b) 
    {
    printf("hello \n");
    }
    /* a = b -- yaha pe assignment hua ... aur C me assignment ka bhi ek value return krte h .... 
       a ka value 5 hjayega kyu ki a me b ka value store ho raha h .... 
       if check krega ki .... value non zero to nhi h na ... agr non zero h to true ...to if block ke andr ka execute hoga ....  */
       
    return 0 ;
}