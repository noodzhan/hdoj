#include <stdio.h>
int main()
{
		int n;
	    scanf("%d",&n);
		while(n--)
		{
				int m;
				int a;
				int sum=0;
				scanf("%d",&m);
				for(m;m>0;m--)
			    {
					scanf("%d",&a);
					sum+=a;
				}
					printf("%d\n",sum);
		}
		return 0;
}
