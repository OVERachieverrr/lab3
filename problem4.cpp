// Program to convert time (hour, minute and second) in 24-hr format to 
//12-hr format.
#include<iostream>
using namespace std;
class TIME_12hr;
class TIME_24hr
{
    private:
    int hr,min,sec;
    public:
    void getdata();
    int hour(){
        return hr;
    }
    int minute(){
        return min;
    }
    int second(){
        return sec;
    }

};
class TIME_12hr
{
    int hour,minute,second;
    string X;
    public:
    void Display();
    
    TIME_12hr(TIME_24hr t)
    {
        if(t.hour()==0){    hour=12;   X="AM";   }
        else if(t.hour()==12){    hour=12;   X="PM";   }
        else if(t.hour()>12){   hour=t.hour()-12;   X="PM"; }
        else{ hour=t.hour();}
        minute=t.minute();
        second=t.second();

    }
};
int main()
{
    TIME_24hr t1;
    t1.getdata();
    TIME_12hr t2(t1);
    t2.Display();
    return 0;
}
void TIME_24hr::getdata()
{
    cout<<"Enter hour, minute and second: ";
    cin>>hr>>min>>sec;
}
void TIME_12hr::Display()
{
    cout<<"Time in 12 hour format is: "<<hour<<":"<<minute<<":"<<second<<" "<<X;
}