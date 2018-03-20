#include <stdio.h>
#define MAXN 1000;
int get_ge(int n)
{
		return n%10;
}
int get_shi(int n)
{
	return (n%100-n%10)/10;
}
int main()
{
		int m=0;
		int fir=MAXN;
		while(scanf("%d",&m)==1&&m)
		{      
				fir=MAXN;
				while(fir>=10)
				{
				fir=get_shi(m)+get_ge(m);
				m=fir;
				}
				if(fir<10)
						printf("%d\n",fir);
        }
		return 0;
}
