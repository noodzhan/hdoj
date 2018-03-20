#include <stdio.h>
int main()
{        
		int m;
		while(scanf("%d",&m)!=EOF)
		{
				int a,sum=0;
				for(m;m>0;m--)
				{
					scanf("%d",&a);
					sum+=a;
				}
				printf("%d\n",sum);
		}
		return 0;
}
