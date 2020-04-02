#include<stdio.h>
void tongSort(int book[],int n){
    int i,j,t;
    for(i=1;i<=n;i++){
        scanf("%d",&t);
        book[t]++;
    }
    for(i=1000;i>=0;i--)
        for(j=1;j<=book[i];j++)
            printf("%d ",i);
}
int main(){
    int n,book[1001],i;
    scanf("%d",&n);
    for(i=0;i<=1000;i++){
        book[i]=0;
    }
    tongSort(book,n);
    return 0;
}