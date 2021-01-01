#include<iostream>
#include<unordered_map>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;
unordered_map<string,string>m;

class file
{
protected:
    string date;
    fstream fio;
    ifstream fin;
    ofstream fout;
public:
    void setShow();
}objf2;

class account //creating the account!
{
protected:
    string name,dob,contactNo;
    string user,pass;
public:
    void fillm(); //
    int create();
    int show(string);
};

class movie:public account,public file
{
    protected:
    float money,sum;
    int option,y;
    string moviename;
public:
    void ticket(int,string,int,int);
};

void file::setShow()
{
    int choice,j;
    j=1;
    while(j)
        {
        cout<<"Menu:"<<endl;
        cout<<"1)Set timing for theater Cinepolis"<<endl;
        cout<<"2)see timings for theater Cinepolis"<<endl;
        cout<<"3)Set timing for theater Inox"<<endl;
        cout<<"4)See timing for theater Inox"<<endl;
        cout<<"5)Set timing for theater PVR"<<endl;
        cout<<"6)See timing for theater PVR"<<endl;
        cout<<"7)Back to login page"<<endl;
        cout<<"8)Exit the program"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {

            case 1:
            {
                string ch;
                fio.open("Cinepolis.txt",ios::out|ios::in);
                cout<<"Previous timings are"<<endl;
                if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
                fio.close();
                fio.open("Cinepolis.txt",ios::out);
                do{
                    cout<<"Enter new timings"<<endl;
                    cin>>objf2.date;
                    fio << objf2.date << "\n";
                    cout<<"wanna add more(y/n)?"<<endl;
                    cin>>ch;
                }while(ch=="y"||ch=="Y");
                fio.close();
            }
            break;
            case 2:
            {
                fio.open("Cinepolis.txt",ios::out|ios::in);
                cout<<"Cinepolis show timings are"<<endl;
            if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
            }
            break;
            case 3:
            {
                string ch;
                fio.open("Inox.txt",ios::out|ios::in);
                cout<<"Previous timings are"<<endl;
                if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
                fio.close();
                fio.open("Inox.txt",ios::out);
                do{
                    cout<<"Enter new timings"<<endl;
                    cin>>objf2.date;
                    fio << objf2.date << "\n";
                    cout<<"wanna add more(y/n)?"<<endl;
                    cin>>ch;
                }while(ch=="y"||ch=="Y");
                fio.close();
            }
            break;
            case 4:
            {
                fio.open("Inox.txt",ios::app|ios::out|ios::in);
                cout<<"Inox show timings are"<<endl;
                if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
            }
            break;
            case 5:
            {
                string ch;
                fio.open("PVR.txt",ios::out|ios::in);
                cout<<"Previous timings are"<<endl;
                if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
                fio.close();
                fio.open("PVR.txt",ios::out);
                do{
                    cout<<"Enter new timings"<<endl;
                    cin >> objf2.date;
                    fio << objf2.date << "\n";
                    cout<<"wanna add more(y/n)?"<<endl;
                    cin>>ch;
                }while(ch=="y"||ch=="Y");
                fio.close();
            }
            break;
            case 6:
            {
                fio.open("PVR.txt",ios::out|ios::in);
                cout<<"PVR show timings are"<<endl;
                if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
            }
            break;
            case 7:
                j=0;
                break;
            case 8:
                exit(0);
             break;
            default:cout<<"Invalid choice"<<endl;
             break;

    }
    }

}

