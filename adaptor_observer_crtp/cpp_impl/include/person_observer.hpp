#include "observer.hpp"
#include <set>
#include <string>
#include <iostream>

class Person
{
public:
    Person(std::string first, std::string last):
    m_first_name{first},
    m_last_name{last}
    {
    }

    enum class PersonStates{
        FirstName,
        LastName,
    };

    using PersonObserver = Observer<Person, PersonStates>;

    bool attach(PersonObserver& observer)
    {
        auto [it, ret] = m_observers.insert(&observer);
        return ret;
    }

    bool detach(PersonObserver& observer)
    {
        return (m_observers.erase(&observer));
    }

    void notify(PersonStates state)
    {
        for(auto& observer: m_observers)
        {
            observer->update(*this, state);
        }
    }


    void set_first(std::string name)
    {
        m_first_name = name;
        notify(PersonStates::FirstName);
    }

    void set_last(std::string name)
    {
        m_last_name = name;
        notify(PersonStates::LastName);
    }
    std::string m_first_name;
    std::string m_last_name;

private:

    std::set<PersonObserver*> m_observers;
};


