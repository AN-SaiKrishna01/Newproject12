
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int s[10],P[10],M1[10],M2[10],M3[10],M4[10],N1[10],N4[10],N2[10],N3[10],A4[10],A1[10],A2[10],A3[10],a1=0,a2=0,a3=0,a4=0,n=5;
			printf("enter the available input 1");
			scanf("%d",&a1);
			printf("enter the available input 2");
			scanf("%d",&a2);
			printf("enter the available input 3");
			scanf("%d",&a3);
			printf("enter the available input 4");
			scanf("%d",&a4);
		int i=0,j=0,c;

	for(j=0;j<n;j++)
	{
		printf("enter the availed  input of 1");
		scanf("%d",&A1[i]);
		printf("enter the availed  input of 2");
		scanf("%d",&A2[i]);
		printf("enter the availed  input of 3");
		scanf("%d",&A3[i]);
		printf("enter the availed  input of 4");
		scanf("%d",&A4[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("enter the max  input of 1");
		scanf("%d",&M1[i]);
		printf("enter the max  input of 2");
		scanf("%d",&M2[i]);
		printf("enter the max  input of 3");
		scanf("%d",&M3[i]);
		printf("enter the max  input of 4");
		scanf("%d",&M4[i]);
	}
	for(j=0;j<n;j++)
	{
			N1[i]=M1[i]-A1[i];
			N2[i]=M2[i]-A2[i];
			N3[i]=M3[i]-A3[i];
			N4[i]=M4[i]-A4[i]
	}
	for(i=0;i<n;i++)
	{
		if(a1>=N1[i] & a2>=N2[i] & a3>=N3[i] & a4>=N4[i])
		{
			a1=A1[i]+a1;
			a2=A2[i]+a2;
			a3=A3[i]+a3;
			a4=A4[i]+a4;
			s[i]=i;
		}
	}
	for(i=0;i<5;i++)
	{
		if(a1<N1[i] || a2<N2[i] || a3<N3[i] || a4<N4[i])
		{
			printf("safe sequence cannot be generated");
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("S%d\t %d\n",s[i]);
	}
}

