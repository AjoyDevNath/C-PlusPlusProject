/* Bank Management System using C++ */
//ajoydev38@gmail.com


#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class bank
{
    int balance = 0, deposit = 0;
    float withdraw = 0;
    string name,address,dob,email,pass,type;

public:
    void open_account();
    void deposit_amount();
    void withdraw_money();
    void display_account();
    void login_system();
};

void bank :: open_account()
{
    system("cls");

    cout<<"\nOpen Account\n";
    cout<<"Enter your full name : ";
    cin.ignore();

    getline(cin,name);

    cout<<"Enter your email :";
    getline(cin,email);

    cout<<"Enter your 6 digit pin : ";

    for(int i=0; i<6; i++)
    {
        pass[i] = getch();
        cout<<"*";
    }
    cout<<"\n";

    cout<<"Enter your address : ";
    //cin.ignore();
    getline(cin,address);

    cout<<"Enter your date of birth : ";

    cin.ignore();
    getline(cin,dob);

    cout<<"What type of account you want to open saving(S) or current(C): ";
    //cin.ignore();
    cin>>type;

    cout<<"Enter amount for deposit : ";
    //cin.ignore();
    cin>>balance;

    cout<<"Congratulation! Your account open successfully..\n";
}

void bank :: deposit_amount()
{
    system("cls");
    cout<<"\nDeposit Account\n";
    cout<<"Enter how much your deposit : ";
    cin>>deposit;
    balance +=deposit;
    cout<<"Total Balance your account : "<<balance<<"\n";
}

void bank :: withdraw_money()
{
    system("cls");

    cout<<"\n Withdraw : \n\n";
    cout<<"Enter amount to withdraw : ";
    cin>>withdraw;
    balance -= withdraw;

    if(balance >= 0)
    {
        cout<<"Now total amount is left : "<<balance<<"\n";
    }

    if(balance < 0)
    {
        cout<<"Balance : 0.00"<<endl;
        cout<<"Sorry Sir!Your balance is now : 0.00 Taka. You don't have sufficient balance in your account."<<endl;
    }
}

void bank :: display_account()
{
    system("cls");

    cout<<"Your full name : "<<name<<"\n";
    cout<<"Your address : "<<address<<"\n";
    cout<<"Email : "<<email<<"\n";

    cout<<"PIN : ";
    for (int i = 0; pass[i] != '\0'; i++)
    {
        printf("%c", pass[i]);
    }
    cout<<"\n";

    cout<<"Type of your account : "<<type<<"\n";

    if(balance < 0 )
    {
        cout<<"Your current balance : 0.00 Taka\n";
    }
    else
    {
        cout<<"Your current balance : "<<balance<<" Taka\n";
    }
}

void bank :: login_system()//kichu jinish vule ache ey phase e
{
jump:
    system("cls");
    cout<<"Enter your email : ";
    cin>>email;
    cout<<"Enter your PIN : ";

    pass.erase(); //string empty
    for(int i=0; i < 6; i++)
    {
        char ch1;
        ch1 = getch();
        pass += ch1;

        cout<<"*";
    }

    cout<<endl;
    stringstream geek(pass);
    long long int password = 0 ;
    geek>>password;
    //cout<<"Password : "<<password<<endl;

    if(password != 123456)
    {
        char x;
        cout<<"\nInvalid Password!Please try again..\n";
        cout<<"Re-enter password!Enter 'a' to re-enter password : ";
        x = getch();
        cin.ignore();


        if(x == 'a' || x == 'A')
        {
            goto jump;
        }
    }
    else if( password == 123456 )
    {
        cout<<"login successfully\n";
    }

    password = 0;
    /////
}

int main();

void bank_management()
{
    int number;
    char r;
    bank ob1;
    do
    {
        system("cls");

        cout<<"\n\n";
        cout<<"1. open account\n";
        cout<<"2. deposit account\n";
        cout<<"3. withdraw money \n";
        cout<<"4. display account\n";
        cout<<"5. login system\n";
        cout<<"6. main menu\n";
        cout<<"7. exit\n";

        cout<<"\nSelect Option from above : ";
        cin>>number;

        switch(number)
        {
        case 1:
            ob1.open_account();
            break;

        case 2:
            ob1.deposit_amount();
            break;

        case 3:
            ob1.withdraw_money();
            break;

        case 4:
            ob1.display_account();
            break;
        case 5:
            ob1.login_system();
            break;
        case 6:
            main();
            break;

        case 7:
            if(number == 7)
            {
                exit(1);
            }

        default:
            cout<<"\nThis is not exist! Try again\n";
        }
        cout<<"\nDo you want to select next option then press 'L' \n";
        cout<<"If you want to exit then press 'N' \n";

        r = getch();

        if(r == 'n' || r == 'N')
        {
            exit(0);
        }
    }
    while(r == 'l' || r == 'L');
}


void atm_management()
{
    system("cls");
    cout<<"1. User login & check balance\n";
    cout<<"2. Withdraw amount\n";
    cout<<"3. Account details\n";
    cout<<"4. Go back\n";
}

int main()
{

    //bank ob1;
    system("cls");
    cout<<"\n\n\n                               Welcome to Banking System of Code_Samuray Bank\n\n";
    cout<<"1 . ATM Management\n";
    cout<<"2 . Bank Management\n";
    cout<<"3 . Exit\n\n";
    cout<<"Enter your choice : ";
    int option;
    cin>>option;

    if(option == 1)
    {
        atm_management();
    }
    else if(option == 2)
    {
        bank_management();
    }
    else if(option == 3)
    {
        exit(0);
    }
}
