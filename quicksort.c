#include <stdio.h>
#include <stdlib.h>

void  quicksort(int a[], int low, int high, int size);
int partition(int a[],int low, int high);
void swap(int *, int *);

int main(){
    

    int n;
    printf("Enter length of array \n");
    scanf("%d",&n);
    int nums[n];
    printf("Enter %d numbers\n",n);
    int i = 0;
    while(i < n){

        scanf("%d",&nums[i]);
        i++;
    }
    printf("quicking my sort\n");
    quicksort(nums,0,n-1,n);
    for(int i = 0 ; i < n ; i++){
        printf("%d ",nums[i]);

    }
    return 0;

}

void printArr(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}

void swap(int * a, int * b){
    printf("Swapping %d and %d \n",*a,*b);
    int temp = *b;
    *b = *a;
    *a = temp;
}

void quicksort(int a[], int low, int high, int size){
    if(low < high){
        printArr(a,size);
        int part = partition(a,low,high);
        quicksort(a, low, part-1,size);
        quicksort(a,part+1,high,size);
    }
}
int partition(int array[], int low, int high) {
  
  int pivot = array[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      i++;
      
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);
  
  return (i + 1);
}
