/*
 *Merge Sort
 */
 
#include <iostream>

void merge(int mergeArray[], int lhs, int middle, int rhs){
    int leftSize = middle - lhs + 1;
    int rightSize = rhs - middle;
    int leftArray[leftSize];
    int rightArray[rightSize];

    for (int i = 0; i < leftSize; i++){
        leftArray[i] = mergeArray[lhs + i];
    }

    for (int i = 0; i < rightSize; i++){
        rightArray[i] = mergeArray[middle + i + 1];
    }

    int lhsIndex = 0;
    int rhsIndex = 0;
    int mergedIndex = lhs;

    while (lhsIndex < leftSize && rhsIndex < rightSize){
        if (leftArray[lhsIndex] <= rightArray[rhsIndex]){
            mergeArray[mergedIndex] = leftArray[lhsIndex];
            lhsIndex++;
        } else {
            mergeArray[mergedIndex] = rightArray[rhsIndex];
            rhsIndex++;
        }
        mergedIndex++;
    }
    
    while (lhsIndex < leftSize){
        mergeArray[mergedIndex] = leftArray[lhsIndex];
        lhsIndex++;
        mergedIndex++;
    }
    while (rhsIndex < rightSize){
        mergeArray[mergedIndex] = rightArray[rhsIndex];
        rhsIndex++;
        mergedIndex++;
    }
}

void mergeSort(int arrayToSort[], int leftIndex, int rightIndex){
    if (rightIndex > leftIndex){
        int middle = leftIndex + (rightIndex - leftIndex) / 2;

        mergeSort(arrayToSort, leftIndex, middle);
        mergeSort(arrayToSort, middle + 1, rightIndex);

        merge(arrayToSort, leftIndex, middle, rightIndex);
    }
}

int main(){
    int toSort[] = {3, 10, 0, 17, 7, 4, 5, 1, -2, 7, 2};
    int toSortSize = sizeof(toSort) / sizeof(toSort[0]);
    std::cout << "toSortSize: " << toSortSize << std::endl;
    mergeSort(toSort, 0, toSortSize - 1);
    
    std::cout << "after merge sort: \n";
    for (int i = 0; i < toSortSize; i++){
        std::cout << toSort[i] << std::endl;
    }
    return 0;
}

//Time: Theta(nLogn)
//Space: O(n)
