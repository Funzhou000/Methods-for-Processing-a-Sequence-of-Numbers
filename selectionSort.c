#include <stdio.h>

void inputNumbers(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


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
int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // 声明一个大小为n的数组

    inputNumbers(arr, n); // 调用函数将用户输入的数字存储到数组中
    selectionSort(arr,n);
    printArray(arr, n);   // 打印数组内容以验证输入

    return 0;
}
