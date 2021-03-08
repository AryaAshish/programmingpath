#include <iostream>
#include <stdio.h>

int prefixSum(int array[], int n, int prefixsum[],int prefixmax[])
{
   prefixsum[0] = array[0];
   prefixmax[0] = array[0];
for(int i=1;i<n;i++){
prefixsum[i]= array[i]+prefixsum[i-1];
if(prefixmax[i-1]<array[i]){
  prefixmax[i]=array[i];
}else{
    prefixmax[i]=prefixmax[i-1];
}
}
return prefixmax[n];
}

int main() {

 int arr[] = { 10, 4, 16, 20,12,23,1,5,70,3,4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixdum[n];
    int prefixMax[n];
 
    prefixSum(arr, n, prefixdum,prefixMax);
    for (int i = 0; i < n; i++)
        std::cout << prefixMax[i] << " ";
  
}