#include "person_observer.hpp"
#include <string_view>

void update(Person p, Person::PersonStates state ) 
    {
        if(state == Person::PersonStates::LastName)
        {
            std::cout << "Changes in the last name: " << p.m_last_name  << std::endl;
        }
    }


int main()
{

    Person p1{"ayman", "ashraf"};
    Person p2{"sherif", "monir"};

    Person::PersonObserver o1(update);
    Person::PersonObserver o2([](Person p, Person::PersonStates state )
    {
        if(state == Person::PersonStates::FirstName)
        {
            std::cout << "Changes in the first name: " << p.m_first_name << std::endl;
        }
    });

    p1.attach(o1);
    p2.attach(o2);

    p1.set_first("bezo");
    p1.set_last("tezo");

    p2.set_first("soso");
    p2.set_last("mozo");

    p1.detach(o1);
    p2.detach(o2);

    p1.set_first("sen");
    p1.set_last("men");

    p2.set_first("koko");
    p2.set_last("lolo");


    return 0;
}