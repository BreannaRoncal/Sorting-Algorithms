#include <iostream>

void heapify(int arr[], int arrSize, int i){
    int maxElm = i;
    int lhs = 2 * i + 1;
    int rhs = 2 * i + 2;

    if (arr[rhs] > arr[maxElm] && rhs < arrSize){
        maxElm = rhs;
    }
    if (arr[lhs] > arr[maxElm] && lhs < arrSize){
        maxElm = lhs;
    }
    if (maxElm != i){
        std::swap(arr[i], arr[maxElm]);
        heapify(arr, arrSize, maxElm);
    }
}

void heapSort(int arr[], int arrSize){
    //build max heap
    for (int i = arrSize / 2; i >= 0; i--){
        //heapify
        heapify(arr, arrSize, i);
    }
    
    
    for (int i = arrSize - 1; i >= 0; i--){
        //place last element at the top
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
    int toSort[] = {3, 10, 0, 17, 7, 4, 5, 1, -2, 7, 2};
    int toSortSize = sizeof(toSort) / sizeof(toSort[0]);

    std::cout << "Before heapSort:" << std::endl;
    for (int i = 0; i < toSortSize; i++){
        std::cout << toSort[i] << std::endl;
    }
    
    heapSort(toSort, toSortSize);

    std::cout << "After heapSort:" << std::endl;
    for (int i = 0; i < toSortSize; i++){
        std::cout << toSort[i] << std::endl;
    }



    return 0;
}
