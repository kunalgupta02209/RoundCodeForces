#include<stdio.h>
int data[5][200], n, k;
int main()
{
    int i, j;
    scanf("%d %d", &n, &k);
    if(k%2==0)
    {
        k/=2;
        printf("YES\n");
        for(i=1; i<2; i++)
        {
            for(j=1; j<n-1; j++)
            {
                if(k>0)
                {
                    data[i][j]=1;
                    k--;
                }
            }
        }
        for(i=2; i<3; i++)
        {
            for(j=1; j<n-1; j++)
            {
                if(data[3-i][j]==1) data[i][j]=1;
            }
        }
        for(i=0; i<4; i++)
        {
            for(j=0; j<n; j++)
            {
                if(data[i][j]==0) printf(".");
                else printf("#");
            }
            printf("\n");
        }
    }
    else
    {
        printf("YES\n");
        k--;
        data[1][n/2]=1;
       for(i=1; i<3; i++)
       {
           for(j=1; j<n/2; j++)
           {
               if(k>0)
               {
                   data[i][j]=1;
                   k-=2;
               }
           }
       }
       for(i=1; i<3; i++)
       {
           for(j=n/2+1; j<n-1; j++)
           {
               if(data[i][n-1-j]==1) data[i][j]=1;
           }
       }
       for(i=0; i<4; i++)
       {
           for(j=0; j<n; j++)
           {
               if(data[i][j]==0) printf(".");
               else printf("#");
           }
           printf("\n");
       }
    }
    return 0;
}
