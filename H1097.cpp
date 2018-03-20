#include <stdio.h>
int get_end(int v)
{
		char str[10];
		int i;
		sprintf(str,"%d",v);
		int end;
		for(i=0;str[i];i++);
		return str[i-1]-'0';
}
int main()
{
		int a,b;
	    while(scanf("%d %d",&a,&b)!=EOF)
		{
				int arr[5];
				int end;
				end=get_end(a);
				arr[1]=end%10;
				arr[2]=(arr[1]*end)%10;
		     	arr[3]=(arr[2]*end)%10;
				arr[4]=(arr[3]*end)%10;
				arr[0]=arr[4];
				printf("%d\n",arr[b%4]);
		}
		return 0;
}
