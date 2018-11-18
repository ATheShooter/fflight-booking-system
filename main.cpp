#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
#include<windows.h>


using namespace std;


// declare strings and initialize flight

string oversee[] = {"Um Al Quwain","Dibba","Fujairah","Ras Al Khaimah","Al Gharbia","AjmanI","Al Ain","Sharjah","Abu Dhabi","Dubai"};
string Local[] = {"Madrid","Paris","Copenhagen","Venice","Budapest","Prague","San Marino","Florence","Bern","Santorini",};



//struct user {

     string Name  ;  // store customer
     string password ; // store the customer password
     string address;  // store the customer address
     string D; // store the customer date of birth



//};



//used for check the password
   string N;
   string pass;


   struct passenger(){
   };




  void menue();//declare  function to display the menu
  void login();// declare function to  handle the login
  void Register(); //declare function to hand the registration
  void startSession(int choic,int menu); // declare function for each user
  void displayDomesticFlight(); // handle domestic flight
  void displayInternationalFlight(); // handle the international flight



   // define the main method where the Entire program is running
    int main(){


   int menu = 0;
   int choice;




   // using loop for login to the system
 Register();


  login();


// using loop to be able to go back to the menu

  while(menu == 0)
  {


    system("cls");
    menue();
    cin>>choice;

  // use switch to to go to differnt opreation

      startSession(choice,menu);


  }


return 0;

}



    // define the login function
   void login()
   {
      while(password != pass || Name != N)
          {
              cout<<" \n\n";
              cout<<"Enter your UserName : ";
              getline(cin,N);
              cout<<"enter your Password ";
              getline(cin,pass);
         }

   }



     // define the registration function
    void Register()
   {

    system("cls");// used to delete everything from the screen
    cout<<"\t\t\tRegister"<<endl;
    cout<<endl;

    cout<<" Name :";
    getline(cin,Name);
    cout<<"Password :";
    getline(cin,password);
    cout<<"the Address: ";
    getline(cin,address);
    cout<<"the date of the birth in the following formate DD/MM/YYYY ";
    getline(cin,D);

   }



  void menue()
  {
    cout<<"                                       choose operation                                       "<<endl;
    cout<<""<<endl;

    cout<<" \t\t\t\t1) Domestic                                                                              "<<endl;
    cout<<" \t\t\t\t\t\t2) International                                                                         "<<endl;
    cout<<" \t\t\t\t\t\t\t\t3) Display List                                                                          "<<endl;
    cout<<""<<endl;
  }





  // declare the function to start session

  void startSession(int choice,int menu){




       switch(choice)
 {


  case 1:

   displayDomesticFlight();


  break;


  //used to book international flight
    case 2:

   displayInternationalFlight();



  break;

 //display the customer who book the flight
   case 3:
  system("cls");
  cout<<"list of passenger \n\n";
      for(int i = add;i > 0;i--)
      {

      cout<<"flight NO "<<i<<endl;
     cout<<"passenger name: "<<firstname[i]<<endl;
     cout<<"passport No:"<<passport_no[i]<<endl;
     cout<<endl<<endl;


    }
    cout<<"to go to the main enter 0 ";
    cin>>menu;

  break;



  }



  }


  void displayDomesticFlight(){

          char Address[60];
        char DBO[60];
        int d ;
        int a ;

        int num, ways;

        char tip;
        int flightno[60] ;
        string passport_no[60];
        int option;

    //passenger information
   string firstname[60] ;
   char address[60];
   char DD[20];
   char DR[20];
   int Age;
   int amount;
   int add = 0;
   int ch;
   int passno;




    cout<<"choice departure place :"<<endl;
    for(int i = 0; i < 10;i++)
      cout<<i+1<<") "<<Local[i]<<"\n" ;
    cout<<endl;
    cin>>d;

    cout<<"where you want go :"<<endl;
    for(int i = 0; i < 10;i++)
      cout<<i+1<<") "<<Local[i]<<"\n" ;
    cout<<endl;
    cin>>a;
    system("cls");
    add++;
    system("cls");


          cout<<"\n\n\n";
          cout<<setw(40)<<"for one way enter   (1)"<<endl;
          cout<<setw(40)<<"for  tow ways enter (2)"<<endl;
          cin>>ways;
          system("cls");
          cin.ignore();

          cout<<"enter the number of the passengers ";
          cin>>passno;

         for(int i = 0 ; i < passno;i++)
            {


                   system("cls");
                   cin.ignore();
                   cout<<"\n\n        ::Please enter information for passenger number"<<i+1<<" :"<<endl;
                   cout<<"\nEnter passenger name: ";
                   getline(cin,firstname[add]);
                   cout<<endl;
                   cout<<"Enter passenger Age ";
                   cin>>Age;
                   cin.ignore();
                   cout<<endl<<endl;
                   cout<<"Enter address of passenger:  ";
                   cin.getline(address,60);
                   cout<<endl;
                   cout<<"Enter the Passport No"<<endl;
                   cin>>passport_no[add];
            }


       cout<<"Enter date of departure ";
       cin.getline(DD,20);
       if(ways == 2)
            {
                cout<<"Enter date of return ";
                cin.getline(DR,20);
            }

       cout<<endl;




       cout<<endl;

       for(int i = 0 ; i < passno;i++)
            {


                cout<<"              AIRLINE TICKET for passenger number "<<i+1<<"                             "<<endl;
                cout<<"the typ of passenger is ";
                if(Age<=5)
                    cout<<"child"<<endl;
                  else if(Age>5 && Age <16)
                    cout<<"infant "<<endl;
                  else if(Age>=16)
                     cout<<"adult "<<endl;

                  cout<<endl;
                  cout<<"|passport No. :"<<passport_no<<"                                           "<<endl;
                  cout<<endl;

                  cout<<"|Name :"<<firstname<<"                                                    "<<endl;
                  cout<<"|                                                                         "<<endl;
                  cout<<"|Address :"<<address<<"                                                   "<<endl;
                  cout<<endl;
                     cout<<"|flight Information :                                                     "<<endl;
                  cout<<"|date of Departure "<<DD<<"                                                               "<<endl;
                  cout<<"|BOING 747                                                                "<<endl;
                  if(tip == 'i')
                  {

                  cout<<"|Depart :"<<oversee[a]<<"                                                      "<<endl;
                  cout<<"|Arrive :"<<oversee[d]<<"                                                       "<<endl;
                  }
                  else if(tip == 'l')
                  {
                  cout<<"|Depart :"<<Local[a]<<"                                                      "<<endl;
                  cout<<"|Arrive :"<<Local[d]<<"                                                       "<<endl;
                  }
                  cout<<endl;
                  cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
                  cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;

                  cout<<endl;
                  cout<<"Fare is 2000RM                                                            "<<endl;
                  cout<<"Government Service Tax (GST) 200                                          "<<endl;
         }



    cout<<"\n\nthe total price for all passenger is"<<(passno * 2200);
    if(ways == 2)
     {
        for(int i = 0 ; i < passno;i++)
         {


                cout<<"              AIRLINE TICKET for passenger number "<<i+1<<"                             "<<endl;

                  cout<<"|the type of passenger  ";
                  if(Age<=5)
                    cout<<"child"<<endl;
                  else if(Age>5 && Age <16)
                    cout<<"infant "<<endl;
                  else if(Age >= 16)
                     cout<<"adult "<<endl;

                  cout<<"|TowWays flight                                                           "<<endl;
                  cout<<endl;
                  cout<<"|Resevation No. :"<<passport_no<<"                                         "<<endl;
                  cout<<endl;
                  cout<<"|Passenger Information :                                                  "<<endl;
                  cout<<"|Name :"<<firstname<<"                                                    "<<endl;
                  cout<<"|                                                                         "<<endl;
                  cout<<"|Address :"<<address<<"                                                   "<<endl;
                  cout<<endl;
                  cout<<"|flight Information :                                                     "<<endl;
                  cout<<"| first flight                                                            "<<endl;
                  cout<<"|Date of departure "<<DD<<"                                                "<<endl;
                  cout<<"|BOING 747                                                                "<<endl;
         }
          cout<<"___________________________________________________________________________"<<endl;
          cout<<"Fare is 2000RM                                                            "<<endl;
          cout<<"Government Service Tax (GST) 200                                          "<<endl;

          cout<<"\n\nthe total price for all passenger is"<<(passno * 2200);
          if (tip == 'i')
            {

              cout<<"|Depart :"<<oversee[a]<<"                                                      "<<endl;
              cout<<"|Arrive :"<<oversee[d]<<"                                                       "<<endl;
            }
          else if(tip == 'l')
              {
              cout<<"|Depart :"<<Local[a]<<"                                                      "<<endl;
              cout<<"|Arrive :"<<Local[d]<<"                                                       "<<endl;
              }

          cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
          cout<<"___________________________________________________________________________"<<endl;
          cout<<"| second  flight                                                            "<<endl;
          cout<<"|date of Return  :"<<DR<<"                                                   "<<endl;
          cout<<"|BOING 747                                                                "<<endl;
          if (tip == 'i')
              {
              cout<<"|Depart :"<<oversee[d]<<"                                                      "<<endl;
              cout<<"|Arrive :"<<oversee[a]<<"                                                       "<<endl;
              }
          else if (tip == 'l')
              {
              cout<<"|Depart :"<<Local[d]<<"                                                      "<<endl;
              cout<<"|Arrive :"<<Local[a]<<"                                                       "<<endl;
              }
          cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
          cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
          cout<<"___________________________________________________________________________"<<endl;
          cout<<"Fare is 2000RM                                                            "<<endl;
          cout<<"Government Service Tax (GST) 200                                          "<<endl;
          cout<<"\n\nthe total price for all passenger is"<<(passno * 2200);
           }



             int amount;

             cout<<"\t\t\t Ticket conformation \n\n";

             pass = " ";
             N = " ";


               while(password != pass || Name != N)
                  {
                      cout<<"you have entered wrong value \n\n";
                      cout<<"Enter your UserName : ";
                      getline(cin,N);
                      cout<<"enter your Password ";
                      getline(cin,pass);

                  }


             cout<<"make payment please enter the amount ";
             cin>>amount;
             while(amount<(passno*2200))
              {

                cout<<"low amount please insert again ";
                cin>>amount;

              }
            if(amount > passno*2200)
                cout<<"successful payment \nyou got extra "<<amount - 2200<<" balance "<<endl;
            else
              cout<<"successful payment "<<endl;

            cout<<"flight No ("<<flightno<<") is conform "<<endl;
            cout<<"to go to menu enter 0  ";
            cin>>menu;


          }



  void displayInternationalFlight(){

          char Address[60];
        char DBO[60];
        int d ;
        int a ;

        int num, ways;

        char tip;
        int flightno[60] ;
        string passport_no[60];
        int option;

    //passenger information
   string firstname[60] ;
   char address[60];
   char DD[20];
   char DR[20];
   int Age;
   int amount;
   int add = 0;
   int ch;
   int passno;




        cout<<"choice departure place :"<<endl;
        for(int i = 0; i < 10;i++)
          cout<<i<<") "<<oversee[i]<<"\n" ;
        cout<<endl;
        cin>>d;


       cout<<"where you want go :"<<endl;
       for(int i = 0; i < 10;i++)
          cout<<i<<") "<<oversee[i]<<"\n" ;
       cout<<endl;
       cin>>a;
       system("cls");
       add++;
       system("cls");


  cout<<"\n\n\n";
  cout<<setw(40)<<"for one way enter   (1)"<<endl;
  cout<<setw(40)<<"for  tow ways enter (2)"<<endl;
  cin>>ways;
  system("cls");

  cout<<"enter the quantity of passenger ";
  cin>>passno;
  cin.ignore();



  for(int i = 0 ; i < passno;i++)
  {

  cout<<"\n\n        ::Please enter information for passenger number"<<i+1<<" :"<<endl;
  cout<<"\nEnter passenger name: ";
   cin>>firstname[add];
   cout<<endl;
   cout<<"Enter passenger Age : ";
   cin>>Age;

   cin.ignore();

   cout<<endl<<endl;
   cout<<"Enter address of passenger ";
   cin.getline(address,60);
   cout<<endl;
   cout<<"Enter the PassportNO "<<endl;
   cin>>passport_no[add];

  }
   cout<<"Enter date of departure ";
   cin.getline(DD,20);
   if(ways == 2)
   {
    cout<<"Enter date of return ";
    cin.getline(DR,20);
   }
   cout<<endl;




cout<<"In which class you want to travel?"<<endl;

   cout<<"Make your choice"<<endl<<endl;

   cout<<"\n\n\n\n\n\n";



   cout<<endl;


    for(int i = 0 ; i < passno;i++)
 {


cout<<"              AIRLINE TICKET for passenger number "<<i+1<<"                             "<<endl;
if(Age<=5)
    cout<<"child"<<endl;
  else if(Age>5 && Age <16)
    cout<<"infant "<<endl;
  else if(Age >= 16)
     cout<<"adult "<<endl;

  cout<<endl;
  cout<<"|passport No. :"<<passport_no<<"                                           "<<endl;
  cout<<endl;

  cout<<"|Name :"<<firstname<<"                                                    "<<endl;
  cout<<"|                                                                         "<<endl;
  cout<<"|Address :"<<address<<"                                                   "<<endl;
  cout<<endl;
 }
     cout<<"|flight Information :                                                     "<<endl;
  cout<<"|date of Departure "<<DD<<"                                                               "<<endl;
  cout<<"|BOING 747                                                                "<<endl;
  if(tip == 'i')
  {

  cout<<"|Depart :"<<oversee[a]<<"                                                      "<<endl;
  cout<<"|Arrive :"<<oversee[d]<<"                                                       "<<endl;
  }
  else if(tip == 'l')
  {
  cout<<"|Depart :"<<Local[a]<<"                                                      "<<endl;
  cout<<"|Arrive :"<<Local[d]<<"                                                       "<<endl;
  }
  cout<<endl;
  cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
  cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;

  cout<<endl;
  cout<<"Fare is 2000RM                                                            "<<endl;

  cout<<"Government Service Tax (GST) 200                                          "<<endl;
  cout<<"\n\nTotal price for all passenger is "<<(passno*2200);



      if(ways == 2)
   {


    for(int i = 0 ; i < passno;i++)
 {


  cout<<"              AIRLINE TICKET for passenger number "<<i+1<<"                             "<<endl;

  cout<<"                                   TICKET                                 "<<endl;

  cout<<"|passenger Quantity ";

  cout<<"|TowWays flight                                                           "<<endl;
  cout<<endl;
  cout<<"|Resevation No. :"<<passport_no<<"                                         "<<endl;
  cout<<endl;
  cout<<"|Passenger Information :                                                  "<<endl;
  cout<<"|Name :"<<firstname<<"                                                    "<<endl;
  cout<<"|                                                                         "<<endl;
  cout<<"|Address :"<<address<<"                                                   "<<endl;
  cout<<endl;
 }
  cout<<"|flight Information :                                                     "<<endl;
  cout<<"| first flight                                                            "<<endl;
  cout<<"|Date of departure "<<DD<<"                                                "<<endl;
  cout<<"|BOING 747                                                                "<<endl;
  cout<<endl;
  cout<<"Fare is 2000RM                                                            "<<endl;
  cout<<"Government Service Tax (GST) 200                                          "<<endl;


  if (tip == 'i')
  {

  cout<<"|Depart :"<<oversee[a]<<"                                                      "<<endl;
  cout<<"|Arrive :"<<oversee[d]<<"                                                       "<<endl;
  }
  else if(tip == 'l')
  {
  cout<<"|Depart :"<<Local[a]<<"                                                      "<<endl;
  cout<<"|Arrive :"<<Local[d]<<"                                                       "<<endl;
  }

  cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
  cout<<"___________________________________________________________________________"<<endl;
  cout<<"| second  flight                                                            "<<endl;
  cout<<"|date of Return  :"<<DR<<"                                                   "<<endl;
  cout<<"|BOING 747                                                                "<<endl;
  if (tip == 'i')
  {
  cout<<"|Depart :"<<oversee[d]<<"                                                      "<<endl;
  cout<<"|Arrive :"<<oversee[a]<<"                                                       "<<endl;
  }
  else if (tip == 'l')
  {
  cout<<"|Depart :"<<Local[d]<<"                                                      "<<endl;
  cout<<"|Arrive :"<<Local[a]<<"                                                       "<<endl;
  }
  cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
  cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
  cout<<"___________________________________________________________________________"<<endl;
  cout<<"Fare is 2000RM                                                            "<<endl;
  cout<<"Government Service Tax (GST) 200                                          "<<endl;
  cout<<"\n\nTotal price for all passenger is "<<(passno*2200);
   }





     cout<<"\t\t\t Ticket conformation \n\n";
    pass ="00";
     N ="00";

       while(password != pass || Name != N)
          {

              cout<<"you have entered wrong value \n\n";
              cout<<"Enter your UserName : ";
              getline(cin,N);
              cout<<"enter your Password ";
              getline(cin,pass);

          }


     cout<<"make payment please enter the amount ";
     cin>>amount;
     while(amount<(passno*2200))
     {

        cout<<"low amount please insert again ";
        cin>>amount;

    }
    if(amount > (passno*2200))
        cout<<"successful payment \nyou got extra "<<amount - 2200<<" balance "<<endl;
    else
      cout<<"successful payment "<<endl;

    cout<<"flight No ("<<flightno<<") is conform "<<endl;
    cout<<"ito go to menu enter 0 ";
    cin>>menu;


  }
