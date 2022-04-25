// Default Constructor:
#include <iostream>
using namespace std;

class Constructor
{
    public:
    int a,b;
   Constructor()
    {
        a=10;
        b=30;
    }
   
};

int main()
{
    Constructor c;
     cout << "The value of a is : "<<c.a<<endl
          << "The value of b is : "<<c.b ;
    return 0;
}
