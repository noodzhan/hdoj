#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(n;n>0;n--)
		{
				int m=0;
				scanf("%d",&m);
				double sum=0.0;
				for(int i=1;i<=m;i++)
					sum+=log10(i);
			   // sum=floor(sum);
			    sum=(int)sum+1;
				printf("%d\n",(int)sum);
				
		}
		return 0;
}

