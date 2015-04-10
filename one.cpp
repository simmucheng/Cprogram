#include<stdio.h>
int main()
{
    int i,j,n;
    double sum,m;
    m=1.0;
    n=1;
    sum=1.0;
    while(m>=1e-6)
    {
        m=1.0/(2*n+1);
        sum=sum+m*pow(-1,n);
        n++;
    }
    printf("%f\n",sum*4);
    return 0;
}
