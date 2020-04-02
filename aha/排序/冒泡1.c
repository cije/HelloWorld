#include"stdio.h"
struct student
{
    int score;
    char name[20];
};

int main(){
    struct student a[100],t;
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s %d",a[i].name,&a[i].score);
    }
    for(i=1;i<n-1;i++){
        for(j=1;j<=n-1;j++){
            if(a[j].score<a[j+1].score){
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=1;i<=n;i++)
        printf("name: %s  score: %d\n",a[i].name,a[i].score);
    return 0;
}