#include "pch.h"

int main()
{
    std::fstream newfile;
    // Open file to perform read action
    newfile.open("/Users/ivan/Developer/AdventOfCode2022/input/day1_input.txt", std::ios::in);
    // Check if the file is opened
    if (newfile.is_open())
    {
        std::string tp;
        // Read dagta from file object
        while (getline(newfile, tp))
        {
            std::cout << tp << std::endl; // Print the data of the string
        }
        newfile.close(); // Close the file object
    }
}

/*
1. 
*/
