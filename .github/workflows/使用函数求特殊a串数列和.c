#include<math.h>


int fn( int a, int n )
{
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a * pow(10,i);
    }
    return sum;
}

int SumA( int a, int n )
{
    double sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += fn(a,i);
    }
    return sum;
}
