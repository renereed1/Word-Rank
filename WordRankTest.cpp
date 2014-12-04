#include "gtest/gtest.h"
#include "WordRank.h"

class WordRankTest : public ::testing::Test
{
public:
    virtual void SetUp()
    {
        
    }
    
    virtual void TearDown()
    {
        
    }
};

TEST_F(WordRankTest, calculate_rank_of_ABAB)
{
    WordRank word;
    ASSERT_EQ(2, word.rank("ABAB"));
}

TEST_F(WordRankTest, calculate_rank_of_AAAB)
{
    WordRank word;
    ASSERT_EQ(1, word.rank("AAAB"));
}

TEST_F(WordRankTest, calculate_rank_of_BAAA)
{
    WordRank word;
    ASSERT_EQ(4, word.rank("BAAA"));
}

TEST_F(WordRankTest, calculate_rank_of_QUESTION)
{
    WordRank word;
    ASSERT_EQ(24572, word.rank("QUESTION"));
}

TEST_F(WordRankTest, calculate_rank_of_BOOKKEEPER)
{
    WordRank word;
    ASSERT_EQ(10743, word.rank("BOOKKEEPER"));
}

