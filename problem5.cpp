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
    void Display();
    TIME_24hr(TIME_12hr t);

};

void TIME_24hr::Display()
{
    cout<<"Time in 24 hour format is: "<<hr<<":"<<min<<":"<<sec;
}


class TIME_12hr
{
    int hour,minute,second;
    string X;
    public:
    
    void getdata();
    int Ghour(){
        return hour;
    }
    int Gminute(){
        return minute;
    }
    int Gsecond(){
        return second;
    }
    string word(){
        return X;
    }

    
};

void TIME_12hr::getdata()
{
    cout<<"Enter hour, minute and second: "<<endl;
    cin>>hour>>minute>>second;
    cout<<"AM or PM (plz use capital string)";
    cin>>X;
}
TIME_24hr::TIME_24hr(TIME_12hr t)
{
      if(t.Ghour()==12 && t.word()=="AM"){    hr=0;      }
        else if(t.Ghour()==12 && t.word()=="PM"){    hr=12;      }
        else if(t.Ghour()<12 && t.word()=="PM"){   hr=t.Ghour()+12;    }
        else{ hr=t.Ghour();}
        min=t.Gminute();
        sec=t.Gsecond();
}

int main()
{
    TIME_12hr t2;
    t2.getdata();
    TIME_24hr t1(t2);    
    t1.Display();
    return 0;
}




