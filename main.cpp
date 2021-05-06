#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class vehicle
{
    string plt_no,colour;
    int Id;
public:
    vehicle()
    {
        plt_no="Not Found";
        colour="Not Found";
        Id=0;
    }

    void del_vehicle()
    {
        plt_no="Not Found";
        colour="Not Found";
        Id=0;
    }

    void getdata()
    {
        system("cls");
        cout<<"\n\t*************** Vehicle Details ***************"<<endl;
        cout<<"\n\tEnter Plate Number :  ";
        cin>>plt_no;
        cout<<"\n\tEnter Bike Colour :  ";
        cin>>colour;
        cout<<"\n\tEnter Bike Id :  ";
        cin>>Id;
    }
    void showdata()
    {
        cout<<" \n\tPlate Number :  "<<plt_no<<endl;
        cout<<" \n\tBike Colour :  "<<colour<<endl;
        cout<<" \n\tBike Id :  "<<Id<<endl;
    }

    void edata()
      {
          system("cls");

          int ch,a=1;

    while(a)
       {
           system("cls");

        cout<<"\n\t\t*************** EDIT DETAILS ***************"<<endl;
        cout<<"\n\t\t\t1)Plate Number :  "<<plt_no<<endl;
        cout<<"\n\t\t\t2)Colour :  "<<colour<<endl;
        cout<<"\n\t\t\t3)Id :  "<<Id<<endl;
        cout<<"\n\t\t\t4)Exit"<<endl;
        cout<<"\n\t\t--------------------------------------------";
        cout<<"\n\t\tYour Choice :   ";
        cin>>ch;

    switch(ch)
        {
            case 1: cout<<"\n\tEnter Plate Number :  ";
                    cin>>plt_no;
                    break;
            case 2: cout<<"\n\tEnter Vehicle Colour :  ";
                    cin>>colour;
                    break;
            case 3: cout<<"\n\tEnter Vehicle Id :  ";
                    cin>>Id;
                    break;
            case 4: a=0;
                    break;
            default: cout<<"\n\t\tWrong Choice"<<endl;
                            break;
        } } }
};

class bike : public vehicle
{
public:
    int days;
    int rent;
    string model,place;
    int extra;
    long long PhnNo;
public:
    bike()
    {
        days=0;
        rent=0;
        model="Not Found";
        place="Not Found";
        extra=0;
        PhnNo=0;
    }

    void del_bike()
    {
        days=0;
        rent=0;
        model="Not Found";
        place="Not Found";
        extra=0;
        PhnNo=0;
    }
};

class nongear : public bike
{
public:
    void GetNGdata()
    {
        system("cls");
        cout<<"\n\t*************** Rent Details ***************"<<endl;
        cout<<"\n\tEnter Number of Days : ";
        cin>>days;
        cout<<"\n\tEnter Rent per day : ";
        cin>>rent;
        cout<<"\n\tEnter bike model : ";
        cin>>model;
    }

    void NGdelivery()
    {
        system("cls");
        cout<<"\n\t*************** Delivery Details ***************"<<endl;
        cout<<"\n\tEnter Phone Number: ";
        cin>>PhnNo;
        cout<<"\n\tEnter Delivery Place: ";
        cin>>place;
        cout<<"\n\tEnter Delivery Price: ";
        cin>>extra;
    }

    void NGrentcalc()
    {
        cout<<"\n\tPhone number :  "<<PhnNo<<endl;
        cout<<"\n\tDays :  "<<days<<endl;
        cout<<"\n\tRent Per Day :  "<<rent<<endl;
        cout<<"\n\tBike Model : "<<model<<endl;
        cout<<"\n\tDelivery Place : "<<place<<endl;
        cout<<"\n\tDelivery Charges : "<<extra<<endl;
        cout<<"\n\tTotal Rent : "<<(rent * days) + extra <<endl;
    }

