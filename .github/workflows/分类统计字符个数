#include<ctype.h>

void StringCount( char s[] )
{
    int lettercount = 0;
    int blankcount = 0;
    int digitcount = 0;
    int othercount = 0;
    while(*s)
    {
        if(isalpha(*s))
        {
            lettercount++;
        }else if(*s == ' ' || *s == '\n')
        {
            blankcount++;
        }else if(isdigit(*s))
        {
            digitcount++;
        }else
        {
            othercount++;
        }
        s++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",lettercount,blankcount,digitcount,othercount);
}
