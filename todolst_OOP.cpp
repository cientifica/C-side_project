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
int main()
{
    toDoList Person1("Lindean", time(0));
    Person1.add("eat");
    Person1.add("sleep");
    Person1.add("C++ Programming");
    Person1.display();
    Person1.remove("sleep");
    Person1.display();
}