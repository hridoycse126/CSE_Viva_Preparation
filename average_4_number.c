#include <stdio.h>
int main()
{
    float avg = 0;
    float sum =0;
    int x=0;

    /* Array- declaration � length 4*/
    float num[4];

    /* We are using a for loop to traverse through the array
     * while storing the entered values in the array
     */
    for (x=0; x<4;x++)
    {
        printf("Enter number %d \n", (x+1));
        scanf("%f", &num[x]);
    }
    for (x=0; x<4;x++)
    {
        sum = sum+num[x];
    }

    avg = sum/4;
    printf("Average of entered number is: %f", avg);
    return 0;
}
