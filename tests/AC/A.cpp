#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    long long int tc,num,val;
    scanf("%lld",&tc);
    while(tc--)
    {

        scanf("%lld",&num);
        val=1;
        while(val<=num)
        {
            val=val*2;
        }
    
        printf("%lld\n",val/2);
    }
    return 0;
}

