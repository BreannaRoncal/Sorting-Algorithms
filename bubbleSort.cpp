#include <iostream>
#include <vector>

int main(){
    std::vector<int> toSort = {3, 9, 7, 10, 2, 0, 6, 1};
    bool isSorted = false;
    
    while (!isSorted){
        isSorted = true;
        for (int i = 0; i < toSort.size() - 1; i++){
            if (toSort[i] > toSort[i + 1]){
                std::swap(toSort[i], toSort[i +1]);
                isSorted = false;
            }
        }
            
    }
    for (int i = 0; i < toSort.size(); i++){
        std::cout << toSort[i] << "\n";
    }

    return 0;
}

//Time: O(n^2)
//Space: O(1)
