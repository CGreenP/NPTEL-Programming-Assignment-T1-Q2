#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n!=1)
    {
        if((n%2)==0)
        {
            n=(n/2);
        }
        if (((n%2)!=0)&&(n!=1))
        {
            n=(3*n)+1;
            count++;
        }
        if (n==1)
        {
            count++;
            break;
        }
    }
    printf("%d",count);
    return 0;
}
