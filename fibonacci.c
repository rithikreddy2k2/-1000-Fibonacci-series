#include<stdio.h>


void add(int a1[],int a2[],int a[])
{
    int c=0,s=0;
    for(int i=0;i<250;i++)
    {
        int x=a1[i]+a2[i]+c;
        s=x%10;
        c=x/10;
        a[i]=s;
    }
}


int main()
{
    int n; 
    scanf("%d",&n);
   
    int f[500],f1[500],f2[500];


    for(int i=0;i<500;i++) f[i]=0;
    f[0]=1;
    for(int i=0;i<500;i++) f1[i]=0;
    f1[0]=1;
    for(int i=0;i<500;i++) f2[i]=0;
    f2[0]=1;
    
    for(int i=3;i<=n;i++)
    {
        for(int i=0;i<500;i++)
           f2[i]=f1[i];
        for(int i=0;i<500;i++)
           f1[i]=f[i];
        
        add(f1,f2,f);
    }
    
    for(int i=210;i>=0;i--)
      printf("%d",f[i]);
    
}