    void NGshow()
    {
        system("cls");
        int i=1;
        while(i)
        {
          cout<<"\n\t*************** Invoice ***************"<<endl;
          nongear::showdata();
          nongear::NGrentcalc();
          cout<<"\n\t--------------------------------------------";
          cout<<"\n\tEnter 0 For Main Menu :  ";
          cin>>i;
        }
    }

    void NGdelete()
        {
            system("cls");

            int f=1;
        while(f)
          {
            vehicle::del_vehicle();
            bike::del_bike();
            cout<<"\n\n\n\t************** Details Deleted **************";
            cout<<"\n\n\n\t--------------------------------------------";
            cout<<"\n\n\n\tEnter 0 For Main Menu : ";
            cin>>f;
        }}

     void NGedit()
        {
            system("cls");

            int ch,l=1;

        while(l)
           {
               system("cls");

                cout<<"\n\t******************* EDIT *******************"<<endl;
                cout<<"\n\t1)Edit Vehicle Details  "<<endl;
                cout<<"\n\t2)Edit Rent Details  "<<endl;
                cout<<"\n\t3)Edit Delivery Details  "<<endl;
                cout<<"\n\t4)Exit"<<endl;
                cout<<"\n\t--------------------------------------------";
                cout<<"\n\tYour Choice :   ";
                cin>>ch;

                switch(ch)
                {
                    case 1: vehicle::edata();
                            break;
                    case 2: nongear::editNGrent();
                            break;
                    case 3: nongear::editNGdelivery();
                            break;
                    case 4: l=0;
                            break;
                    default: cout<<"\n\t\tWrong Choice"<<endl;
                                    break;
                } } }

    void editNGrent()
    {
        system("cls");
        int ch,k=1;
         while(k)
         {
             system("cls");
             cout<<"\n\t************** EDIT RENT **************"<<endl;
             cout<<"\n\t1)Edit Number Of Days : "<<days<<endl;
             cout<<"\n\t2)Edit Rent Per Day : "<<rent<<endl;
             cout<<"\n\t3)Edit Bike Model : "<<model<<endl;
             cout<<"\n\t4)Exit"<<endl;
             cout<<"\n\t--------------------------------------------";
             cout<<"\n\t\tYour Choice :   ";
             cin>>ch;
             switch(ch)
             {
                 case 1: cout<<"\n\t\tEnter Number Of Days :  ";
                         cin>>days;
                         break;
                 case 2: cout<<"\n\t\tEnter Rent Per day :  ";
                         cin>>rent;
                         break;
                 case 3: cout<<"\n\tEnter Bike Model : ";
                         cin>>model;
                         break;
                 case 4: k=0;
                         break;
            default: cout<<"\n\t\tWrong Choice"<<endl;
                            break;
        } } }
    void editNGdelivery()
    {
        system("cls");
        int ch,h=1;

        while(h)
        {
           cout<<"\n\t************** EDIT DELIVERY **************"<<endl;
             cout<<"\n\t1)Edit Phone Number : "<<PhnNo<<endl;
             cout<<"\n\t2)Edit Delivery Place : "<<place<<endl;
             cout<<"\n\t3)Edit Delivery Price : "<<extra<<endl;
             cout<<"\n\t4)Exit"<<endl;
             cout<<"\n\t--------------------------------------------";
             cout<<"\n\t\tYour Choice :   ";
             cin>>ch;
             switch(ch)
             {
                 case 1: cout<<"\n\t\tEnter Number Of Days :  ";
                         cin>>days;
                         break;
                 case 2: cout<<"\n\t\tEnter Delivery Place :  ";
                         cin>>place;
                         break;
                 case 3: cout<<"\n\tEnter Delivery Price : ";
                         cin>>extra;
                         break;
                 case 4: h=0;
                         break;
            default: cout<<"\n\t\tWrong Choice"<<endl;
                            break;

        }
    }
    }
};

