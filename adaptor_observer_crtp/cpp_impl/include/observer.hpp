#pragma once
#include <functional>


template <typename Subject, typename State>
class Observer
{
public:
   
    using OnUpdate = std::function<void(Subject, State)>;
    Observer(OnUpdate func):m_on_update{std::move(func)}
    {
    }

    void update(Subject subject, State state)
    {
        m_on_update(subject, state);
    }
private:
    OnUpdate m_on_update;
};