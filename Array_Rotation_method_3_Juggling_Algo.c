#include <stdio.h>
int min(int d,int n)
{
  return (d<n)?d:n;
}
int gcd(int d,int n)
{
  int h;
  int mini=min(d,n);
  printf("%d\n",mini);
  for(int i=2;i<=mini;i++)
  {
    if((d%i==0)&&(n%i==0))
    {
      h=i;
    }
  }
  return h;
}
void rotate(int arr[],int d,int n)
{
  int set=gcd(d,n);
  printf("%d\n",set);
  int m=n/set;
  for(int i=0;i<set;i++)
  {
     int k=i;
     int temp=arr[i];
      for(int j=0;j<m-1;j++)
      {
        arr[k]=arr[k+set];
        k=k+set;
      }
      arr[k]=temp;
  }
  for(int l=0;l<n;l++)
  {
    printf("%d\n",arr[l]);
  }

}

int main(void) {
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
  int n=sizeof(arr)/sizeof(int);
  rotate(arr,4,n);
  return 0;
}
