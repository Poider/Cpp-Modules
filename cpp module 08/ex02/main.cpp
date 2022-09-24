#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top of stack: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "stack size: "<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout <<"stack with iterators: " << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    MutantStack<int> lstack;
    lstack.push(1337);
    lstack.push(96);
    lstack.push(69);
    // MutantStack<int>::iterator l_it = mstack.begin();
    // MutantStack<int>::iterator l_ite = mstack.end();
    mstack.swap(lstack);
    it = mstack.begin();
    ite = mstack.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }






    // std::list<int> m_list;
    // m_list.push_back(5);
    // m_list.push_back(17);
    // // std::cout << "top of stack: " << m_list.top() << std::endl;
    // m_list.pop_back();
    // std::cout << "stack size: "<< m_list.size() << std::endl;
    // m_list.push_back(3);
    // m_list.push_back(5);
    // m_list.push_back(737);

    // m_list.push_back(0);
    // std::list<int>::iterator it_list = m_list.begin();
    // std::list<int>::iterator ite_list = m_list.end();
    // ++it_list;
    // --it_list;
    // std::cout <<"stack with iterators: " << std::endl;
    // while (it_list != ite_list)
    // {
    // std::cout << *it_list << std::endl;
    // ++it_list;
    // }


    
}