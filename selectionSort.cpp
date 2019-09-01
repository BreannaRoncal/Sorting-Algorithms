#include <iostream>
#include <vector>

int main(){
    std::vector<int> toSort = {7, 4, 1, 9, 10, 2, 6, 5, 5, 1};
    int min;
    
    std::cout << "Before selection sort: \n";
    for (int i = 0; i < toSort.size(); i++){
        std::cout << toSort[i] << "\n";
    }

    for (int i = 0; i < toSort.size() - 1; i++){
        min = i; 
        for (int j = i + 1; j < toSort.size(); j++){
            if (toSort[j] < toSort[min]){
                min = j;
            }
        }
        std::swap(toSort[i], toSort[min]);
    }

    std::cout << "After selection sort: \n";
    for (int i = 0; i < toSort.size(); i++){
        std::cout << toSort[i] << "\n";
    }

}

//Time: O(n^2)
//Space: O(n)
