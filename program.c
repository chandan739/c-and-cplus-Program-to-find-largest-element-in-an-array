#include<stdio.h>
int main()
{
  long int n,i;
  scanf("%li",&n);
  int a[n];
  int max=a[0];

  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  if(a[i]>max)// compare every element with current max
  max=a[i];
}
printf("%d",max);
return 0;
}
