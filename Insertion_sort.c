// Program Based On Insertion Sort Technique In C
#include<stdio.h>
void main()
{
  int arr[50],n,i,j,key=0;		    	//Variable Declaration
  printf("Enter, how many elements do you want in array : \t");
  scanf("%d",&n);					          // Input For Size Of Array
  printf("Enter the elements of array : \t");
//-------------------------------------------------------------------
  for(i=0;i<n;i++)		
  {
    scanf("%d",&arr[i]);	      	//Input Array Elements
  }
//-------------------------------------------------------------------
  for(j=1;j<n;j++)
  {
    key=arr[j];
    i=j-1;
    while(i>=0 && arr[i]>key)
    {									                //Logic
      arr[i+1]=arr[i];
      i=i-1;
    }
    arr[i+1]=key;
  }
//---------------------------------------------------------------------
  for(i=0;i<n;i++)
  {
    printf("%d\t",arr[i]);			    //Output Of Sorted Array
  }
//-----------------------------------------------------------------------
}
