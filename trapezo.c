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
                float d=h;
                int k=h;
                t=func(a)+func(b);
                //printf("%f\n",t);
                while(k!=b)
                {
                                sum+=func(k);
                                k=k+h;
                                //printf("%f\n",sum);
                }
                sum=(2*sum+t)*d;

                printf("%f",sum/2);

}
float func(float x)
{
                return (1/(1+x*x));
}