class gear : public bike
{
public:
    void GetGdata()
    {
        system("cls");
        cout<<"\n\t*************** Rent Details ***************"<<endl;
        cout<<"\n\tEnter Number of Days : ";
        cin>>days;
        cout<<"\n\tEnter Rent per day : ";
        cin>>rent;
        cout<<"\n\tEnter bike model : ";
        cin>>model;
    }

    void Gdelivery()
    {
        system("cls");
        cout<<"\n\t*************** Delivery Details ***************"<<endl;
        cout<<"\n\tEnter Phone Number: ";
        cin>>PhnNo;
        cout<<"\n\tEnter Place Of Delivery: ";
        cin>>place;
        cout<<"\n\tEnter Delivery Price: ";
        cin>>extra;
    }

    void Grentcalc()
    {
        cout<<"\n\tPhone number :  "<<PhnNo<<endl;
        cout<<"\n\tDays :  "<<days<<endl;
        cout<<"\n\tRent Per Day :  "<<rent<<endl;
        cout<<"\n\tBike Model : "<<model<<endl;
        cout<<"\n\tDelivery Place : "<<place<<endl;
        cout<<"\n\tDelivery Charges : "<<extra<<endl;
        cout<<"\n\tTotal Rent : "<<(rent * days) + extra <<endl;
    }

    void editGrent()
    {
        system("cls");
        int ch,k=1;
         while(k)
         {
             system("cls");
             cout<<"\n\t************** EDIT RENT **************"<<endl;
             cout<<"\n\t1)Edit Number Of Days : "<<days<<endl;
             cout<<"\n\t2)Edit Rent Per Day : "<<rent<<endl;
             cout<<"\n\t3)Edit Bike Model : "<<model<<endl;
             cout<<"\n\t4)Exit"<<endl;
             cout<<"\n\t--------------------------------------------";
             cout<<"\n\t\tYour Choice :   ";
             cin>>ch;
             switch(ch)
             {
                 case 1: cout<<"\n\t\tEnter Number Of Days :  ";
                         cin>>days;
                         break;
                 case 2: cout<<"\n\t\tEnter Rent Per day :  ";
                         cin>>rent;
                         break;
                 case 3: cout<<"\n\tEnter Bike Model : ";
                         cin>>model;
                         break;
                 case 4: k=0;
                         break;
            default: cout<<"\n\t\tWrong Choice"<<endl;
                            break;
        } } }
    void editGdelivery()
    {
        system("cls");
        int ch,h=1;

        while(h)
        {
           cout<<"\n\t************** EDIT DELIVERY **************"<<endl;
             cout<<"\n\t1)Edit Phone Number : "<<PhnNo<<endl;
             cout<<"\n\t2)Edit Delivery Place : "<<place<<endl;
             cout<<"\n\t3)Edit Delivery Price : "<<extra<<endl;
             cout<<"\n\t4)Exit"<<endl;
             cout<<"\n\t--------------------------------------------";
             cout<<"\n\t\tYour Choice :   ";
             cin>>ch;
             switch(ch)
             {
                 case 1: cout<<"\n\t\tEnter Phone Number :  ";
                         cin>>PhnNo;
                         break;
                 case 2: cout<<"\n\t\tEnter Delivery Place :  ";
                         cin>>place;
                         break;
                 case 3: cout<<"\n\tEnter Delivery Price : ";
                         cin>>extra;
                         break;
                 case 4: h=0;
                         break;
            default: cout<<"\n\t\tWrong Choice"<<endl;
                            break;

        }
    }
    }
    void Gshow()
    {
        system("cls");
        cout<<"\n\t*************** Invoice ***************"<<endl;
        int i=1;
        while(i)
        {
          gear::showdata();
          gear::Grentcalc();
          cout<<"\n\t--------------------------------------------";
          cout<<"\n\tEnter 0 For Main Menu :  ";
          cin>>i;
        }
    }

    void Gdelete()
        {
            system("cls");

            int f=1;
        while(f)
          {
            vehicle::del_vehicle();
            bike::del_bike();
            cout<<"\n\n\n\t************** Details Deleted **************";
            cout<<"\n\n\n\t--------------------------------------------";
            cout<<"\n\n\n\tEnter 0 For Main Menu : ";
            cin>>f;
        }}

