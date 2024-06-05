#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{ 
    choose:
    string seat[]={"x1","y1","x2","y2","x3","y3","x4","y4","x5","y5","x6","y6","x7","y7","x8","y8","x9","y9","x10",
    "y10","x11","y11","x12","y12","x13","y13","x14","y14","x15","y15","x16","y16","x17","y17","x18","y18","x19","y19","x20",
    "y20","x21","y21","x22","y22","x23","y23","x24","y24","x25","y25","x26","y26","x27","y27","x28","y28","x29","y29","x30",
    "y30","x31","y31","x32","y32","x33","y33","x34","y34","x35","y35","x36","y36","x37","y37","x38","y38","x39","y39","x40",
    "y40","x41","y41","x42","y42","x43","y43","x44","y44","x45","y45","x46","x46","x47","y47","x48","y48","x49","y49","x50","y50"};
    int row,col;
    int input;
    char rows='1';
    char c;
    char book1;
    string arr[5][10]={{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
    {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
    {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
    {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
    {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"}};
    cout << "******************************AIRLINE RESERVATION SYSTEM******************************\n";
    cout << "\n";
    cout<<"\t\t            1   2   3   4   5   6   7   8   9   10"<<endl;
    for(int i=0; i<5; ++i)
    {
        cout<<"\t\t   Row "<<rows<<":  ";
        ++rows;
        for(int j=0; j<10; ++j)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    again:
    rows='1';
    for(input=1; input<50; input=input+2)
    {
        rows='1';

        cout << "\n\n";
        cout<< "\t            Legend: [ ] = Available     [X] = Occupied ";
        cout << "\n\n";
        cout<<endl<<"\t\t               Enter Row: ";
        cin>>row;
        cout<<endl<<"\t\t               Enter Column: ";
        cin >> col;

        if (row<=0 || col<=0)
        {
            cout<<endl<<"\t\t              Please Pick A Valid Seat"<<endl;
            Sleep(500);
            system("cls");
            goto choose;
        }
        --row;
        --col;
        if(arr[row][col]=="[X]")
        {
            cout<<endl<<"\t\t             Seat Not Available"<<endl;
            cout<<endl<<endl<<"*************************************************************************************\n";
            goto again;
        }
        arr[input][input+1]=arr[row][col];
        arr[row][col]="[X]";
        system("cls");
        cout<<endl;
        cout<<"\t\t            1   2   3   4   5   6   7   8   9   10"<<endl;
        for(int i=0; i<5; ++i)
        {
            cout<<"\t\t   Row "<<rows<<":  ";
            ++rows;
            for(int j=0; j<10; ++j)
               cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl<<"\t\t                   Seat Booked!"<<endl;
        cout<<endl<<"\t\t        Do You Want To Book Another Seat?"<<endl;
        cout<<"\t\t          Press [Y] For Yes & [N] For No."<<endl;
        cout<<"\t\t                        ";
        cout<<"\n\t\t                        ";
        cin>>c;

        cout << "\n\n*************************************************************************************";

        if(c=='y' || c=='Y')
            goto again;

        else if(c=='n' || c=='N')
        // Here I want the code to print seat number as A1 or C3 etc...
        break;
    }
}