void movie::ticket(int x,string movieName,int q,int ch)
{

    ifstream fin;
    ofstream fout;
    fstream fio;
    string s;
    moviename=movieName;
    int j;
    long long int cc;
    char t;
    string alias;
    //THE TIME CHOOSING STUFF GOES HERE
   int time;
if(ch==1)
{
    fio.open("Cinepolis.txt",ios::in);
                cout<<"Cinepolis show timings are"<<endl;
                if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
                fio.close();
}
else if(ch==2)
{
    fio.open("Inox.txt",ios::in);
                cout<<"Inox show timings are"<<endl;
               if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
                fio.close();
}
else{
    fio.open("PVR.txt",ios::in);
                cout<<"PVR show timings are"<<endl;
                if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
                fio.close();
}
cout<<"\n\t Please select the timings: ";
cin>>time;
    cout << "Enter the amount of ticket you want to buy\n";
    cin >> y;
    sum=x*y;
    cout << "Your total amount to be paid is:" << sum << endl;
    cout << "Enter your credit card/debit card number\n";
    cin >> cc;
    cout << "Enter the CVV of your card\n";
    cin >> j;
    cout << "Are you sure you want to proceed?[Y/N]\n";
    cin >> t;
    if(t=='Y'||t=='y')
    {
        cout << "Okay, here is your receipt!\n";
        cout << "----------------------------------------"<<endl;
        cout << "Name: " << name << "\n" ;

if(ch==1)
{
    ifstream f("Cinepolis.txt");
    for(int i = 1;i<=time;i++)
    {
        getline(f,s);
    }
    cout << "Time: " << s << endl;

}
else if(ch==2)
{
    ifstream f("Inox.txt");
    for(int i = 1;i<=time;i++)
    {
        getline(f,s);
    }
    cout << "Time: " << s << endl;
}
else{
    ifstream f("PVR.txt");
    for(int i = 1;i<=time;i++)
    {
        getline(f,s);
    }
    cout << "Time: " << s << endl;
}
//till here
cout<< "Movie name: " << moviename << "\nTotal amount being paid: " << sum << endl;
        cout << "\nEnjoy the movie!";
        cout << "----------------------------------------"<<endl;;
         if(q==1) //FILE HANDLING PART! HANDLE WITH CARE!
    {
        ofstream fout("Mov1.txt",ios::app);
        ofstream ftwo(user + ".txt",ios::app);
        ifstream fout1("Mov1.txt",ios::app);
        ofstream foutd("Mov1temp.txt",ios::app);
        if(fout1 && foutd)
        {
            while(getline(fout1,alias))
            {
                foutd << alias << "\n";
            }
        }
        fout << "Name: " << name << "\n";
        fout << "Movie's Name:" << moviename << "\n";
        fout << "Total amount payed: " << sum << "\n";
        fout << "\n";
        ftwo << "\nName: " << name << "\n";
        ftwo << "Movie's Name: " << moviename << "\n";
        ftwo << "Total number of seats: " << y << "\n";
        ftwo << "Total amount payed: " << sum << "\n";
        ftwo << "Theater: Cinepolis" << "\n";

    }
    else if(q==2)
    {
        ofstream fout("Mov2.txt",ios::app);
        ofstream ftwo(user + ".txt",ios::app);
        ifstream fout1("Mov2.txt",ios::app);
        ofstream foutd("Mov2temp.txt",ios::app);
        if(fout1 && foutd)
        {
            while(getline(fout1,alias))
            {
                foutd << alias << "\n";
            }
        }
        fout << "Name: " << name << "\n";
        fout << "Movie's Name:" << moviename << "\n";
        fout << "Total amount payed: " << sum << "\n";
        fout << "\n";
        ftwo << "\nName: " << name << "\n";
        ftwo << "Movie's Name: " << moviename << "\n";
        ftwo << "Total number of seats: " << y << "\n";
        ftwo << "Total amount payed: " << sum << "\n";
        ftwo << "Theater: Inox" << "\n";
        //ftwo << "\n";
    }
    else if(q==3)
    {
        ofstream fout("Mov3.txt",ios::app);
        ofstream ftwo(user + ".txt",ios::app);
        ifstream fout1("Mov3.txt",ios::app);
        ofstream foutd("Mov3temp.txt",ios::app);
        if(fout1 && foutd)
        {
            while(getline(fout1,alias))
            {
                foutd << alias << "\n";
            }
        }

        fout << "Name: " << name << "\n";
        fout << "Movie's Name:" << moviename << "\n";
        fout << "Total amount payed: " << sum << "\n";
        fout << "\n";
        ftwo << "\nName: " << name << "\n";
        ftwo << "Movie's Name: " << moviename << "\n";
        ftwo << "Total number of seats: " << y << "\n";
        ftwo << "Total amount payed: " << sum << "\n";
        ftwo << "Theater: PVR" << "\n";
        //ftwo << "\n";
    }
    }
    else
    {
        cout << "Okay! See you next time!\n";
    }
}


void account::fillm()
{
    m.insert({user,pass});
}
int account::create()
{
    cout<<"\t\t\t\t\t\tWELCOME"<<endl;
    cout<<"Enter your name"<<endl;
    getchar();
    getline(cin,name);

    cout<<endl<<"Enter your date of birth in above format only..(DD/MM/YYYY)"<<endl;
    cin>>dob;
    cout<<"Enter your contact no"<<endl;
    cin>>contactNo;
    cout<<"Create user id"<<endl;
    cin>>user;
    cout<<"Create a strong password"<<endl;
    cin>>pass;
    auto it= m.find(user);
    if(it==m.end())
    {
       m.insert({user,pass});
       return 1;
    }
    return 0;
}

