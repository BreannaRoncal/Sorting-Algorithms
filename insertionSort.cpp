#include <iostream>
#include <array>

int main(){
    std::array<int, 10> toSort = {4, 8, 9, 1, 2, 7, 8, 3, 4, 1};
    
    int j = 0;
    int toSwap;
    for (int i = 1; i < toSort.size(); i++){
        toSwap = toSort[i];
        j = i - 1;
        while (toSwap < toSort[j] && j >= 0){
            toSort[j + 1] = toSort[j];
            j--;
        }
        toSort[j + 1] = toSwap;
    }

    for (int i = 0; i < toSort.size(); i++){
        std::cout << toSort[i] << std::endl;
    }

    return 0;
}

//Time: O(n^2)
//Space: O(n)
