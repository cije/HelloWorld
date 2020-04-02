#include<stdio.h>
int main(){
    int i,j,a[100],t,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-1;j++){
            if(a[j]>a[j+1]){
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}