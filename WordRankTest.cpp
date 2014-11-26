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
    WordRank word("ABAB");
    ASSERT_EQ(2, word.rank());
}

TEST_F(WordRankTest, calculate_rank_of_AAAB)
{
    WordRank word("AAAB");
    ASSERT_EQ(1, word.rank());
}

TEST_F(WordRankTest, calculate_rank_of_BAAA)
{
    WordRank word("BAAA");
    ASSERT_EQ(4, word.rank());
}

TEST_F(WordRankTest, calculate_rank_of_QUESTION)
{
    WordRank word("QUESTION");
    ASSERT_EQ(24572, word.rank());
}

TEST_F(WordRankTest, calculate_rank_of_BOOKKEEPER)
{
    WordRank word("BOOKKEEPER");
    ASSERT_EQ(10743, word.rank());
}

TEST_F(WordRankTest, word_is_EPOCRATES)
{
    WordRank word("EPOCRATES");
    ASSERT_EQ("EPOCRATES", word.word());
}

