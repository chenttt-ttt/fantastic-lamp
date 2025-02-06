bool palindrome( char *s )
{
    char temp;
    int left = 0;
    int right = strlen(s) - 1;
    while(left < right)
    {
        if(s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
