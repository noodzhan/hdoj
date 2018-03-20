#include <stdio.h>
int main()
{
		int n;
		scanf("%d",&n);
		while(n--)
		{
				int m=0;
				int total=0;
				int a=0;
				scanf("%d",&m);
				while(m--)
				{
						scanf("%d",&a);
						total+=a;
				}
				printf("%d\n\n",total);
		}
		return 0;
}
