#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Your First Number: ",x);
    scanf("%d",&x);
    printf("Enter Your Second Number: ",y);
    scanf("%d",&y);

    if(x==y){
        printf("Both variables are equal\n");
    }

    if(x>y){
        printf("x is greater than y \n");
    }

    if(x<y)
    {
        printf("x is less than y \n");
    }

    if(x!=y)
    {
        printf("x is not equal to y \n");
    }

    if(x<=y)
    {
        printf("x is lesser or equal to y\n");
    }

    if(x>=y){
        printf("x is greater or equal to y \n");
    }



    return 0;
}
