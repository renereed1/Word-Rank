#include "WordRank.h"

#include <iostream>

WordRank::WordRank() 
{
}

WordRank::~WordRank() 
{
}

unsigned long long WordRank::rank(std::string word)
{   
    std::string copyOfWord = word;
    std::sort(copyOfWord.begin(), copyOfWord.end());
    
    std::map<char, int> positions;
    
    for (char& c : word)
    {
        if (positions.count(c)) {
            positions.at(c) = positions.at(c) + 1;
        } else {
            positions.insert(std::pair<char, int>(c, 1));
        }
    }
    
    unsigned long long rank = 1;
    
    for (int i = 0; i < word.size() - 1; i++)
    {
        char c = word.at(i);
        int sortPosition = copyOfWord.find(c);
        int wordLength = copyOfWord.size();
        rank += sortPosition * possibilities(wordLength, positions) / wordLength;
        copyOfWord.erase(copyOfWord.begin() + sortPosition);
        positions.at(c) = positions.at(c) - 1;
    }
    return rank;
}

unsigned long long WordRank::possibilities(int wordLength, std::map<char,int> positions) {
    unsigned long long possibilities = factorial(wordLength);
    for (auto& kv : positions)
    {
        possibilities /= factorial(kv.second);
    }
    return possibilities;
}

unsigned long long WordRank::factorial(int n)
{
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}