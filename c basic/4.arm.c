#include <stdio.h>
int main(){
    int n;
    printf("Enter number\n");
    scanf("%d",&n);//153
    int m=n;//m=153
    int r,s=0;
    /*
    for(init;con;inc/dec){
        ....................
        .................
        .........
    }
    */
    for(n;n>0;n=n/10)
    {
        r=n%10;
        s=s+(r*r*r);
    }
    if (m==s){
        printf("arm");
    }
    else{
        printf("not arm");
    }
    
}
