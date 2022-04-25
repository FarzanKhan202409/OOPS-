// demonstrate the concept of paramertrized constructor

#include <iostream>
using namespace std;

class Math
{
    private:
    int x,y,z ;
    public: 
    Math(int x1, int y1, int z1)
    {
        x=x1;
        y=y1;
        z=z1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }
};
int main()
{
   
    Math m(23, 47, 75);
    cout<< "The value of x is : "<<m.getX()<<endl
        << "The value of y is : "<<m.getY()<<endl
        << "The value of z is : "<<m.getZ();
        
    return 0;
}
