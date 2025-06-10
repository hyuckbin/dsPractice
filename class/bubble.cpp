#include <iostream>
using namespace std;
#define DEBUG 
void printArr(int *num , int n){
    for(int i=0; i<n; i++){
        cout<<"["<<num[i]<<"] ";
    }
    cout <<endl;
}
// void bubbleSort(int *arr , int n){
//     for(int j = 0 ; j<n-1 ; j++){
//         for(int i = 0 ; i<n-j-1 ; i++){
//             if(arr[i] > arr[i+1]) swap(arr[i],arr[i+1]); 
//         }
// #ifdef DEBUG
//     printArr(arr,n);
// #endif  
//     }
// }

void selectionSort(int *arr , int n){
    
    for(int i=1; i<n; i++){
        int mini = i;
        if(arr[mini] > arr[i]) mini =i;
        printArr(arr,n);
    }
}
void swap(int a, int b){
    int temp = b;
    b = a;
    a = temp;
}

int main(){
    int size = 5;
    int num[] = {64,25,12,22,11};
    printArr(num,size);
    selectionSort(num,size);
    return 0;
}