#include<stdio.h>
#include<math.h>
void main()
{
                float a[3][1]={{1},{1},{1}};
                float c[3][1];
                float max;
                float b[3][3]={{2,-1,0},{-1,2,-1},{0,-1,2}};
                int t=1;
                int i,j;
                while(t++<18)
                {
                                for(i=0;i<3;i++)
                                {
                                                c[i][0]=a[0][0]*b[i][0] +a[1][0]*b[i][1] + a[2][0]*b[i][2];
                                }
                                max=fabs(c[0][0]);
                                for(i=1;i<3;i++)
                                {
                                      if(max<fabs(c[i][0])) max=fabs(c[i][0]);
                                }
                                for(i=0;i<3;i++)
                                {
                                                a[i][0]=(c[i][0])/(max);
                                }
                                for(i=0;i<3;i++)
                                printf("%f\n",a[i][0]);
                                printf("**************\n");
                }

for(i=0;i<3;i++)
printf("%f\n",a[i][0]);
printf("%f",max);



}
