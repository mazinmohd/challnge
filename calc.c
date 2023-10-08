#include<stdio.h>
int main(void)
{
    int a,b;
    int c;
    int g ;
    //g = a + b;
    int f;
    //f = a-b;
    int s; 
    //s = a*b;
    int l;
    //l = a/b;
    printf("hi I'm a calculator\n");
    printf("please input the first number\n");
    scanf("%d",&a);
    printf("please input the second number\n");
    scanf("%d ",&b);
    printf("Choose the number of calculation :\n 1(+) \t 2 (-)\t 3(*)\t 4(/)\n");
    g = a + b;
    f = a - b;
    s = a * b;
    l = a / b;

    scanf("%d",&c);

    if ( c==1) {
        printf(" the result  = %d",g);
    }
    else if (c==2) {
        printf(" the result = %d",f) ;
    }
    else if (c==3) {
        printf(" the result = %d",s);
    }
    else if(c==4) {
        printf("the result = %d",l);
    }
    else {
        printf("error");
        
    }



    return 0;
}
