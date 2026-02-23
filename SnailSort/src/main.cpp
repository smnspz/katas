
#include <iostream>
#include <iterator>
#include <stdexcept>

#include "SnailSort.h"

using namespace SnailSort;

std::vector<int> SnailSort::Sort(const std::vector<std::vector<int>> &list, const size_t totalSize)
{
    if (list.empty() || list.size() <= 2)
    {
        throw std::invalid_argument("You neel to provide a valid bidimensional list");
    }

    // Initializations
    std::vector<int> sortedList;
    size_t rowIndex = 1u;

    // Always keep the first row
    std::move(list[0].begin(), list[0].end(), std::back_inserter(sortedList));

    // For each row, except the last one, move the last element
    for (; rowIndex < list.size() - 1; ++rowIndex)
    {
        sortedList.push_back(std::move(list[rowIndex][list[rowIndex].size() - 1]));
    }

    // Move the last row backwards
    std::move(list[list.size() - 1].rbegin(), list[list.size() - 1].rend(), std::back_inserter(sortedList));

    // For each row, except for the first and last, move the first element
    for (rowIndex = list.size() - 1; rowIndex > 0; --rowIndex)
    {
        sortedList.push_back(std::move(list[rowIndex][0]));
    }

    // Now move to the right, leaving the already moved elements
    for (size_t columnIndex = 1u; columnIndex < list[1].size() - 1; ++columnIndex)
    {
        sortedList.push_back(std::move(list[1][columnIndex]));
    }

    // Return the sorted list
    return sortedList;
}

int main()
{
    const std::vector<std::vector<int>> list = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // const std::vector<std::vector<int>> list = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    const size_t totalSize = list.size() * list[0].size();

    const auto &result = SnailSort::Sort(list, totalSize);

    for (const int el : result)
    {
        std::cout << el << ", ";
    }

    return 0;
}
