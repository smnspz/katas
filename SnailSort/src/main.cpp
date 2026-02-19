
#include <iostream>

#include "SnailSort.h"

using namespace SnailSort;

int main()
{
    // Initializations
    size_t columnIndex, rowIndex;
    bool hasNext = false;

    // Alias to list for better readability
    const auto &list = ThreeByThree;

    for (columnIndex = 0u; columnIndex < list.size(); ++columnIndex)
    {
        // Check if it's the last row
        hasNext = (columnIndex < list.size() - 1);

        if (!hasNext)
        {
            for (rowIndex = list[columnIndex].size() - 1; rowIndex > 0; --rowIndex)
            {
                std::cout << list[columnIndex][rowIndex];
            }
        }
        else
        {
            for (rowIndex = 0u; rowIndex < list[columnIndex].size(); ++rowIndex)
            {
                // Once it reaches end of first row, jump to last element of second row
                std::cout << list[columnIndex][rowIndex];
            }
        }

        // Print new line
        std::cout << std::endl;
    }

    return 0;
}