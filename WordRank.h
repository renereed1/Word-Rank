#ifndef WORDRANK_H
#define	WORDRANK_H

#include <string>
#include <map>

class WordRank {
public:
    WordRank(std::string word);
    virtual ~WordRank();
    
    unsigned long long rank();
    std::string word() const;
    
private:
    unsigned long long factorial(int n);
    unsigned long long possibilities(int wordLength, std::map<char,int> positions);
    
private:
    WordRank();
    std::string _word;
};

#endif
