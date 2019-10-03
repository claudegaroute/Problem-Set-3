\
#include <stdio.h>
int main()
{
    int checkPrimeNumber(int n);
    int i, pcheck;

    printf("Prime numbers between 1 and 100 are: \n");

    for(i=2; i < 1000; i++)
    {
        pcheck = checkPrimeNumber(i);
        if(pcheck == 1)
            printf("%d \n",i);
    }
    return 0;
}

int checkPrimeNumber(int n)
{
    int j, pcheck = 1;
    for(j=2; j <= n/2; j++)
    {
        if (n%j == 0)
        {
            pcheck = 0;
            break;
        }
    }
    return pcheck;

}