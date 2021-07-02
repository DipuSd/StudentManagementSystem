#include<iostream>
#include<conio.h>
#include<cstring>
#include<iomanip>
#include<array>
#include<algorithm>
#include<cctype>
using namespace std;
int i=0;
int memory=0;
class students
{
private:
    string name;
    string department;
    int age=0;
public:
    //students(){}
    //  ~students();
    void setName()
    {
        cin>> name;
    }
    void setDepartment()
    {
        cin>> department;
    }
    void setAge()
    {
        cin >> age;
    }
    void showdata()
    {
      //  cout<< name << endl << department << endl << age <<endl;

                    //spaceprinter(9);
                    cout<<setw(7)<< name;
                    //spaceprinter(11);
                    cout<<setw(14) << department;
                   // spaceprinter(11);
                    cout<<setw(21) << age;
                   // lineprinter(57);
    }
    string retname()
    {
        return name;
    }
    string retdepart()
    {
        return department;
    }
    int retage()
    {
        return age;
    }
    void clearClass(){
        name="";
        department="";
        age=0;
    }

};
void lineprinter(int n)
{
    for(int i=0; i<n; i++)
    {
        cout <<"=";
    }
    cout << endl;
}
void spaceprinter(int n)
{
    for(int i=0; i<n; i++)
    {
        cout <<" ";
    }
}


