// consturct inside class.
#include<iostream>
using namespace std;

class date
{
    int d;
    int m;
    int y;

    public:
    date()
    {
        cout<<"Enter date: ";
        cin>>d;
        cout<<"Enter month: ";
        cin>>m;
        cout<<"Enter  Year: ";
        cin>>y;
        cout<<"Today's Date is: "<<endl;
        cout<<d<<"/"<<m<<"/"<<y;
    }
};
int main()
{
    date today;
}

/*
Enter date: 8
Enter month: 10
Enter  Year: 24
Today's Date is: 
8/10/24
*/
