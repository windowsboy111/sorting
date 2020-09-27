#ifndef sorting_h
#define sorting_h
#include <vector>
#include <string>

namespace Sorting
{
    class RadixSort
    {
    public:
        int base[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        std::vector<int> input;
        RadixSort() = default;
        RadixSort(std::vector<int> input);
        std::vector<int> sort();
    };
} // namespace Sorting

#endif
