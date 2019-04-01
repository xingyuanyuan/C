#include<stdio.h>
int main()
{
	float m0=1000,r1=0.0036,r2=0.0225,r3=0.0198,m1,m2,m3;
	m1=m0*(1+r1);
	m2=m0*(1+r2);
	m3=m0*(1+r3/2)*(1+r3/2);
	printf("m1=%f\nm2=%f\nm3=%f\n", m1,m2,m3);
	return 0;
}