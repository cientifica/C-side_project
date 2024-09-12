#include<iostream>
#include<list>
#include<ctime>
using namespace std;

class toDoList
{
    public:
    string owner_name;
    time_t timestamp;
    list<string> lst;
    toDoList(string name, time_t time)
    {
        this->owner_name = name;
        this->timestamp = time;
    }
    void add(string thing)
    {
        lst.push_back(thing);
    }
    void remove(string thing)
    {
        lst.remove(thing);
    }
    void display()
    {
        cout << "To-Do List of " << owner_name << " created at " << ctime(&timestamp);
        for (auto i=lst.begin(); i!=lst.end(); i++)
        {
            cout << *i << endl;
        }
    }
};
class toBuyLst: public toDoList
{
    public:
    toBuyLst(string name, time_t time): toDoList(name, time)
    {
        this->owner_name = name;
        this->timestamp = time;
    }
    void display()
    {
        cout << "To-Buy List of " << owner_name << " created at " << ctime(&timestamp);
        for (auto i=lst.begin(); i!=lst.end(); i++)
        {
            cout << *i << endl;
        }
    }
};
int main()
{
    toDoList Person1("Lindean", time(0));
    Person1.add("eat");
    Person1.add("sleep");
    Person1.add("C++ Programming");
    Person1.display();
    Person1.remove("sleep");
    Person1.display();

    toBuyLst Person2("Haisley", time(0));
    Person2.add("milk");
    Person2.add("bread");
    Person2.add("water");
    Person2.display();
    Person2.remove("milk");
    Person2.display();
}