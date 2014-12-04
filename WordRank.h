#ifndef WORDRANK_H
#define	WORDRANK_H

#include <string>
#include <map>

class WordRank {
public:
    WordRank();
    virtual ~WordRank();
    
    unsigned long long rank(std::string word);
    
private:
    unsigned long long factorial(int n);
    unsigned long long possibilities(int wordLength, std::map<char,int> positions);
};

#endif