int account::show(string user)
{
    string pass;
    auto it = m.find(user);
    if(it==m.end())
    {
        cout<<"Account doesn't exists"<<endl;
        return 0;
    }
    cout<<"Enter password"<<endl;
    cin>>pass;
    if(it->second==pass)
    {
       cout << "\nWelcome " << name << endl;
       time_t t;
       struct tm *ti;
       time(&t);
       ti = localtime(&t);
       cout << "Login Day, Date and Time is: " << asctime(ti);
       cout<<endl<<"User Id "<<user<<endl;
       cout<<"Dob: "<<dob<<endl;
       cout<<"Contact No "<<contactNo<<"\n"<<endl;
       return 1;
    }
    cout<<"Entered password is incorrect"<<endl;
    return 0;

}

class File:public movie
{
    fstream fio;
    ofstream fout;
    ifstream fin;
    public:

    movie obj;
    void addAccount();
    void showAccount();
    void addM();
};

void File::addM()
{
   fin.open("Account.dat",ios::binary|ios::in) ;
   while(fin.read((char*)&obj,sizeof(obj)))
   {
       obj.fillm();
   }
}

void File::addAccount()
{
        fout.open("Account.dat",ios::out|ios::binary);
        if(obj.create()){
            fout.write((char*)&obj,sizeof(obj));
        }
        else{
                cout<<endl;
            cout<<"...........Uh oh! Username already exists..try using a different Username............."<<endl;
        cout<<endl;
        }

        fout.close();
}

