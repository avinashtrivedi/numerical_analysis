#include<stdio.h>
#include<math.h>
float f(float);
float func(float);
int i=0;
void  main()
{
                float a,b;
                float t;
                int p,q;
         while(i>=0)
                {
                                if(func(i)<0){a=i;i++;p=1;if(q==1)break;}
                                else {b=i;i++;q=1;if(p==1) break;}
                }
                printf("%f %f\n",a,b);
                do
                {
                                t=f(b);
                                printf("%f\n",t);
                                if(b==t)break;
                                b=t;


                }while(1);

                printf("%f",f(a));
}
float func(float x)
{
                return (cos(x)-3*x+1);

}
float f(float x)
{
                return ((cos(x)+1)/3);
}
