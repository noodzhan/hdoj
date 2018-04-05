//hdoj 1108
//求最小公倍数
//windows
#include <stdio.h>
//求最小公约数
/*int common_divisor(int m,int n)
{
	if(m<n)
	{
		int swap;
		swap=m;
		m=n;
		n=swap;
	}
	int temp=m%n;
	if(temp==0)
		return n;
	else
		return common_divisor(temp,n);
}*/
/*int common_divisor(int m,int n)
{
	return n?common_divisor(n,m%n):m;
}*/
/*int common_divisor(int m,int n)
{
	int r;
	while(n>0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	return m;
}*/
int main()
{
	int m,n,a,b;
	int r;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		
		a=m;b=n;
		while(n>0)
			{
				r=m%n;
				m=n;
				n=r;
			}
		printf("%d\n",a*b/m);
	}
	return 0;
}
