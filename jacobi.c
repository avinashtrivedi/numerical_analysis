#include<stdio.h>
void func(float,float,float);
void main()
{
           func(0,0,0);
}
void func(float x,float y,float z)
{
                float x1,y1,z1;
                x1=(11.19-y+z)/10;
                y1=(28.08-x-z)/10;
                z1=(35.61+x-y)/10;
                if(x==x1&&y==y1&&z==z1)
                printf("%.2f %.2f %.2f",x,y,z);
                else
                {
                                x=x1;y=y1;z=z1;
                                func(x1,y1,z1);
                }
}
