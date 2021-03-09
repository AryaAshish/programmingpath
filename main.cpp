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

int suffixSum(int array[], int n, int suffixsum[],int suffixmax[])
{
   suffixsum[n] = array[n];
   suffixmax[n] = array[n];
for(int i=n-1;i>=0;i--){
suffixsum[i]= array[i]+suffixsum[i+1];
if(suffixmax[i+1]<array[i]){
  suffixmax[i]=array[i];
}else{
    suffixmax[i]=suffixmax[i+1];
}
}
return suffixmax[n];
}

int main() {

 int arr[] = { 10, 4, 16, 20,12,2,1,5,7,3,4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixdum[n];
    int prefixMax[n];
 
    suffixSum(arr, n, prefixdum,prefixMax);
    for (int i = 0; i < n; i++)
        std::cout << prefixMax[i] << " ";
  
}