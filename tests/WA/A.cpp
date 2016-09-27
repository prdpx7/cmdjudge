//int over-flow
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int tc,num;
    scanf("%d",&tc);
    while(tc--)
    {

        scanf("%d",&num);
        short int val=1;
        while(val<=num && val>=0)
        {
            val=val*2;
        }
        
        printf("%d\n",val/2);
    }
    return 0;
}

