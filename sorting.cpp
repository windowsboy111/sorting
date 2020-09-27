#include <iostream>
#include <string>
#include "sorting.h"
#include <vector>
#include <cmath>

Sorting::RadixSort::RadixSort(std::vector<int> input) {
    this->input = input;
};

std::vector<int> Sorting::RadixSort::sort() {
    int num_digits { 0 };
    for (int& num : input) // get max digit
    {
        std::string s_num { std::to_string(num) };
        num_digits = std::max((int) s_num.size(), num_digits);
    }
    std::vector<int> result = this->input;
    for (int i_d { 0 }; i_d < num_digits; ++i_d) { // for every digit
        std::vector<int> new_result;
        for (int& i_b : this->base) { // for every possible value in base
            char c_b { (char) i_b };
            for (int& entry : result) {
                std::string s_entry = std::to_string(entry);
                // prevention for the size of string of entry is smaller than digit
                if (s_entry.size() <= i_d) {
                    if (c_b == '0') {
                        new_result.emplace_back(entry);
                    }
                    continue;
                }
                if ((char) s_entry.at(s_entry.size() - i_d - 1) == c_b) {
                    new_result.emplace_back(entry);
                }
            }
        }
        result = new_result;
    }
    return result;
}
