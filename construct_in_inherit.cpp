//program to show how constructors work while inheriting classes
#include<iostream>
using namespace std;
class base{
    int x;
    public:
    //default constructor of base class.
    base()
    {
        cout<<"in default constructor of base class"<<endl;
    }
    //parameterized constructor;
    base(int a)
    {
        cout<<"in parameterized constructor of base class"<<endl;
    }
};
class derived:public base{
    int y;
    public:
    derived()
    {
        y=1;
        cout<<"in default constructor of derived class\n";
    }
    // derived(int x)
    // {
    //     cout<<"in parameterized constructor of derived class"<<endl;
    // }
    //by doing this parameterized constructor of base class is called rather than default constructor;
    derived(int x):base(y)
    {
         cout<<"in parameterized constructor of derived class"<<endl;

    }
};
int main()
{
    //making object of derived class
    //and now first default constructor of base class is called and then default constructor of derived class;
    //in hirarchial order
    derived obj;
    //if we make object like this then first parameterized constructor of derived class is called and then
    //default constructor of base class and executed in reverse order;
    derived obj2(29);
    /*but if we want to call parameterized constructor of base class then we can do it as*/
    
    
}