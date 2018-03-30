#include <stdio.h>
#include <iostream>
using namespace std;
static int length=1;
int oper(int n)
{
    if(n==1)
        return length;
    else if(n%2)
        {   oper(3*n+1);
            length++;
        }
    else
        {   oper(n/2);
            length++;
        }
}
int opor(int n)
{
  L1:  if(n==1)
        return length;
    else if(n%2)
        {   n=3*n+1;
            length++;
            goto L1;
        }
    else
        {   n=n/2;
            length++;
            goto L1;
        }
}
int opar(int n)
{

    int k=0;
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else n=3*n+1;
        k++;
    }
    return k+1;
}
int main()
{
    int i=0,j=0,v=0;
    int m,n,p;
    int maxn=0;
    while(cin>>m>>n)
    {
        i=m;
        j=n;
        if(i>j)
        {
            p=i;
            i=j;
            j=p;
        }
        maxn=0;

        for(int temp=i;temp<=j;temp++)
            {
                length=1;
                v=opar(temp);
                if(v>=maxn)
                    maxn=v;
            }
        cout<<m<<" "<<n<<" "<<maxn<<endl;

    }
    return 0;
}
