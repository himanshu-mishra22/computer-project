#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(int i=0;i<n-1;i++)
    {
        int t,f=0;
        for(int j=0;j<n-1-i;j++)

        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                f=1;
            }
        }
        if (f=0)
        break;
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);

    
    return 0;
}