#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;
class polar;
class Cartesian
{
private:
    double x, y;
public:
    Cartesian()
    {
        x=0; 
        y=0;
    }
    Cartesian(double r , double theta)
    {
        x=r*cos(theta*3.14/180);
        y=r*sin(theta*3.14/180);
    }
    
    void display();
    
   
};
class polar
{
    private:
    double r, theta;
    public:
    polar(){}
    void get_coordinate();
    void show();
    
    operator Cartesian()
    {
        return Cartesian( r, theta);
    }
};

int main()
{
    Cartesian c1;
    polar p1;
    p1.get_coordinate();
    c1=p1;
    p1.show();
    c1.display();
}
void polar::get_coordinate()
{
        cout<<"Enter the value of r and theta(degree)"<<endl;
        cin>>r>>theta;
}
void Cartesian::display()
{
    cout<<"(x,y) = ("<<setprecision(3)<<x<<" , "<<setprecision(3)<<y<<")"<<endl;
   
}
void polar::show()
{
       cout<<"(r,theta) = ("<<r<<" , "<<theta<<"(radian))"<<endl;

}
