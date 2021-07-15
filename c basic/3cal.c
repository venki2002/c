#include <stdio.h>

int main(){
    int op;
    float m,n;

    printf("Enter two numbers");
    scanf("%f%f",&m,&n);
    
    printf("Enter your choice\n");
    printf("1.add\n");
    printf("2.sub\n");
    printf("3.mul\n");
    printf("4.div\n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("Add =%.2f",m+n);
        break;
    case 2:
        printf("sub =%.2f",m-n);
        break;
    case 3:
        printf("mul =%.2f",m*n);
        break;
    case 4:
        printf("div =%.2f",m/n);
        break;
    default:
        printf("Enter vaild choice..");
        break;
    }
}