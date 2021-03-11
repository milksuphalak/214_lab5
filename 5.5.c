#include <stdio.h>
int main()
{
    int i,j,x,y;
    int n,m,max=0,sum;
    scanf ("%d",&n);
    int a[n][n];
    scanf ("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n-m+1;i++)
    {
        for(j=0;j<n-m+1;j++)
        {

            sum=0;
            for (x=i;i<m+i;x++)
            {
                for (y=j;y<m+j;y++)
                {
                    sum+=a[x][y];
                }

            }
        }
        if (sum>max)
        {
            max=sum;
        }
    }
    printf ("%d",sum);
    printf ("%d",max);
    return 0;
}
