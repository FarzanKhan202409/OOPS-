#include <iostream>
class DB;
class DM
{
private:
    double metres;
    double centimeters;

public:
    DM(double m, double cm) : metres(m), centimeters(cm)
    {
    }
    double getMtrs()
    {
        return metres;
    }
    double getCentMtrs()
    {
        return centimeters;
    }
    void setMtrs(double m)
    {
        metres = m;
    }
    void setCentMtrs(double cm)
    {
        centimeters = cm;
    }
    
    DM add(DB obj);
    
    void display()
    {
        std::cout << "Meters:" << metres << " CentMeters:" << centimeters << std::endl;
    }
};

class DB
{
private:
    double feet;
    double inches;

public:
    DB(double ft, double inch) : feet(ft), inches(inch)
    {
    }
    double getFeet()
    {
        return feet;
    }
    double getInches()
    {
        return inches;
    }
    void setFeet(double ft)
    {
        feet = ft;
    }
    void setInches(double inch)
    {
        inches = inch;
    }
    void display()
    {
        std::cout << "Feet:" << feet << " Inches:" << inches << std::endl;
    }
};

// Function to add DM object with DB object
DM DM::add(DB obj)
{
    double CM = obj.getInches() * 2.54;
    CM += centimeters;
    double MTRS = obj.getFeet() * 0.3048;
    MTRS += metres;
    return DM(MTRS, CM);
}
int main()
{
    double metres, centimeters;
    double feet, inches;
    std::cout << "Enter Meters and Centimeters: " << std::endl;
    std::cin >> metres >> centimeters;
    std::cout << "Enter Feet and Inches: " << std::endl;
    std::cin >> feet >> inches;
    DM dm1 = {metres, centimeters}; // Creating object of type DM
    DB db1 = {feet, inches};   // Creating object of type DB
    DM dm2 = dm1.add(db1);     // adding DM with DB
    dm1.display();
    db1.display();
    std::cout << "\nAfter adding DM object with DB object: " << std::endl;
    dm2.display();

    return 0;
}
