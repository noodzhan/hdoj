#include <stdio.h>
int gcd(int a,int b)
{
	return b>0?gcd(b,a%b):a;
}
int main()
{
		printf("%d",gcd(2,4));
		return 0;
}
