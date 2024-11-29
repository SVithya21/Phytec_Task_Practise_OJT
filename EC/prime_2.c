#include<stdio.h>
void prime(void)
{
        int count=0,k=1;
        while(k<=100)
        {
                int j=1;
                while(j<=k)
                {
                        if(k%j==0)
                        {
                                count++;
                        }
                        j++;
                }
                if(count==2)
                {
                        printf("%d ",k);
                }
                k++;
        }
}  
