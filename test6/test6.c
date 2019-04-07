#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Input two numbers,Please use space\n");
	scanf("%d,%d",&a,&b);
	//getchar();
	if(a>=b)
	{
		printf("change\n");
		/*t=a;
		a=b;
		b=t;*/
		t = a + b;
		a = t-a;
		b = t-b;
	}
	printf("%d,%d\n",a,b);
	return 0;
}

