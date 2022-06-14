#include<iostream>
#include<string>
using namespace std;
int printbill(int mealChoice , int drinkChoice, string meal, string drink, int bill);
int main()
{
    int meal, drink, bill;

    string meal1="Fish served with rice         500";
    string meal2="Beef served with Ugali        150";
    string meal3="Chicken served with chapati   300";
    string drink1="Fruit  juice                 100";
    string drink2="Soda                          50";
    string drink3="Lemon water                   40";
    string drink4="Tea                           30";
    cout<<"\t\t ******** WELCOME TO ZETECH RESTURANT ********: "<<endl;
    cout<<"\t\t\t ******** TODAYS SPECIAL ********: " <<endl;
    cout<<"\t\t ITEM NUMBER    NAME                    UNITPRICE" <<endl;
    cout<<"\t\t 1.             "<<meal1<<endl;
    cout<<"\t\t 2.             "<<meal2<<endl;
    cout<<"\t\t 3.             "<<meal3<<endl;
    cout<<"\n\t\t\t ******** DRINKS ********" <<endl;
    cout<<"\t\t 1.             "<<drink1<<endl;
    cout<<"\t\t 2.             "<<drink2<<endl;
    cout<<"\t\t 3.             "<<drink3<<endl;
    cout<<"\t\t 4.             "<<drink4<<endl;

    cout<<"\n\t\t  Select any meal and drink: " << endl;
    cin>>meal;
    cin>>drink;
    system("cls");

    if(meal == 1 && drink == 1)
    {
        bill = 500 + 100;
        printbill(meal, drink, meal1, drink1, bill);
    }
    else if(meal ==1 && drink ==2)
    {
        bill = 500 + 50;
        printbill(meal, drink, meal1, drink2, bill);
    }
    else if(meal ==1 && drink ==3)
    {
        bill = 500 + 40;
        printbill(meal, drink, meal3, drink1, bill);
    }
    else if(meal ==1 && drink ==4)
    {
        bill = 500+ 30;
        printbill(meal, drink, meal1, drink4, bill);
    }
    else if(meal ==2 && drink ==1)
    {
        bill = 150 + 100;
        printbill(meal, drink, meal2, drink1, bill);
    }
    else if(meal ==2 && drink ==2)
    {
        bill = 150 + 50;
        printbill(meal, drink, meal2, drink2, bill);
    }
    else if(meal ==2 && drink ==3)
    {
        bill = 150 + 40;
        printbill(meal, drink, meal2, drink3, bill);
    }
    else if(meal ==2 && drink ==4)
    {
        bill = 150 + 30;
        printbill(meal, drink, meal2, drink4, bill);
    }
    else if(meal ==3 && drink ==1)
    {
        bill = 300 + 100;
        printbill(meal, drink, meal3, drink1, bill);
    }
    else if(meal ==3 && drink ==2)
    {
        bill = 300 + 50;
        printbill(meal, drink, meal3, drink2, bill);
    }
    else if(meal ==3 && drink ==3)
    {
        bill = 300 + 40;
        printbill(meal, drink, meal3, drink3, bill);

    }
    else if(meal ==3 && drink ==4)
    {
        bill = 300 + 30;
        printbill(meal, drink, meal3, drink4, bill);
    }
    else
    {
        cout<<"INVALID REQUEST";
    }
    return 0;
}


int printbill(int mealChoice , int drinkChoice, string meal, string drink, int bill)
{
    cout<<"\n\t\t\t ******** BILL ********" <<endl;
    cout<<"\t\t "<<mealChoice<<".             "<<meal<<endl;
    cout<<"\t\t "<<drinkChoice<<".             "<<drink <<endl;
    cout<<"\t\t total                              "<<bill <<endl;
}


