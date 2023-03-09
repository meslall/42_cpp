#include <vector>
#include<iostream>
#include <iterator>


int main()
{
    vector<int> a={13,37,42,1337};

    vector<int> ::iterator ptr;

    ptr = vector.find(1337);
    std::cout << *ptr << std::endl;
    return 0 ;
}