#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int input;
    scanf("%d",&input);
    if((input>=1)&&(input<=10000))
    printf("%.7f",PI*input*input);
    return 0;
}