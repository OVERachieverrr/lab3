// Program to convert Nepalese Currency (Rupees and Paisa) to US 
//Currency (Dollar and Cents). (Rs. 98.51=1$)
#include<iostream>
using namespace std;
class US_currency
{
    double Dolor;
    public:
    US_currency()
    {
        Dolor=0;
    }
    US_currency(double Rs)
    {
         Dolor=Rs/98.51;
    }
    void display()
    {
        cout<<"$ "<<Dolor;
    }
};
int main()
{
    US_currency d1;
    double RS;
    cout<<"enter the nepalese currency :";
    cin>>RS;
    d1=RS;
    d1.display();
    return 0;

}