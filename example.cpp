#include "sorting.h"
#include <vector>
#include <iostream>

int main() {
    std::cout << "Program started\n";
    std::vector<int> input { 1, 234, 64, 2234, 562, 45216, 6143, 13, 6341, 65781, 7813, 1346, 5752, 13643, 67893, 19032 };
    std::cout << "Init\n";
    Sorting::RadixSort radixSort(input);
    std::cout << "Sorting...\n";
    std::vector<int> sorted { radixSort.sort() };
    std::cout << "size: " << sorted.size() << std::endl;
    for (int& entry : sorted)
    {
        std::cout << entry << " ";
    }
    std::cout << std::endl;
    std::cout << "Program exited\n";
    return 0;
}
