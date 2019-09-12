//Last element as pivot

#include <iostream>

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arrayToSort[], int startIndex, int endIndex){
    int pivotPT = arrayToSort[endIndex];
    int lessThanPivotPT = startIndex - 1;

    for (int i = startIndex; i <= endIndex - 1; i++){
        if (arrayToSort[i] < pivotPT){
            lessThanPivotPT++;
            swap(&arrayToSort[lessThanPivotPT], &arrayToSort[i]);
        }
    }

    swap(&arrayToSort[lessThanPivotPT + 1], &arrayToSort[endIndex]);
    return lessThanPivotPT + 1;
    
}

void quickSort(int arrayToSort[], int startIndex, int endIndex){
    if (endIndex > startIndex){
        int partitionIndex = partition(arrayToSort, startIndex, endIndex);
        quickSort(arrayToSort, startIndex, partitionIndex - 1);
        quickSort(arrayToSort, partitionIndex + 1, endIndex);
    }
}


int main(){
    int toSort[] = {3, 10, 0, 17, 7, 4, 5, 1, -2, 7, 2};
    int toSortSize = sizeof(toSort) / sizeof(toSort[0]);

    std::cout << "Before quickSort: " << std::endl;
    for (int i = 0; i <toSortSize; i++){
        std::cout << toSort[i] << std::endl;
    }
    
    quickSort(toSort, 0, toSortSize - 1);
    
    std::cout << "After quickSort: " << std::endl;
    for (int i = 0; i <toSortSize; i++){
        std::cout << toSort[i] << std::endl;
    }
    return 0;
}

//Time: O(nLogn)
//Space: O(n)