    void Gedit()
        {
            system("cls");

            int ch,l=1;

        while(l)
           {
               system("cls");

                cout<<"\n\t******************* EDIT *******************"<<endl;
                cout<<"\n\t1)Edit Vehicle Details  "<<endl;
                cout<<"\n\t2)Edit Rent Details  "<<endl;
                cout<<"\n\t3)Edit Delivery Details  "<<endl;
                cout<<"\n\t4)Exit"<<endl;
                cout<<"\n\t--------------------------------------------";
                cout<<"\n\tYour Choice :   ";
                cin>>ch;

                switch(ch)
                {
                    case 1: vehicle::edata();
                            break;
                    case 2: gear::editGrent();
                            break;
                    case 3: gear::editGdelivery();
                            break;
                    case 4: l=0;
                            break;
                    default: cout<<"\n\t\tWrong Choice"<<endl;
                                    break;
                } } }

};

int main()
{
    system("cls");

    nongear NGcust;
    gear Gcust;
    int ch,k;

    while(1)
    {
        system("cls");

        cout<<"\n\t************** BIKE RENT *************"<<endl;
        cout<<"\n\tEnter the type of bike"<<endl;
        cout<<"\t1: Gear"<<endl;
        cout<<"\t2: NonGear"<<endl;
        cout<<"\n\t--------------------------------------";
        cout<<"\n\tYour Choice :   ";
        cin>>k;
        if(k==1)
        {
            while(1)
            {
               system("cls");
               cout<<"\n\t************** Main Menu *************"<<endl;
               cout<<"\n\t1)Enter Vehicle Details\n"<<endl;
               cout<<"\n\t2)Enter Rent Details\n"<<endl;
               cout<<"\n\t3)Enter Delivery Details\n"<<endl;
               cout<<"\n\t4)Preview Details\n"<<endl;
               cout<<"\n\t5)Edit Details\n"<<endl;
               cout<<"\n\t6)Delete Details\n"<<endl;
               cout<<"\n\t7)Exit\n"<<endl;
               cout<<"\n\t--------------------------------------";
               cout<<"\n\tYour Choice :   ";
               cin>>ch;
               switch(ch)
               {
                   case 1: Gcust.getdata();
                           break;
                   case 2: Gcust.GetGdata();
                           break;
                   case 3: Gcust.Gdelivery();
                           break;
                   case 4: Gcust.Gshow();
                           break;
                   case 5: Gcust.Gedit();
                           break;
                   case 6: Gcust.Gdelete();
                           break;
                   case 7: exit(0);
                           break;
               }
            }
        }
        if(k==2)
        {
            while(1)
            {
               system("cls");
               cout<<"\n\t************** Main Menu *************"<<endl;
               cout<<"\n\t1)Enter Vehicle Details\n"<<endl;
               cout<<"\n\t2)Enter Rent Details\n"<<endl;
               cout<<"\n\t3)Enter Delivery Details\n"<<endl;
               cout<<"\n\t4)Preview Details\n"<<endl;
               cout<<"\n\t5)Edit Details\n"<<endl;
               cout<<"\n\t6)Delete Details\n"<<endl;
               cout<<"\n\t7)Exit\n"<<endl;
               cout<<"\n\t--------------------------------------";
               cout<<"\n\t\tYour Choice :   ";
               cin>>ch;
               switch(ch)
               {
                   case 1: NGcust.getdata();
                           break;
                   case 2: NGcust.GetNGdata();
                           break;
                   case 3: NGcust.NGdelivery();
                           break;
                   case 4: NGcust.NGshow();
                           break;
                   case 5: NGcust.NGedit();
                           break;
                   case 6: NGcust.NGdelete();
                           break;
                   case 7: exit(0);
                           break;
               }
   }
  }
 }
}
