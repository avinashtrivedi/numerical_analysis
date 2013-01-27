#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,n;
float p,t;
float arr[7][7]={{10.63,13.03,15.04,16.81,18.42,19.90,21.27}};
float brr[7]={100,150,200,250,300,350,400};
printf("enter x::");
scanf("%d",&n);
i=0;
while(n>brr[i])
{i++;}
k=i-1;
p=(n-brr[k])/(brr[1]-brr[0]);
printf("%.2f",p);
for(i=1;i<7;i++)
{
	for(j=0;j<7-i;j++)
	{
	 arr[i][j]=(arr[i-1][j+1])-(arr[i-1][j]);
	}
}
printf("\n\n");
for(i=0;i<7;i++)
{
for(j=0;j<7-i;j++)
{
printf("%.2f  ",arr[i][j]);
}
printf("\n\n");
}
t=arr[0][k] + p*arr[1][k] +p*(p-1)*(arr[2][k-1])/2  +p*(p-1)*(p+1)*(arr[3][k-1])/6 +p*(p-1)*(p-2)*(p+1)*(arr[4][k-2])/24 ;
printf("\n%.2f",t);
}
