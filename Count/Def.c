#include <stdio.h>
int findLargest(int array[],int n);
int largest=array[0];
for(int i = 1; i< n; i++){
if (array[i]> largest){
largest = arr[i]
  }
}
return largest;
}
int main()
{
  int n;
  int array[n];
printf("Enter the length of the array:\n");
scanf("%d",&n);
printf("Enter the elements of an array:\n");
for( i=0 ; i<n ; i++){
scanf("%d",&array[i]);
  int largestNum = findLargest(array,n);
printf("The largest number in the array is %d",largestNum);
return 1;
}



