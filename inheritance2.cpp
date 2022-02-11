#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }
    void getlength();
    void getbreadth();
    int getcubelength(){ return length;};
    int getcubebreadth(){return breadth;};
    int getarea();
    void display();
    bool isSquare();
};
class cuboid :public Rectangle
{
    int height;
    public:
    cuboid()
    {
        height=1;
    }
    void getheight(){
        cout<<"enter height"<<endl;
        cin>>height;
    };
    int getvolume()
    {
        return (height)* (getcubebreadth())*(getcubelength());
    }
};
int main()
{
    cuboid c ;
    c.getlength();
    c.getbreadth();
    int area = c.getarea();
    cout << "area is " << area << endl;
    bool res = c.isSquare();
    if (res == true)
    {
        cout << "it is a square" << endl;
    }
    else
        cout << "it is not a square" << endl;
        c.getheight();
        cout<<"volume of cuboid is "<< c.getvolume()<<endl;
}
void Rectangle::getlength()
{
    cout << "enter length" << endl;
    cin >> length;
}
void Rectangle::getbreadth()
{
    cout << "enter breadth" << endl;
    cin >> breadth;
}
int Rectangle::getarea()
{

    return length * breadth;
}
bool Rectangle::isSquare()
{
    if (length == breadth)
    {
        return true;
    }
    else
        return false;
}
