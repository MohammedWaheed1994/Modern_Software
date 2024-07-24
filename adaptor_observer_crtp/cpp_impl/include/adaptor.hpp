#pragma once

#include <deque>


namespace user
{

template< typename T,
    typename Container = std::deque<T>>
class Stack
{
public:
    void push(T element)
    {
        m_container.push_front(element);
    }

    void pop(void)
    {
        m_container.pop_front();
    }

    T& front()
    {
        return m_container.front();
    }

    std::size_t size()
    {
        return m_container.size();
    }

private:
    Container m_container;
 
};

}