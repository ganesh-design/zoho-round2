
#include <stdio.h>

int main()
{
  char a[10];
  int length=0;
  int mid;
  scanf("%s",&a);
  for(int i=0;a[i]!=NULL;i++)
  {
      length++;
  }
  mid=length/2;
  for(int i=1;i<=length;i++)
  {
      for(int k=1;k<=length-i;k++)
      {
          printf(" ");
      }
      int l=mid;
      for(int j=1;j<=i;j++)
      {
          printf("%c",a[l]);
          l++;
      }
      
      printf("\n");
  }
}
