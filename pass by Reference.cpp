#include <iostream>
using namespace std;
class Sample

{
private:
      int num;
public:
void set (int x)
{
      num = x;
}
void pass(Sample &obj1, Sample &obj2) //objects are passed
{
      obj1.num=100;            // value of the object is changed inside the function
      obj2.num=200;            // value of the object is changed inside the function
     cout<<"\nChanged value of object1 "<<obj1.num;
      cout<<"\nChanged value of object2 "<<obj2.num;
}
      void print()
      {
           cout<<num;
      }
};
int main()
{
      
      //object declarations
      Sample s1;
      Sample s2;
      Sample s3;
      //assigning values to the data member of objects
      s1.set(10);
      s2.set(20);
      //printing the values before passing the object
      cout<<"Value of object1 before passing "; s1.print();
      cout<<"\nValue of object2 before passing "; s2.print();
      //passing object s1 and s2 
      s3.pass(s1,s2);
      //printing the values after returning to main
      cout<<"\nValue of object1 after passing "; s1.print();
      cout<<"\nValue of object2 after passing ";
      s2.print();
  return 0;
    }
