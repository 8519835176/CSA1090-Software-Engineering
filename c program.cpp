#include<stdio.h>
#include<conio.h>
int main()
{
	int e,n,p,cc;
	printf("program to find cyclomatic complexity");
	printf("enter the number of edgs in the flow graph");
	scanf("%d",&e);
	printf("enter the number of nodes in the flow graph");
	scanf("%d",&n);
	printf("enter the number of predicate nodes in the flow graph");
	scanf("%d",&p);
	cc = e-n+(2*p);
	printf("the cyclomatic complexity of flow graph is :%d",cc);
    return 0;
}
