#include <stdlib.h>
#include <stdio.h>
 
int main()
{
    int sum = 0;
    float cb_this_month;
    for(int i=0;i<12;++i)
    {
        scanf("%f",&cb_this_month);
        sum += (int)(cb_this_month*100);
    }
 
    float average = ((int)(sum/12.0+0.5))/100.0;
    printf("$%.2f", average);
 
    return 0;
}