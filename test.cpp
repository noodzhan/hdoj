#include <stdio.h>
#include <string.h>
void get_end(int v)
{
		char str[10];
		memset(str,'0',sizeof(str));
		int i;
		sprintf(str,"%d",v);
		for(i=0;str[i];i++);
		printf("%d %d ",str[i-1]-'0',i);
}
int main()
{
		int a=123400;
		get_end(a);
		return 0;
}
