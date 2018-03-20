#include <stdio.h>
#include <string.h>
#define MAXN 1000;
int get_ge(int n)
{
		return n%10;
}
int get_shi(int n)
{
	return n%100/10;
}
int get_qian(int n)
{
		return n%1000/100;
}
int main()
{
		int m=0;
		int fir=MAXN;
		char digital[1000];
		while(scanf("%d",&m)==1&&m)
		{
				memset(digital,0,sizeof(digital));
                sprintf(digital,"%d",m);
				int i=0;
				int temp=0;
				for(i=0;digital[i];i++)
				   	temp+=digital[i];
				temp=temp-i*48;
				m=temp;
				fir=MAXN;
				while(fir>=10)
				{
				fir=get_shi(m)+get_ge(m)+get_qian(m);
				m=fir;
				}
				if(fir<10)
						printf("%d\n",fir);
        }
		return 0;
}
