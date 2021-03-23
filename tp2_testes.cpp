#include <gtest/gtest.h>
#include <complex>
#include <stack>
#include <queue>

TEST(TP2Test, Stack)
{
    std::stack<int> Stack;
    Stack.push(2);
    ASSERT_EQ(2, Stack.top());
    
}


TEST(TP2Test, Deque)
{
    std::deque<int> deque;
    deque.push_back(10);
    
    
     ASSERT_EQ(10, deque.back());
}   


TEST(TP2Test, Queue)
{
    std::queue<int> queue;
    queue.push(10);
    queue.push(20);

    ASSERT_EQ(10, queue.front());
}


TEST(TP2Test, Sort)
{
    std::array<int,10> s = {5,7,4,2,8,6,1,9,0,3};
    std::array<int,10> aux = {0,1,2,3,4,5,6,7,8,9};
    std::sort(s.begin(), s.end());
    
    for(int i = 0; i < 10; i++)
    {
        ASSERT_EQ(s[i], aux[i]);
    }
    
}

TEST(TP2Test, Merge)
{
    int first[] = {1, 2, 3, 4};
    int second[] = {5, 6, 7, 8};
    int merged[8];
    
    std::merge(first, first + 4, second, second + 4, merged);
    int expected_output[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for(int i = 0; i < 8; i++)
    {
        ASSERT_EQ(expected_output[i], merged[i]);
    }
}


TEST(TP2Test, Swap)
{
    int x = 5, y = 10;
    std::swap(x, y);
    ASSERT_EQ(10, x);
    ASSERT_EQ(5, y);
    
}


TEST(TP2Test, Complex)
{ 
    std::complex<double> Complex (5.0, 12.0);

    ASSERT_EQ(5.0, std::real(Complex));
    ASSERT_EQ(12.0, std::imag(Complex));
    ASSERT_EQ(13.0, std::abs(Complex));
}


TEST(TP2Test, String)
{ 
    std::string str ("Hello, world!");

    ASSERT_EQ(0, str.find("H"));

}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
