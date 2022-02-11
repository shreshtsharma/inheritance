#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    protected:
    int b;
    private:
    int e;
    public:
    A()
    {
        a=89;
        b=80;
    }
};
//inheriting class A to class B publicaly
class B :public A
{
    public:
    int c;
    B()
    {
        a=56;
        b=67;
        c=90;
    }
};
class C:protected A
{
    public:
    int d;
    C()
    {
        a=12;
        b=78;
        d=23;
        cout<<a<<" "<<b<<" "<<d<<endl;
    }
};
class D :private A
{
    public:
    D()
    {
        a=563;
        b=89;
       //e=34; //we cannot do this because a subclass can only acces provate and protected members of a class;
       cout<<a<<" "<<b;
    }
};
int main()
{
    B obj;
    C obj2;
    cout<<obj.a<<" "<<obj.c<<endl;
    /*here we cannot access members of class A through class C because it is inherited
    in protected mode so public memebers of class A became protected in class C 
    so we can only acces them in class C
    error!!! :cout<<obj2.a<<" "<<obj2.b<<" "<<obj2.c<<endl;*/
    D obj3;
     //error!!! //cout<<obj3.a<<" "<<endl;
    return 0;
}
