#include<stdio.h>
int main()
{
    int n,i,j,m=0,x=0;
    scanf("%d",&n);

    if(n%2!=0)
    {
        for(i=0; i<n; i++)
        {
            for(j=n; j>0; j--)
            {
                if(j==(n/2)-m+1||j==(n/2)+x+1)
                    printf("*");
                else
                    printf("_");
            }
            printf("\n");
            if(i<n/2)
            {
                m++;
                x++;
            }
            else
            {
                m--;
                x--;
            }
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(j==(n/2)-m-1||j==(n/2)+x-1)
                    printf("*");
                else
                    printf("_");
            }
            printf("\n");
            if(i<(n/2)-1)
            {
                m++;
                x++;
            }
            else if(i>=n/2)
            {
                m--;
                x--;
            }
        }

    }
}
