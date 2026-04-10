#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter no. of Elements:";
   cin>>n;
   int a[n];
   cout<<"Enter Elements:\n";
   for (int i=0;i<n;i++)
      cin >> a[i];
   for (int i=0;i<n-1;i++)
   {
      int com=1;
      for (int j=0;j<n-i-1;j++)
      {
         int temp;
         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            com=0;
         }
      }
      if (com!=0)
         break;
   }
   cout<<"Sorted Array:\n";
   for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
   cout<<"\n";
   return 0;
}