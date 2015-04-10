/*这是第一个题目，求pai的*/



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
        sum=sum+m*pow(-1,n);//由于要判断正负，所以用到pow函数，即(-1)^(n).并累加到sum变量中
        n++;
    }
    printf("%f\n",sum*4);//输出结果
    return 0;
}
