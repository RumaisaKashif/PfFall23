/*
 Programmer: Rumaisa Kashif
 Date: 18/10/23
 Desc: Ramanujan-Hardy 2-way numbers
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n;
    printf("enter n: \n");
    scanf("%d", &n);
    int i, j, k, l;
    for (i=1;i<n;i++)
    {
        for (j=1;j<n;j++)
        {
            int icube= i*i*i;
            int jcube= j*j*j;
            
            for (k=1;k<n;k++)
            {
                for (l=1;l<n;l++)
                {
                    int kcube= k*k*k;
                    int lcube= l*l*l;
                    if (i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
                    {
                        if (icube+jcube==kcube+lcube && icube+jcube<(n*n*n))
                        {
                            printf("Ramanujan number found: %d\n",icube+jcube);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
