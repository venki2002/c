#include <stdio.h>

void main(){
    float m,n;//m=7.1, n=7 =>14.1
    printf("Enter two numbers ");
    scanf("%f",&m);//%f for float
    scanf("%f",&n);

    printf("Sum = %.2f\n",m+n);
    printf("sub = %.2f\n",m-n);
    printf("mul = %.2f\n",m*n);
    printf("div = %.2f\n",m/n);
}