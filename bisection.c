#include<stdio.h>
int i=0;
float func(float);
void main()
{
                float a,b;
                int p,q;
                float c;
                while(i>=0)
                {
                                if(func(i)<0){a=i;i++;p=1;if(q==1)break;}
                                else {b=i;i++;q=1;if(p==1) break;}
                }
                printf("%f %f\n",a,b);
                i=1;
                while(i<12)
                {
                                c=(a+b)/2;
                                if(func(c)>0) b=c;
                                else if(func(c)<0) a=c;
                                i++;
                }
                printf("%f",c);
}
float func(float x)
{
                return(x*x*x -4*x-9);
}
