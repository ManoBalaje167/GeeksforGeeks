#include <stdio.h>
void rotation(int arr[],int d,int n)
{
  int temp[d];
  for(int i=0;i<d;i++)
  {
      temp[i]=arr[i];
  }
  for(int i=0;i<n-d;i++)
  {
    arr[i]=arr[i+d];
  }
  int j=0;
  for(int i=n-d;i<n;i++)
  {
    arr[i]=temp[j++];
  }
  printf("The Arrays are \n");
  for(int i=0;i<n;i++)
  {
    printf("%d\n",arr[i]);
  }
}

int main(void) {
  int arr[]={1,2,3,4,5,6,7};
  int n=sizeof(arr)/sizeof(int);
  printf("%d\n",n);
  rotation(arr, 4, n);
  return 0;
}

// checking fork