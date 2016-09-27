#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    long long int tc,num;
    scanf("%lld",&tc);
    while(tc--)
    {

        scanf("%lld",&num);
        short int val=1;
        while(val<=num)
        {
            //short int will overflows back to negative number
            //infinite shit
            val=val*2;

        }
        
        printf("%d\n",val/2);
    }
    return 0;
}

