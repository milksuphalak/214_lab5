#include <stdio.h>
int main()
{
    int i=2,j,n;
    scanf ("%d",&n);
    while (i<=n)
    {
        for (j=2;1;j++)
        {
            if(j%2==0||j%3==0||j%5==0)
            {
                printf ("%d",j);
            }
        }
    }
}
