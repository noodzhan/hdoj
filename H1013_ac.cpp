#include<stdio.h>
#include<string.h>
char a[10010];
int main()
{
	int n;
	while(~scanf("%s",a),strcmp(a,"0"))
	{
		int sum=0;
		int len=strlen(a);
		for(int i=0;i<len;++i)
		sum+=a[i]-'0';
		printf("%d\n",(sum-1)%9+1);
	}
	return 0;
}