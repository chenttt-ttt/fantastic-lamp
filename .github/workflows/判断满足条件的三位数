int search( int n )
{
    int count = 0;
    int num,digit1,digit2,digit3;
    for(int i = 10; i * i <= n; i++)
    {
        num = i * i;
        digit1 = num / 100;
        digit2 = (num / 10) % 10;
        digit3 = num % 10;
        if(digit1 == digit2 || digit1 == digit3 || digit2 == digit3)
        {
            count++;
        }
    }
    return count - 1;
}