void File::showAccount()
{
    string user;
    cout<<"Enter the user id"<<endl;
    cin>>user;
    if(obj.show(user))
    {
        int i,j;
    while(1)
    {
        cout << "\nThe movie theaters available:\n1.Cinepolis\n2.Inox\n3.PVR\n4.Display theater History\n5.Display user history\n6.Cancel previous booking\n7.Exit\n";
    cin >> i;
    switch(i)
    {
    case 1:
        cout << "1.Deadpool 2\n";
        cout << "2.Avengers: Endgame\n";
        cout << "3.The Incredibles 2\n";
        cout << "4.Spiderman into the Spiderverse\n";
        cout << "5.Dangal\n";
        cout << "Choose the movie you want to watch\n";
        cin >> j;
        switch(j)
        {
        case 1:
            {
           obj.ticket(100,"Deadpool 2",1,i);
           break;
            }

        case 2:
            {
           obj.ticket(150,"Avengers: Endgame",1,i);
           break;
            }

        case 3:
            {
           obj.ticket(80,"Incredibles 2",1,i);
           break;
            }

        case 4:
            {
           obj.ticket(90,"Spiderman into spiderverse",1,i);
            }

           break;
        case 5:
            {
           obj.ticket(110,"Dangal",1,i);
           break;
            }

        default:
            cout << "Invalid input!\n";
        }
        break;
        case 2:
            {
        cout << "1.Deadpool 2\n";
        cout << "2.Avengers: Endgame\n";
        cout << "3.The Incredibles 2\n";
        cout << "Spiderman into the Spiderverse\n";
        cout << "Dangal\n";
        cout << "Choose the movie you want to watch\n";
        cin >> j;
        switch(j)
        {
        case 1:
            {
           obj.ticket(100,"Deadpool 2",2,i);
           break;
            }

        case 2:
            {
           obj.ticket(150,"Avengers: Endgame",2,i);
           break;
            }

        case 3:
            {
           obj.ticket(80,"Incredibles 2",2,i);
           break;
            }

        case 4:
            {
           obj.ticket(90,"Spiderman into the spiderverse",2,i);
           break;
            }

        case 5:
            {
           obj.ticket(110,"Dangal",2,i);
           break;
            }

        default:
            cout << "Invalid input!\n";
        }
        break;
    }
        case 3:
        {
                cout << "1.Deadpool 2\n";
        cout << "2.Avengers: Endgame\n";
        cout << "3.The Incredibles 2\n";
        cout << "Spiderman into the Spiderverse\n";
        cout << "Dangal\n";
        cout << "Choose the movie you want to watch\n";
        cin >> j;
        switch(j)
        {
        case 1:
            {
           obj.ticket(100,"Deadpool 2",3,i);
           break;
            }

        case 2:
            {
        obj.ticket(150,"Avengers: Endgame",3,i);
           break;
            }

        case 3:
            {
           obj.ticket(80,"Incredibles 2",3,i);
           break;
            }
        case 4:
            {
           obj.ticket(90,"Spiderman into the spiderverse",3,i);
           break;
            }
        case 5:
            {
           obj.ticket(110,"Dangal",3,i);
           break;
            }
        default:
            cout << "Invalid input!\n";
        }
         break;
            }


        case 4: {
            int q;
            cout << "Which movie theater history you want to see?\n1.Cinepolis\n2.Inox\n3.PVR\n";
            cin >> q;
            switch(q)
            {
            case 1:
                {
                   ifstream fio;
            fio.open("Mov1.txt",ios::in);
            if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
            else
            {
                cout << "File not found!\n";
                fio.close();
            }
            break;
                }
            case 2:
                {
                ifstream fio;
            fio.open("Mov2.txt",ios::in);
            if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
            else
            {
                cout << "File not found!\n";
                fio.close();
            }
            break;
                }
            case 3:
                {
                ifstream fio;
            fio.open("Mov3.txt",ios::in);
            if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
            else
            {
                cout << "File not found!\n";
                fio.close();
            }
            break;
                }
            default:
                cout << "Invalid input\n";
            }

               break;
            }
            case 5:
                 {
                ifstream fio;
            fio.open(user + ".txt",ios::in);
            if(!fio.fail())
            {
                cout << fio.rdbuf();
            fio.close();
            }
            else
            {
                cout << "No tickets booked yet!\n";
                fio.close();
            }
                 }
                break;
            case 6:
                {
            char t;
            ifstream fio;
            fio.open(user + ".txt",ios::in);
            if(!fio.fail())
            {
            cout << fio.rdbuf();
            fio.close();
            cout << "\nAre you sure you want to delete your last booking?[Y/N]\n";
            cin >> t;
            if(t=='Y'||t=='y')
            {
                remove("Mov1.txt");
                remove("Mov2.txt");
                remove("Mov3.txt");
                cout << "Your ticket has been cancelled, you will get your refund is initiated \n you should receive your it within 12 hours\n if not please contact our staff\n Looking forward to see you soon!\n";
                ofstream f(user + ".txt",ios::app);
                f << "CANCELLED";
                f << "\n";
                f.close();
                rename("Mov1temp.txt","Mov1.txt");
                rename("Mov2temp.txt","Mov2.txt");
                rename("Mov3temp.txt","Mov3.txt");
            }
            else if(t=='N'||t=='n')
            {
                cout << "Okay, no tickets cancelled\n";
            }
            else
            {
                cout << "Invalid input!\n";
            }
            }
            else
            {
                cout << "No tickets booked yet!\n";
                fio.close();
            }
                break;
                }
        case 7:
            exit(0);
            break;
        default:
            cout << "Invalid input!\n";

        }
    }

    }
}

void adLogin()
{
    file objct;
    int choice,j;
    j=1;
    while(j){
    cout<<"Menu:"<<endl;
    cout<<"1)Set Show Timings"<<endl;
    cout<<"2)Go back" << endl;
    cout<<"3)Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:objct.setShow();
        break;
    case 2:
        j=0;
        break;
    case 3:
        exit(0);
        break;
    default :
        cout<<"Invalid choice"<<endl;
        break;
    }
    }
}

int main()
{
    File objf;
    objf.addM();
    int choice;
    do{
    cout<<"MENU: "<<endl;
    cout<<"1)Create new account"<<endl;
    cout<<"2)Log in to the account(as customer)"<<endl;
    cout<<"3)Log in as a administrator"<<endl;
    cout<<"4)Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:objf.addAccount();
               break;
        case 2:objf.showAccount();
               break;
        case 3:{
               string pass="iAmAdmin";
               string checkPass;
               cout<<"Enter the Administrator Password"<<endl;
               cin>>checkPass;
               if(pass==checkPass)
               {
                   adLogin();
               }
               else{
                cout<<"Failed to login...Please try with correct password"<<endl;
               }
               break;
        }
        case 4:exit(0);
               break;
        default :cout<<"Invalid choice"<<endl;
               break;
    }
    }while(choice!=4);
    return 0;
}
