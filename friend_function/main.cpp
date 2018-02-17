#include <iostream>
using namespace std;

class parent;

class child
{
    public:
    void who_is_parent(parent &);
};

class parent
{
    private:
    string name;
    
    public:
    parent()
    {
        name = "Sahil";
    }
    friend void child::who_is_parent(parent &obj);
};

void child::who_is_parent(parent &obj)
 {
    cout<<"Your Parent is "<<obj.name<<endl;   
 }

int main() {
    parent p;
    child c;
    c.who_is_parent(p);
	return 0;
}
