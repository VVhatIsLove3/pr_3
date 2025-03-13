#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n=5;
 float summa;
 //scanf("%d",&n);
 int *a=malloc(n*sizeof(int));
 /*for (int i=0; i<n; i++)
  printf("%d\n", a[i]);*/
 a[0]=-4;
 a[1]=-23;
 a[2]=30;
 a[3]=-10;
 a[4]=-4;
 int k=0;
 for(int i=0; i<n; i++)
 {
  if(a[i]<0)
   k++;
 }
 int *c=malloc(k*sizeof(int));
 int j=0;
 for(int  i=0; i<n; i++)
 {
  if(a[i]<0)
  {
   c[j]=i;
   j++;
  }
 }
 for(int h=0; h<k; h++)
  printf("%d\n",c[h]);
 
 int *b=malloc(k*sizeof(int));
 printf("%s\n"," ");
 int j1=0;
 for (int i=0; i<n; i++)
 {
  if(a[i]<0)
  {
   b[j1]=a[i];
   j1++;
  }
 }
 for(int i=0; i<k;i++)
 {
  printf("%d\n",b[i]);
  summa+=b[i];
 }
 printf("%f\n",summa/k);
 free(a);
 free(b);
 free(c);

}

