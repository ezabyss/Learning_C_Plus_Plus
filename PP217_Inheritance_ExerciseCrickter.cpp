//Create a class called cricketer with member variables to represent name, age and no of matches played. From this class derive two classes: Bowler and Batsman. Bowler class ha no. of wickets as member variable and Batsman class has no. of runs and centuries as member variables. Use appropriate member functions in all classes to read display respective data.

#include<iostream>
#include<string.h>
using namespace std;
//MyWay
/*
first time the it takes name but second time it skips the enter Name line . ;
*/
/*
class Cricketer
{
protected:
    char name[20];
    int  age;
    int  no_of_matches;
public:
    void ReadCricketer()
    {
        cout<<"\n Enter Name : ";
        cin.getline(name,20);//When you use cin.get() it doesn't remove the Delimeter thus the delimeter in buffer it take as an input an goes to next line
        cout<<"\n Enter Age  : ";
        cin >> age;
        cout<<"\n Enter No. Of Matches : ";
        cin >> no_of_matches;
    }
    void DisplayCricketer()
    {
        cout<<"\n  Name           : "<< name;
        cout<<"\n  Age            : "<< age;
        cout<<"\n  No. Of Matches : "<< no_of_matches;
    }

};
class Bowler: public Cricketer
{
    int no_of_wickets;
public:
    void ReadBowler()
    {
        //ReadCricketer();
        cout<<"\n Enter No. of Wickets : ";
        cin >> no_of_wickets;
    }
    void DisplayBowler()
    {
        DisplayCricketer();
        cout<<"\n No. Of Wickets  : "<< no_of_wickets;
    }
};
class Batsman: public Cricketer
{
    int no_of_runs;
    int centuries;
public:
    void ReadBatsman()
    {
        ReadCricketer();
        cout<<"\n Enter No. of Runs : ";
        cin >> no_of_runs;
        cout<<"\n Enter No. of Centuries : ";
        cin >> centuries;
    }
    void DisplayBatsman()
    {
        DisplayCricketer();
        cout<<"\n No. of Runs  : " << no_of_runs;
        cout<<"\n Centuries    : " << centuries;
    }
};

using namespace std;

int main()
{
    Batsman Bt;
    cout<<"\n ********************** Enter Batsman Detail ******************* \n ";
    Bt.ReadBatsman();

    Bowler Bw;
    cout<<"\n ********************** Enter Bowlers Detail ******************* \n ";
    Bw.ReadCricketer();
    Bw.ReadBowler();


    cout<<"\n ******************* Batsman Detail ************************** \n ";
    Bt.DisplayBatsman();
    cout<<"\n ******************* Bowlers Detail ************************** \n ";
    Bw.DisplayBowler();

    return 0;
}
*/

//Book Way

class Cricketer
{
    char name[20];
    int age, nom;
public:
    void ReadCricketerData()
    {
        cout<<"\n Enter Name, age and number of match played: ";
        cin>> name>> age>> nom;
    }
    void DisplayCricketerData()
    {
        cout<<endl<<" Name : "<< name;
        cout<<endl<<" Age  : "<< age;
        cout<<endl<<" No of Match Played : "<<nom;
    }
};

class Bowler: public Cricketer
{
    int now;
public:
    void readBowlerData()
    {
        ReadCricketerData();
        cout<<"Enter number of wickets : ";
        cin>>now;
    }
    void DisplayBowlerData()
    {
        DisplayCricketerData();
        cout<<" No. of Wickets: "<<now;
    }
};
class Batsman: public Cricketer
{
    int nor, noc;
public:
    void ReadBatsmanData()
    {
        ReadCricketerData();
        cout<<endl<<"\n Enter no. of runs and centuries: ";
        cin>>nor>>noc;
}
    void DisplayBatsmanData()
    {
        DisplayCricketerData();
        cout<<endl<<" No. of Runs: "<< nor;
        cout<<endl<<" No. of Centuries : "<<noc;
    }
};

int main()
{

    Bowler bow;
    Batsman bat;
    cout<<" Enter Record of Bowler : "<< endl;
    bow.readBowlerData();
    cout<<"Enter record of BatsMan: "<<endl;
    bat.ReadBatsmanData();
    cout<<endl<<"******* Bowler Record****** ";
    bow.DisplayBowlerData();
    cout<<endl<<" *******Batsman Record ***** ";
    bat.DisplayBatsmanData();

    return 0;
}

