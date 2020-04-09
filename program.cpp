#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cin>>n;
  int a[n];
  int max=a[0];
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  if(a[i]>max)// compare every element with current max
  max=a[i];
}
  cout<<max<<endl;
  return 0;
}
