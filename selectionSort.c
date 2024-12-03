#include<stdio.h>
void selectionSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){//查找i后面的数字是否有比mini_index所指向的数字小；
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }

}

