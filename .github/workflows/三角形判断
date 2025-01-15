#include<stdio.h>
#include<math.h>

int main()
{
    double arr[7];
    for(int i = 0; i < 6; i++)
    {
        scanf("%lf",&arr[i]);
    }
    double len1 = sqrt(pow(arr[2] - arr[0], 2) + pow(arr[3] - arr[1], 2));
    double len2 = sqrt(pow(arr[4] - arr[2], 2) + pow(arr[5] - arr[3], 2));
    double len3 = sqrt(pow(arr[0] - arr[4], 2) + pow(arr[1] - arr[5], 2));
    double L = 0;
    double A = 0;
    if((len1 + len2 <= len3) || (len1 + len3 <= len2) || (len3 + len2 <= len1))
    {
        printf("Impossible");
    }else
    {
        L = len1 + len2 + len3;
        double s = (len1 + len2 + len3) / 2;
        A = sqrt(s * (s - len1) * (s - len2) * (s - len3));
        printf("L = %.2f, A = %.2f", L, A);
    }
    return 0;
}
