//constructor overloading

#include <iostream>
using namespace std;

class Area
{
    public:
    int area;
    
    Area()
    {
        area = 0;
    }
    Area(int length, int breadth)
    {
        area = length*breadth;
    }
    
    void display()
    {
    cout<<"The area of the field is : "<<area<<" sq. units"<<endl;
    }    
};
int main()
{
    Area a1(10,20);
    a1.display();
    return 0;
}
