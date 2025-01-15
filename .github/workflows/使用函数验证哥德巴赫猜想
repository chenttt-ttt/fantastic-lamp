int prime( int p )
{
    if(p == 2)
    {
        return 1;
    }else if(p <= 1)
    {
        return 0;
    }else
    {
        int limit = sqrt(p) + 1;
        for(int i = 2; i <= limit; i++)
        {
            if(p % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

void Goldbach( int n )
{
    int p,q;
    for(p = 2; p <= n / 2; p++)
    {
        if(prime(p))
        {
            q = n - p;
            if(prime(q))
            {
                printf("%d=%d+%d",n,p,q);
                break;
            }
        }
    }
}
