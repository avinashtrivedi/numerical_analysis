#include<stdio.h>
float func(float);
void main()
{
                int a,b;
                float h;
                float sum=0;
                printf("enter lower ,upper limit and value of h:\n");
                scanf("%d %d %f",&a,&b,&h);
                float t;
                int k=h;
                float sum1=0;
                t=func(a)+func(b);
                int i;
                for(i=1;i<b;i++)
                {
                                if(i%3==0)
                                {
                                                sum+=2*func(i*h);
                                }
                                else
                                {
                                                sum+=3*func(i*h);
                                }
                }
                sum=3*h*(sum+t);
                printf("%f",sum/8);

}
float func(float x)
{
                return (1/(1+x*x));
}

