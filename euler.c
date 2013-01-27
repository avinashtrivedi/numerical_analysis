#include<stdio.h>
int func(float,float);
int n;
float h;
void main()
{
                printf("enter initial x,y and n and final x\n");
                float a,b,c;
                //int n;
               // float h;
                scanf("%f %f %d %f",&a,&b,&n,&c);
                h=c/n;
                printf("%f\n",h);
                func(a,b);


}
int func(float x,float y)
{

                                y=y+h*((y-x)/(y+x));
                                printf("%f\n",y);
                                x=x+h;
                                n--;
                                if(n==0) {printf("%f",y);return 0;}
                                func(x,y);

}

