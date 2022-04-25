// Demonstrate the concept of copy constructor

#include <iostream>
using namespace std;

class Math
{
    private:
    int x,y ;
    public: 
    Math(int x1, int y1) // paramertrized constructor
    {
        x=x1;
        y=y1;
      
    }
    Math (const Math &m) // Copy Constructor
    {
        x=m.x;
        y=m.y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    
};
int main()
{
   
    Math m(23, 47);
    Math m1 = m;
    cout<< "The value of x is : "<<m.getX()<<endl
        << "The value of y is : "<<m.getY()<<endl<<endl;
        
    cout<< "The value of m.x is : "<<m1.getX()<<endl
        << "The value of m.y is : "<<m1.getY();
     
     return 0;
}
