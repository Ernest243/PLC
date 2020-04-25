#include<iostream>
#include<ctime>
using namespace std;
#define MAX 100

void fun1()
{
   static int a[MAX];
}
void fun2()
{
   int a[MAX];
}
void fun3()
{
   int *p=new int[MAX];
}

int main()
{
   int i,n=1000000;
   double total_time;
   clock_t start, end;
   start=clock();
   for(i=0;i<n;i++)
   {
       fun1();
   }
   end=clock();
   total_time=((double) (end - start));
   cout<<"Total time for static arry declaration="<<total_time<<" clock cycles"<<endl;
  
   start=clock();
   for(i=0;i<n;i++)
   {
       fun2();
   }
   end=clock();
   total_time=((double) (end - start));
   cout<<"Total time for stack arry declaration="<<total_time<<" clock cycles"<<endl;
  
   start=clock();
   for(i=0;i<n;i++)
   {
       fun3();
   }
   end=clock();
   total_time=((double) (end - start));
   cout<<"Total time for heap arry declaration="<<total_time<<" clock cycles"<<endl;
}
