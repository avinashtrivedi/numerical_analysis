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
                while(k!=b+h)
                {
                                sum+=func(k);
                                k=k+2*h;
                }
                k=2*h;
                printf("%f\n",4*sum);
                while(k!=b)
                {
                                sum1+=func(k);
                                k=k+2*h;

                }
                printf("%f\n",2*sum1);
                sum=(4*sum+t+sum1*2)*h;

                printf("%f",sum/3);

}
float func(float x)
{
                return (1/(1+x*x));
}

