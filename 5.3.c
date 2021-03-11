#include <stdio.h>
int main()
{
    int i=0,j,n,x=0,m[3]={2,3,5},e;
    scanf ("%d",&n);
        for (j=1;1;j++)
        {
            e=j;
            while (i!=3)
            {
                if (e%m[i]==0)
                {
                    e/=m[i];
                } else
                {
                    i++;
                }
            }
            i=0;
        }

}
