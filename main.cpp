#include <iostream>

#include "WordRank.h"

int main(int argc, char** argv)
{   
    if (argc != 2) {
        std::cout << std::endl << "Please supply the word to be ranked." << std::endl << std::endl << "Example: ./wordrank EPOCRATES" << std::endl << std::endl;
        return 0;
    }
    
    WordRank word;
    std::cout << word.rank(argv[1]) << std::endl;
    
    return 0;
}