#include <stdio.h>
void rotate(int arr[],int d,int n)
{
  for(int i=0;i<d;i++)
  {
    int temp=arr[0];
    int j;
    for(j=0;j<n-1;j++)
    {
      arr[j]=arr[j+1];

    }
    arr[j]=temp;
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\n",arr[i]);
  }
}
int main(void) {
  int arr[]={1,2,3,4,5,6,7};
  int n= sizeof(arr)/sizeof(int);
  rotate(arr,5,n);
  
  return 0;
}
