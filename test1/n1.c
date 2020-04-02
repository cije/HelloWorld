#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    if((n>=1)&&(n<=1000000000))
    printf("%lld",n*(n+1)/2);
    return 0;
}