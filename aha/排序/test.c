#include <stdio.h>
int a[1001];
void tongSort(int[]);
void maopaoSort(int[]);
void quick(int[],int,int);
void quickSort(int[]);
int main()
{
    int num;
    printf("请选择排序方法：\n  1.桶排序\n  2.冒泡排序\n  3.快速排序\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        tongSort(a);
        break;
    case 2:
        maopaoSort(a);
        break;
    case 3:
        quickSort(a);
        break;
    }
    return 0;
}
void quickSort(int a[])
{
    int i, n;
    printf("请输入数据个数：");
    scanf("%d", &n);
    printf("请输入%d个数据：", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    quick(a,1, n);
    printf("结果为：\n");
    printf("%d ", a[1]);
    for (i = 2; i <= n; i++)
    {
        if (a[i] != a[i - 1])
            printf("%d ", a[i]);
    }
}
void quick(int a[],int left, int right)
{
    int i, j, t, tmp;
    if (left > right)
        return;
    tmp = a[left];
    i = left;
    j = right;
    while (i != j)
    {
        while (a[j] >= tmp && i < j)
            j--;
        while (a[i] <= tmp && i < j)
            i++;
        if (i < j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[left] = a[i];
    a[i] = tmp;
    quick(a,left, i - 1);
    quick(a,i + 1, right);
}
void maopaoSort(int a[])
{
    int i, j, n, t;
    printf("请输入数据个数：");
    scanf("%d", &n);
    printf("请输入%d个数据：", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j + 1];
                a[j + 1] = a[j];
                a[j] = t;
            }
        }
    }
    printf("结果为：\n");
    printf("%d ", a[1]);
    for (i = 2; i <= n; i++)
    {
        if (a[i] != a[i - 1])
            printf("%d ", a[i]);
    }
}
void tongSort(int a[])
{
    int i, n, t;
    printf("请输入数据个数：");
    scanf("%d", &n);
    for (i = 1; i <= 1000; i++)
    {
        a[i] = 0;
    }
    printf("请输入%d个数据：", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &t);
        a[t] = 1;
    }
    printf("结果为：\n");
    for (i = 1; i <= 1000; i++)
    {
        if (a[i] == 1)
            printf("%d ", i);
    }
}