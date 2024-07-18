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
    Cartesian(){}
    void display();
    void get_coordinate();

    operator polar();//it is used to convert the coordinate to polar
};
class polar
{
    private:
    double r, theta;
    public:
    polar()
    {
        r=0;
        theta=0;
    }
    polar(double x ,double y)
    {
        r=sqrt(x*x+y*y);
        theta=atan2(y,x);
    }

    void show();
   
};

int main()
{
    Cartesian c1;
    polar p1;
    c1.get_coordinate();
    p1=c1;
    c1.display();
    p1.show();

}
void Cartesian::get_coordinate()
{
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
}
Cartesian::operator polar()
{
    
return polar( x, y);
    
}
void Cartesian::display()
{
    cout<<"(x,y) = ("<<x<<" , "<<y<<")"<<endl;
   
}
void polar::show()
{
       cout<<"(r,theta) = ("<<r<<" , "<<theta<<"(radian))"<<endl;

}