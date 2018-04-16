#include<stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int arr[], int n,int p[])
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
    {   
       for (j = 0; j < n-i-1; j++) 
        {
		      if (arr[j] > arr[j+1])
            {
			  swap(&arr[j], &arr[j+1]);
              swap(&p[j],&p[j+1]);
}}}}
int main()
{
	int n,i;
	printf("\n enter number of processes : ");
	scanf("%d",&n);
	int p[n],at[n],bt[n],com[n];
	for(i=0;i<n;i++){
		printf("\n enter process id : ");
		scanf("%d",&p[i]);
		printf("\n enter arrival time : ");
		scanf("%d",&at[i]);
		printf("\n enter burst time : ");
		scanf("%d",&bt[i]);
		com[i]=0;
			}
			int k,quant1=3;
				for(i=0;i<n;i++){
			
				k=0;
				while(k<quant1){
					bt[i]=bt[i]-1;
					k=k+1;
					if(bt[i]==0){
						com[i]=1;
						//p=p+1;
						break;
					}}}
				printf("process\tremaining burst\n");
				for(i=0;i<n;i++){
					printf("\n%d\t%d",p[i],bt[i]);
					
				}
				int quant2=6;
						for(i=0;i<n;i++){
			
				k=0;
				while(k<quant2){
					bt[i]=bt[i]-1;
					k=k+1;
					if(bt[i]==0){
						com[i]=1;
						//p=p+1;
						break;
						
					}}}
					printf("\n process\tremaining burst\n");
				for(i=0;i<n;i++){
					printf("\n%d\t%d",p[i],bt[i]);
					
				}
				//bool s=true;
				int p1=0;
				int bt1=bt[0];
				int j;
				int temp;
			bubbleSort(bt,n,p);
				for(i=0;i<n;i++){
					printf("\n  completed program %d : p[%d]",i+1,p[i]);
				}}
