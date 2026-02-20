
#include <iostream>

#include "SnailSort.h"

using namespace SnailSort;

int main()
{
    // Initializations
    size_t rowIndex = 0u;
    bool hasNextRow = false;

    // Alias to list for better readability
    const auto &list = ThreeByThree;

    // Always print the first row
    for (const auto val : list[0]) { std::cout << val << " "; };

    // Start main loop
    for (;;)
    {

        // Check if another row is available
        hasNextRow = (rowIndex < list.size() - 1); 

        // Print the last row
        if (rowIndex == list.size())
        {   
            // Traverse last row backwards until we reach first element
            for (size_t columnIndex = list[rowIndex].size(); columnIndex-- > 0;)
            {
                std::cout << list[rowIndex][columnIndex] << " ";
            }

            // Exit
            break;
        }
        else
        {
            // TODO: Check if has another row before printing, otherwise it prints the last row's last number, which we don't want
            // TODO: It should increment the rowIndex, then check if there's another row, then eventually print
            // Print every row's last number
            // ++rowIndex;
            // if (hasNextRow) std::cout << list[rowIndex][list[rowIndex].size() - 1] << " ";
            if (!hasNextRow) std::cout << "last row" << std::endl;
            // std::cout << "rowIndex = '" << rowIndex << "'" << std::endl;
        }
    }

    // Print new line
    std::cout << std::endl;

    return 0;
}