int main ()
{
    students records[100];
    int trash;
    int again= 0;
    int recnum=1;
    while(again!=5)
    {
        cout<<"!!!!!!!!!!!!!!!WARNING ONLY ENTER INTEGERS WHERE NUMBER IS WANTED OR THE PROGRAMME WILL BREAK!!!!!!!!!!!!!!!!!"<< endl<<endl;
        lineprinter(30);
        cout<<"||";
        spaceprinter(9);
        cout <<"STUDENTS";
        spaceprinter(9);
        cout <<"||" << endl;
        lineprinter(30);
        cout<<"||" <<"1.Add records.";
        spaceprinter(12);
        cout <<"||" << endl;
        cout<<"||" <<"2.Search records.";
        spaceprinter(9);
        cout <<"||" << endl;
        cout<<"||" <<"3.Delete records.";
        spaceprinter(9);
        cout <<"||" << endl;
        cout<<"||" <<"4.Show records.";
        spaceprinter(11);
        cout <<"||" << endl;
        cout<<"||" << "5.Exit.";
        spaceprinter(19);
        cout <<"||" << endl;
        lineprinter(30);
        cin>> trash;
        if(trash==1)
        {
            char agaain='y';
            i= memory;
            if(i>= recnum)
            {
                lineprinter(40);
                cout<<"||";
                cout <<"records full cant enter anymore data";
                cout <<"||"<< endl;
                lineprinter(40);
                cout<<endl;
                agaain='n';
            }
            while(agaain!='n')
            {
                cout << endl;
                lineprinter(30);
                spaceprinter(9);
                cout <<"ADD RECORDS" << endl;
                lineprinter(30);
                cout<<endl;
                if(i==0)
                {
                    cout <<"Enter records number(100max)(integer): ";
                    cin>> recnum;

                }
                for( int l=i; l < recnum; l++)
                {
                    if(records[l].retage()!=0){
                        cout << "data already exist in this record" << endl;
                        continue;
                    }
                    else{
                    char traash;
                    lineprinter(30);
                    spaceprinter(9);
                    cout <<" student " <<l+1<<"/"<<recnum << endl;
                    lineprinter(30);
                    cout<<endl;
                    cout << "student name(no space): ";
                    records[l].setName();
                    cout << endl;
                    cout << "student department(no space): ";
                    records[l].setDepartment();
                    cout << endl;
                    cout << "student age(integer): ";
                    records[l].setAge();
                    cout << endl;
                    cout << "Add records again?(y/n)";
                    traash= getch();
                    cout << endl<<endl;
                    i=l;
                    memory= i+1;
                    agaain='n';


                    if(traash=='n')
                    {

                        l=recnum+1;
                    }
                    }
                }
                cout << i << endl << memory << endl;
                if(memory== recnum)
                {
                    lineprinter(37);
                    cout<<"||";
                    cout <<"records full exited to main menu";
                    cout<<"||" << endl;
                    lineprinter(37);
                    cout<<endl;
                }
            }
        }



        else if(trash==2)
        {
            // cout <<"working" << endl;
            char agaain='n';
            if(i==0)
            {
                lineprinter(51);
                cout<<"||";
                cout<<"EMPTY!no records to search, exited to main menu";
                cout << "||" << endl;
                lineprinter(51);
                agaain='y';
            }
            while(agaain!='y')
            {
                int trash;
                lineprinter(30);
                cout<<"||";
                spaceprinter(6);
                cout<<"SEARCH RECORDS";
                spaceprinter(6);
                cout << "||" << endl;
                lineprinter(30);
                cout<<"||" <<"1.Search by name.";
                spaceprinter(9);
                cout <<"||" << endl;
                cout<<"||" <<"2.Search by departments.";
                spaceprinter(2);
                cout <<"||" << endl;
                cout<<"||" <<"3.Search by age.";
                spaceprinter(10);
                cout <<"||" << endl;
                cout<<"||" <<"4.return to main menu.";
                spaceprinter(4);
                cout <<"||" << endl;

                lineprinter(30);
                cin >> trash;
                if(trash==1)
                {
                    // cout <<"working!" << endl;
                    string tempname;
                    string temparrname;
                    int arraymemory;
                    int temparrsize;
                    int COunt;
                    char agaain='n';
                    char check;
                    while(agaain!='y')
                    {
                        int counti;
                        char t;
                        string temp;
                        string tempstring;
                        int tempsize;
                        cout <<"Enter student name: ";
                        cin>>temp;
                        int ssize= temp.length();
                        for(int i=0; i<recnum; i++)
                        {
                            counti=0;
                            tempstring= records[i].retname();
                            tempsize= tempstring.length();

                            for(int j=0; j<ssize; j++)
                            {
                                if(ssize==tempsize)
                                {
                                    if(tempstring[j]==temp[j])
                                    {
                                        counti++;
                                    }
                                }
                            }
                            if(counti==ssize)
                            {
                                t='y';
                                arraymemory=i;
                                break;
                            }
                            else
                            {
                                t='n';
                            }

                        }
                        if(t=='y')
                        {
                            lineprinter(57);
                            cout << "||";
                            cout<<"ID";
                            spaceprinter(10);
                            cout <<"Name";
                            spaceprinter(12);
                            cout<<"Department";
                            spaceprinter(12);
                            cout<<"Age";
                            cout<<"||"<<endl;
                            lineprinter(57);
                            cout<< arraymemory+1;
                            spaceprinter(9);
                            cout<< records[arraymemory].retname();
                            spaceprinter(11);
                            cout << records[arraymemory].retdepart();
                            spaceprinter(11);
                            cout << records[arraymemory].retage() <<endl;
                            lineprinter(57);

                        }
                        else
                        {
                            cout<<endl;
                            lineprinter(30);
                            cout<<"||";
                            spaceprinter(6);
                            cout <<"NAME NOT FOUND";
                            spaceprinter(6);
                            cout << "||" << endl;
                            lineprinter(30);
                            cout<<endl;

                        }
                        cout << "press\'y\'to return to search menu" << endl;
                        agaain=getch();
                    }

                }
                else if(trash==2)
                {
                    //cout << "working!" << endl;
                    int trashprint;
                    string tempname;
                    string temparrname;
                    int arraymemory;
                    int temparrsize;
                    int COunt;
                    char agaain='n';
                    char t;
                    int check='n';
                    while(agaain!='y')
                    {

                        int counti;
                        string temp;
                        string tempstring;
                        int tempsize;
                        cout <<"Enter department name: ";
                        cin>>temp;
                        int ssize= temp.length();
                        for(int i=0; i<recnum; i++)
                        {
                            counti=0;
                            tempstring= records[i].retdepart();
                            tempsize= tempstring.length();

                            for(int j=0; j<ssize; j++)
                            {
                                if(ssize==tempsize)
                                {
                                    if(tempstring[j]==temp[j])
                                    {
                                        counti++;
                                    }
                                }
                            }
                            if(counti==ssize)
                            {
                                t='y';
                                arraymemory=i;
                                check='y';
                            }
                            else
                            {

                                t='n';


                            }
                            if(t=='y')
                            {
                                trashprint++;
                                if(trashprint==1)
                                {
                                    lineprinter(57);
                                    cout << "||";
                                    cout<<"ID";
                                    spaceprinter(10);
                                    cout <<"Name";
                                    spaceprinter(12);
                                    cout<<"Department";
                                    spaceprinter(12);
                                    cout<<"Age";
                                    cout<<"||"<<endl;
                                    lineprinter(57);
                                }
                                cout<< arraymemory+1;
                                spaceprinter(9);
                                cout<< records[arraymemory].retname();
                                spaceprinter(11);
                                cout << records[arraymemory].retdepart();
                                spaceprinter(11);
                                cout << records[arraymemory].retage() <<endl;
                                lineprinter(57);

                            }

                        }
                        if(check=='n')
                        {
                            cout<<endl;
                            lineprinter(30);
                            cout<<"||";
                            spaceprinter(3);
                            cout <<"DEPARTMENT NOT FOUND";
                            spaceprinter(3);
                            cout << "||" << endl;
                            lineprinter(30);
                            cout<<endl;

                        }
                        trashprint=0;
                        cout << "press\'y\'to return to search menu" << endl;
                        agaain=getch();
                    }
                }
                else if(trash==3)
                {
                    char agaain='n';
                    while(agaain!='y')
                    {
                        int trash;
                        lineprinter(30);
                        cout<<"||";
                        spaceprinter(6);
                        cout<<"SEARCH BY AGE";
                        spaceprinter(7);
                        cout << "||" << endl;
                        lineprinter(30);
                        cout<<"||" <<"1.Grater than.";
                        spaceprinter(12);
                        cout <<"||" << endl;
                        cout<<"||" <<"2.Lesser than.";
                        spaceprinter(12);
                        cout <<"||" << endl;
                        cout<<"||" <<"3.Equal to.";
                        spaceprinter(15);
                        cout <<"||" << endl;
                        cout<<"||" <<"4.return to search menu.";
                        spaceprinter(2);
                        cout <<"||" << endl;
                        lineprinter(30);
                        cin >> trash;
                        if(trash==1)
                        {
                            char agaain='n';
                            int inpage;
                            int tempage;
                            char t;
                            int trashprint;
                            while(agaain!='y')
                            {
                                cout <<"Enter age: ";
                                cin>> inpage;
                                for(int i=0; i<recnum; i++)
                                {
                                    tempage= records[i].retage();
                                    if(tempage>inpage)
                                    {
                                        trashprint++;
                                        if(trashprint==1)
                                        {
                                            lineprinter(57);
                                            cout << "||";
                                            cout<<"ID";
                                            spaceprinter(10);
                                            cout <<"Name";
                                            spaceprinter(12);
                                            cout<<"Department";
                                            spaceprinter(12);
                                            cout<<"Age";
                                            cout<<"||"<<endl;
                                            lineprinter(57);
                                        }
                                        cout<< i+1;
                                        spaceprinter(9);
                                        cout<< records[i].retname();
                                        spaceprinter(11);
                                        cout << records[i].retdepart();
                                        spaceprinter(11);
                                        cout << records[i].retage() <<endl;
                                        lineprinter(57);
                                        t='y';



                                    }


                                    if(trashprint==0)
                                    {
                                        t='n';


                                    }

                                }
                                if(t=='n')
                                {
                                    cout<<endl;
                                    lineprinter(30);
                                    cout<<"||";
                                    spaceprinter(5);
                                    cout <<"RECORDS NOT FOUND";
                                    spaceprinter(4);
                                    cout << "||" << endl;
                                    lineprinter(30);
                                    cout<<endl;



                                }
                                trashprint=0;


                                cout<<endl << "press\'y\' to return to search menu" <<endl;
                                agaain= getch();


                            }
                        }

                        else if(trash==2)
                        {
                            char agaain='n';
                            int inpage;
                            int tempage;
                            char t='y';
                            int trashprint=0;
                            while(agaain!='y')
                            {
                                cout <<"Enter age: ";
                                cin>> inpage;
                                for(int i=0; i<recnum; i++)
                                {
                                    tempage= records[i].retage();
                                    if(tempage<inpage)
                                    {
                                        trashprint++;
                                        if(trashprint==1)
                                        {
                                            lineprinter(57);
                                            cout << "||";
                                            cout<<"ID";
                                            spaceprinter(10);
                                            cout <<"Name";
                                            spaceprinter(12);
                                            cout<<"Department";
                                            spaceprinter(12);
                                            cout<<"Age";
                                            cout<<"||"<<endl;
                                            lineprinter(57);
                                        }
                                        cout<< i+1;
                                        spaceprinter(9);
                                        cout<< records[i].retname();
                                        spaceprinter(11);
                                        cout << records[i].retdepart();
                                        spaceprinter(11);
                                        cout << records[i].retage() <<endl;
                                        lineprinter(57);
                                        t='y';



                                    }

                                    if(trashprint==0)
                                    {
                                        t='n';
                                    }


                                }

                                if(t=='n')
                                {
                                    cout<<endl;
                                    lineprinter(30);
                                    cout<<"||";
                                    spaceprinter(5);
                                    cout <<"RECORDS NOT FOUND";
                                    spaceprinter(4);
                                    cout << "||" << endl;
                                    lineprinter(30);
                                    cout<<endl;

                                }
                                trashprint=0;

                                cout<<endl << "press\'y\' to return to search menu" <<endl;
                                agaain= getch();
                            }

                        }

                        else if(trash==3)
                        {
                            char agaain='n';
                            int inpage;
                            int tempage;
                            char t='y';
                            int trashprint=0;
                            while(agaain!='y')
                            {
                                cout <<"Enter age: ";
                                cin>> inpage;
                                for(int i=0; i<recnum; i++)
                                {
                                    tempage= records[i].retage();
                                    if(tempage==inpage)
                                    {
                                        trashprint++;
                                        if(trashprint==1)
                                        {
                                            lineprinter(57);
                                            cout << "||";
                                            cout<<"ID";
                                            spaceprinter(10);
                                            cout <<"Name";
                                            spaceprinter(12);
                                            cout<<"Department";
                                            spaceprinter(12);
                                            cout<<"Age";
                                            cout<<"||"<<endl;
                                            lineprinter(57);
                                        }
                                        cout<< i+1;
                                        spaceprinter(9);
                                        cout<< records[i].retname();
                                        spaceprinter(11);
                                        cout << records[i].retdepart();
                                        spaceprinter(11);
                                        cout << records[i].retage() <<endl;
                                        lineprinter(57);
                                        t='y';



                                    }

                                    if(trashprint==0)
                                    {
                                        t='n';
                                    }


                                }

                                if(t=='n')
                                {
                                    cout<<endl;
                                    lineprinter(30);
                                    cout<<"||";
                                    spaceprinter(5);
                                    cout <<"RECORDS NOT FOUND";
                                    spaceprinter(4);
                                    cout << "||" << endl;
                                    lineprinter(30);
                                    cout<<endl;

                                }
                                trashprint=0;

                                cout<<endl << "press\'y\' to return to search menu" <<endl;
                                agaain= getch();

                            }
                        }
                        else if(trash==4)
                        {
                            lineprinter(30);
                            cout<<"||";
                            spaceprinter(5);
                            cout <<"EXITED TO SEARCH";
                            spaceprinter(5);
                            cout << "||" << endl;
                            lineprinter(30);
                            cout << endl;
                            agaain='y';

                        }
                        else
                        {
                            cout << "Error! invalid input" << endl;
                            continue;
                        }

                    }
                }
                else if (trash==4)
                {
                    lineprinter(30);
                    cout<<"||";
                    spaceprinter(6);
                    cout <<"EXITED TO MENU";
                    spaceprinter(6);
                    cout << "||" << endl;
                    lineprinter(30);
                    cout << endl;
                    agaain='y';
                }
                else
                {
                    cout << "Error! invalid input try again" << endl;
                    continue;
                }

            }
        }
        else if(trash==3)
        {
            //cout <<"working" << endl;
            char agaain='n';
            while(agaain!='y')
            {
                int trash;
                        lineprinter(30);
                        cout<<"||";
                        spaceprinter(6);
                        cout<<"DELETE RECORDS";
                        spaceprinter(6);
                        cout << "||" << endl;
                        lineprinter(30);
                        cout<<"||" <<"1.Delete all.";
                        spaceprinter(13);
                        cout <<"||" << endl;
                        cout<<"||" <<"2.Specific delete.";
                        spaceprinter(8);
                        cout<<"||" << endl;
                        cout<<"||" <<"3.Return to main menu.";
                        spaceprinter(4);
                        cout<<"||" << endl;
                        lineprinter(30);
                        cin >> trash;
                if(trash==1){
                for(int j=0;j<recnum;j++){
                    records[i].clearClass();
                }
                i=0;
                recnum=1;
                memory=0;
                            lineprinter(30);
                            cout<<"||";
                            spaceprinter(3);
                            cout <<"ALL RECORDS CLEARED";
                            spaceprinter(4);
                            cout << "||" << endl;
                            lineprinter(30);
                            cout << endl;
                            agaain='y';
                }
                else if(trash==2){
                    int temp;
                    cout << "working " << endl;
                    cout << "Number of records: " << i+1 << endl;
                    cout << "Enter a position to delete: ";
                    cin >> temp;
                    //cout<<"temp is "<< temp;
                    //cout<<"temp-min" << temp-1;

                    //students s = records[temp-1];
                    //cout<<s.retname()<<ends<<s.retdepart()<<ends<<s.retage();
                    //cout<<"what is i: "<< i;
                    records[temp-1].clearClass();
                    //cout<<"after min: "<< i;
                    recnum+=1;
                    cout << i << endl << memory << endl << recnum <<endl;
                           lineprinter(30);
                            cout<<"||";
                            spaceprinter(3);
                            cout <<temp<<"th RECORD CLEARED";
                            spaceprinter(4);
                            cout << "||" << endl;
                            lineprinter(30);
                            cout << endl;
                            agaain='y';
                }


                else if(trash==3){
                            lineprinter(30);
                            cout<<"||";
                            spaceprinter(3);
                            cout <<"EXITED TO MAIN-MENU";
                            spaceprinter(4);
                            cout << "||" << endl;
                            lineprinter(30);
                            cout << endl;
                            agaain='y';


                }
                else{
                    cout << "Error! invalid input try again" << endl;
                    continue;
                }

            }

        }
        else if(trash==4)
        {
//under construction!!!
            char agaain='n';
            if(memory==0)
            {
                lineprinter(49);
                cout<<"||";
                cout<<"EMPTY!no records to show, exited to main menu";
                cout << "||" << endl;
                lineprinter(49);
                agaain='y';
            }
            while(agaain!='y')
            {

                int Recnum= memory;
                lineprinter(57);
                cout << "||";
                cout<<"ID";
                spaceprinter(10);
                cout <<"Name";
                spaceprinter(12);
                cout<<"Department";
                spaceprinter(12);
                cout<<"Age";
                cout<<"||"<<endl;
                lineprinter(57);
                for(int j=0; j<recnum; j++)
                {
                   if(records[j].retage()==0){
                      continue;
                   }
                    else{
                    cout<<"||"<< j+1; spaceprinter(10);
                    records[j].showdata(); cout<<"||" << endl;
                    lineprinter(57);
                    }

                }
                cout << "press\'y\'to return to main menu" << endl<< endl;
                agaain=getch();

            }


        }
        else if(trash==5)
        {
            lineprinter(30);
            cout<<"||";
            spaceprinter(10);
            cout <<"EXITED";
            spaceprinter(10);
            cout << "||" << endl;
            lineprinter(30);
            again=5;
        }
        else
        {
            cout << "Error!invalid input try again" << endl;
            continue;
        }

    }
    return 0;
}
// fix case when adding data in 0 position of data after deleting them
