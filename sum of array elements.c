#include <stdio.h>
int sum_of_elements(int *arr , int n)
{
   int i=0,sum=0;
   
   for(i=0; i<n ; i++)
   {
       sum = sum + arr[i];
   }
   
   return sum;
}
int main()
{
    int total = 0;
    int array[10] = {1,2,3,4,5,6,7,8,9};
    total = sum_of_elements(array,9);
	
    printf("\nThe sum of all array elements is : %d",total);
	
    return 0;
}



