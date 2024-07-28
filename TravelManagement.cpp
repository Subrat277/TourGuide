#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;

void menu();//main menu function prototype
void menu(string a);
class ManageMenu
{
protected:
    string userName; //hide admin name

public:

    //virtual void menu(){}

    ManageMenu()
    {
        system("color 0A"); //change terminal color
        cout << "\n\n\n\n\n\n\n\n\n\t  Enter Your Name to Continue as an Admin: ";
        cin >> userName;
        system("CLS");
        menu(); //call to main function to load after executing the constructr
    }

    ~ManageMenu(){} //de
};

struct details {
        string pass,name,age,address,phn,gender;
        };
map<string,details>accounts; 
class Customer
{
public:
    string name, gender, address;
    int age, mobileNo, menuBack;
    static int cusID;
    char all[999];

    void signup() {
        string username,pass;
        cout<<"Enter Your Username :\n";
        cin>>username;
        cout<<"Enter Password :\n";
        cin>>pass;
        int x=0;
        for(auto it : accounts) {
            if(it.first==username) {
                cout<<"This Username is not available. Kindly go back to the main menu and use a different Username.\n";
                cout<<"Press 1 to go to main menu.\n";
                cin>>x;
                system("CLS");
                menu();
            }
        }
        if(x==0) {
        accounts[username].pass=pass;
        cout<<"Congrats! You have Sucessfully registered at our portal. Press 1 fill your further details: \n";
        cin>>x;
            cout << "Enter Name: ";
            cin >> accounts[username].name;
            cout << "Enter Age: ";
            cin >> accounts[username].age;
            cout << "Enter Mobile Number: ";
            cin >> accounts[username].phn;
            cout << "Address: ";
            cin >> accounts[username].address;
            cout << "Gender: ";
            cin >> accounts[username].gender;
            cout<<"Now you can Press 1 to go to main menu and start your bookings.Thank you\n";
            cin>>x;
            system("CLS");
            menu(accounts[username].name);
        }
    }

    void login() {
        string username,pass;
        cout<<"Enter Your Username :\n";
        cin>>username;
        cout<<"Enter Password :\n";
        cin>>pass;  
        int x=0;
            if(accounts.find(username)!=accounts.end()) {
                if(accounts[username].pass==pass) {
                   cout<<"Congrats! You have Sucessfully logged in at our portal. Press 1 to go to the main menu and start your bookings.\n"; 
                           cin>>x;
                           system("CLS");
                           menu(accounts[username].name);
                }
                else {
                    cout<<"Wrong Password! Press 1 to go back to main menu.\n";
                    cin>>x;
                    system("CLS");
                    menu();
                }
            }
        else {
            cout<<"No account exists with such username! Press 1 to go back to main menu.\n";
            cin>>x;
            system("CLS");
            menu();
        }
    }
    void getdetails(string a) {
        int x1;
    if(accounts.find(a)==accounts.end()) {
        cout<<"Incorrect Username! Try again.\n";
        cout<<"Press 1 to go to main menu.\n";
        cin>>x1;
        menu(accounts[a].name);
    }
    cout<<"Name : "<<accounts[a].name<<endl;
    cout<<"Age :"<<accounts[a].age<<endl;
    cout<<"Phone :"<<accounts[a].phn<<endl;
    cout<<"Address :"<<accounts[a].address<<endl;
    cout<<"Gender :"<<accounts[a].gender<<endl;
    }
};

int Customer::cusID;

class Cabs
{
public:
    int cabChoice;
    int kilometers;
    float cabCost;
    static float lastCabCost;

        void cabDetails(string user)
    {
        cout << "We collaborated with fastest, safest, and smartest cab services in Silchar" << endl;
        cout<<"List of locations our vehicles can take you to :\n";
        cout<<"1. NIT Silchar \n";
        cout<<"2. Silchar Medical College and Hospital \n";
        cout<<"3. ISKCON Silchar Temple \n";
        cout<<"4. Barak Valley Caves \n";
        cout<<"5. Silchar Wildlife Sanctuary \n";
        cout<<"Select the location from above :\n";
        int loc;
        cin>>loc;
        system("CLS");
        if(loc==1) {
            cout<<"Select your current stay from the following :\n";
            string hotelNo[] = {"BARAK CONTINENTAL", "CACHAR CLUB", "SAGARIKA RESORT"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }
        int hotel;cin>>hotel;
        system("CLS");
        cout<<"Vehicles currently available for your departure and its cost based on the distance between of your current stay and location to be visited:\n";
        if(hotel==1) {
        cout<<"1. Luxury Car(for more than two people) - Rs.1000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.500"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.300"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=1000;
        }
        else if(vehicle==2) {
        lastCabCost=500;
        }
        else {
        lastCabCost=300;
        }
        }
        else if(hotel=2) {
        cout<<"1. Luxury Car(for more than two people) - Rs.5000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.1000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.600"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=5000;
        }
        else if(vehicle==2) {
        lastCabCost=1000;
        }
        else {
        lastCabCost=600;
        }
        }
        else {
        cout<<"1. Luxury Car(for more than two people) - Rs.10000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.5000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.3000"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=10000;
        }
        else if(vehicle==2) {
        lastCabCost=5000;
        }
        else {
        lastCabCost=3000;
        }
        }
        }
        else if(loc==2) {
            cout<<"Select your current stay from the following :\n";
            string hotelNo[] = {"BARAK CONTINENTAL", "CACHAR CLUB", "SAGARIKA RESORT"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }
        int hotel;cin>>hotel;
        system("CLS");
        cout<<"Vehicles currently available for your departure and its cost based on the distance between of your current stay and location to be visited:\n";
        if(hotel==1) {
        cout<<"1. Luxury Car(for more than two people) - Rs.1000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.500"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.300"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=1000;
        }
        else if(vehicle==2) {
        lastCabCost=500;
        }
        else {
        lastCabCost=300;
        }
        }
        else if(hotel=2) {
        cout<<"1. Luxury Car(for more than two people) - Rs.5000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.1000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.600"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=5000;
        }
        else if(vehicle==2) {
        lastCabCost=1000;
        }
        else {
        lastCabCost=600;
        }
        }
        else {
        cout<<"1. Luxury Car(for more than two people) - Rs.10000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.5000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.3000"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=10000;
        }
        else if(vehicle==2) {
        lastCabCost=5000;
        }
        else {
        lastCabCost=3000;
        }
        }
        }
        else if(loc==3) {
            cout<<"Select your current stay from the following :\n";
            string hotelNo[] = {"BARAK CONTINENTAL", "CACHAR CLUB", "SAGARIKA RESORT"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }
        int hotel;cin>>hotel;
        system("CLS");
        cout<<"Vehicles currently available for your departure and its cost based on the distance between of your current stay and location to be visited:\n";
        if(hotel==1) {
        cout<<"1. Luxury Car(for more than two people) - Rs.1000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.500"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.300"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=1000;
        }
        else if(vehicle==2) {
        lastCabCost=500;
        }
        else {
        lastCabCost=300;
        }
        }
        else if(hotel=2) {
        cout<<"1. Luxury Car(for more than two people) - Rs.5000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.1000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.600"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=5000;
        }
        else if(vehicle==2) {
        lastCabCost=1000;
        }
        else {
        lastCabCost=600;
        }
        }
        else {
        cout<<"1. Luxury Car(for more than two people) - Rs.10000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.5000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.3000"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=10000;
        }
        else if(vehicle==2) {
        lastCabCost=5000;
        }
        else {
        lastCabCost=3000;
        }
        }
        }
        else if(loc==4) {
            cout<<"Select your current stay from the following :\n";
            string hotelNo[] = {"BARAK CONTINENTAL", "CACHAR CLUB", "SAGARIKA RESORT"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }
        int hotel;cin>>hotel;
        system("CLS");
        cout<<"Vehicles currently available for your departure and its cost based on the distance between of your current stay and location to be visited:\n";
        if(hotel==1) {
        cout<<"1. Luxury Car(for more than two people) - Rs.1000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.500"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.300"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=1000;
        }
        else if(vehicle==2) {
        lastCabCost=500;
        }
        else {
        lastCabCost=300;
        }
        }
        else if(hotel=2) {
        cout<<"1. Luxury Car(for more than two people) - Rs.5000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.1000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.600"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=5000;
        }
        else if(vehicle==2) {
        lastCabCost=1000;
        }
        else {
        lastCabCost=600;
        }
        }
        else {
        cout<<"1. Luxury Car(for more than two people) - Rs.10000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.5000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.3000"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=10000;
        }
        else if(vehicle==2) {
        lastCabCost=5000;
        }
        else {
        lastCabCost=3000;
        }
        }
        }
        else if(loc==5) {
            cout<<"Select your current stay from the following :\n";
            string hotelNo[] = {"BARAK CONTINENTAL", "CACHAR CLUB", "SAGARIKA RESORT"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }
        int hotel;cin>>hotel;
        system("CLS");
        cout<<"Vehicles currently available for your departure and its cost based on the distance between of your current stay and location to be visited:\n";
        if(hotel==1) {
        cout<<"1. Luxury Car(for more than two people) - Rs.1000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.500"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.300"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=1000;
        }
        else if(vehicle==2) {
        lastCabCost=500;
        }
        else {
        lastCabCost=300;
        }
        }
        else if(hotel=2) {
        cout<<"1. Luxury Car(for more than two people) - Rs.5000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.1000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.600"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=5000;
        }
        else if(vehicle==2) {
        lastCabCost=1000;
        }
        else {
        lastCabCost=600;
        }
        }
        else {
        cout<<"1. Luxury Car(for more than two people) - Rs.10000"<<endl;
        cout<<"2. Standard Car(for more than two people) - Rs.5000"<<endl;
        cout<<"3. Bike(for less than or equal to two people) - Rs.3000"<<endl;
        cout<<"Enter your choice : \n";
        int vehicle;cin>>vehicle;
        if(vehicle==1) {
        lastCabCost=10000;
        }
        else if(vehicle==2) {
        lastCabCost=5000;
        }
        else {
        lastCabCost=3000;
        }
        }
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu(user);
        }
        cout << "\nPress 1 to Redirect Main Menu: ";
        int temp;
        cin >> temp;
        system("CLS");
        if(temp == 1){
            menu(user);
        }
        else{
            menu(user);
        }
    }
};

float Cabs::lastCabCost;

class Booking
{
public:
    int choiceHotel;
    int packChoice1;
    int gotoMenu;
    static float hotelCost;

    void hotels(string user)
    {
        string hotelNo[] = {"BARAK CONTINENTAL", "CACHAR CLUB", "SAGARIKA RESORT"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }

        cout << "\nCurrently we collaborated with above hotels!" << endl;

        cout << "Press any key to back or\nEnter Number of the hotel you want to book or see details: ";
        cin >> choiceHotel;

        system("CLS");

        if(choiceHotel == 1){
            cout << "-------WELCOME TO HOTEL BARAK CONTINENTAL-------\n" << endl;

            cout << "Affordable Comfort, Unforgettable Memories" << endl;

            cout << "Packages offered by HOTEL BARAK CONTINENTAL:\n" << endl;

            cout << "1. Standard Package" << endl;
            cout << "\tAll basic facilities you need just for: Rs.2500.00" << endl;
            cout << "2. Premium Package" << endl;
            cout << "\tEnjoy Premium: Rs.5000.00" << endl;
            cout << "3. Luxury Package" << endl;
            cout << "\tLive a Luxury at BARAK CONTINENTAL: Rs.10000.00" << endl;


            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 2500.00;
                cout << "\nYou have successfully booked Standard Pack at BARAK CONTINENTAL" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Premium Pack at BARAK CONTINENTAL" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked Luxury Pack at BARAK CONTINENTAL" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels(user);

            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu(user);
            }
            else{
                menu(user);
            }
        }
        else if(choiceHotel == 2){
            cout << "-------WELCOME TO HOTEL CACHAR CLUB-------\n" << endl;

            cout << "Discover Luxury Amidst Nature's Embrace" << endl;

            cout << "Packages Offered by CACHAR CLUB:\n" << endl;


            cout << "1. Standard Package" << endl;
            cout << "\tAll basic facilities you need just for: Rs.5000.00" << endl;
            cout << "2. Premium Package" << endl;
            cout << "\tEnjoy Premium: Rs.15000.00" << endl;
            cout << "3. Luxury Package" << endl;
            cout << "\tLive a Luxury at CACHAR CLUB: Rs.30000.00" << endl;


            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard Pack at CACHAR CLUB" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Premium Pack at CACHAR CLUB" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                hotelCost = 30000.00;
                cout << "\nYou have successfully booked Luxury Pack at CACHAR CLUB" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels(user);

            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu(user);
            }
            else{
                menu(user);
            }
        }
        else if(choiceHotel == 3){
            cout << "-------WELCOME TO SAGARIKA RESORT-------\n" << endl;
            cout << "Indulge in Opulence, Where Every Moment Sparkles" << endl;


            cout << "1. Standard Package" << endl;
            cout << "\tAll basic facilities you need just for: Rs.10000.00" << endl;
            cout << "2. Premium Package" << endl;
            cout << "\tEnjoy Premium: Rs.50000.00" << endl;
            cout << "3. Luxury Package" << endl;
            cout << "\tLive a Luxury at SAGARIKA RESORT: Rs.100000.00" << endl;


            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked Standard Pack at SARGARIKA RESORT" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                hotelCost = 50000.00;
                cout << "\nYou have successfully booked Premium Pack at SARGARIKA RESORT" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                hotelCost = 100000.00;
                cout << "\nYou have successfully booked Luxury Pack at SARGARIKA RESORT" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels(user);

            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu(user);
            }
            else{
                menu(user);
            }
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu(user);
        }
    }
};

float Booking::hotelCost;


class Chargers : public Booking, Cabs, Customer
{

public:

    void printBill()
    {
        ofstream outf("receipt.txt");
        {
            outf << "                                                   -----THE SILCHAR GUIDE-----" << endl;                                                     
            outf << "                                                   -------------Receipt-------------" << endl;
            outf << "                                                   ___________" << endl;

            outf << "                                                   Customer ID: " << Customer::cusID << endl << endl;
            outf << "                                                   Description\t\t Total" << endl;
            outf << "                                                   Hotel cost:\t\t " << fixed << setprecision(2) << Booking::hotelCost << endl;
            outf << "                                                   Travel (cab) cost:\t " << fixed << setprecision(2) << Cabs::lastCabCost << endl;
            outf << "                                                   ___________" << endl;
            outf << "                                                   Total Charge:\t\t" << fixed << setprecision(2) << Booking::hotelCost+Cabs::lastCabCost<< endl;
            outf << "                                                   ___________" << endl;
            outf << "                                                   ------------THANK YOU------------" << endl;
        }
        outf.close();
    }                            

    void showBill()
    {
        ifstream inf("receipt.txt");
        {
            if(!inf)
            {
                cout << "File Error!" << endl;
            }
            while(!(inf.eof()))
            {

                inf.getline(all, 999);
                cout << all << endl;
            }
        }
        inf.close();
    }
};

void menu()
{

    int mainChoice;
    int inChoice;
    int gotoMenu;
    cout << "\t\t                                   THE SILCHAR GUIDE" << endl;
    cout << "                                        ******OUR SERVICES*****" << endl;
    cout << "\t                                 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "               \t                        |\t\t\t\t\t|" << endl;
    cout << "                                     \t|\tCustomer Portal     -> 1\t|" << endl;
    cout << "                                     \t|\tBook Cabs           -> 2\t|" << endl;
    cout << "                                     \t|\tBook Hotels         -> 3\t|" << endl;
    cout << "                                     \t|\tCharges & Bill      -> 4\t|" << endl;
    cout << "                                     \t|\tExit                -> 5\t|" << endl;
    cout << "                                     \t|\t\t\t\t\t|" << endl;
    cout << "                                     \t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter Choice: ";
    cin >> mainChoice;

    system("CLS");

    Customer a2;

    if(mainChoice == 1){
        cout << "------Customer Portal------\n" << endl;
        cout << "1. Sign Up"<< endl;
        cout << "2. Log in"<< endl;
        cout <<"3. Back"<<endl;

        cout << "\nEnter choice: ";
        cin >> inChoice;

        system("CLS");
        if(inChoice == 1){
            a2.signup();
        }
        else if(inChoice == 2){
            a2.login();
        }
        else if(inChoice==3) menu();
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu == 1){
            menu();
        }
        else{
            menu();
        }
    }
    else if(mainChoice == 2){
        cout<<"Kindly Login or Sign Up to avail this service. Thank You.\n";
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        menu();
    }
    else if(mainChoice == 3){
        cout<<"Kindly Login or Sign Up to avail this service. Thank You.\n";
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        menu();
    }
    else if(mainChoice == 4) {
        cout<<"Kindly Login or Sign Up to avail this service. Thank You.\n";
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        menu();
    }
    else if(mainChoice == 5){
        cout << "\n\n\t--GOOD-BYE!--" << endl;
        Sleep(1100);
        system("CLS");
        ManageMenu();
    }
}    

void menu(string user) 
{

    int mainChoice;
    int inChoice;
    int gotoMenu;
    cout << "\t\t                                   THE SILCHAR GUIDE                 +-----+ " << endl;
    cout << "                                        ******OUR SERVICES*****      |  O  |" << endl;
    cout << "\t                                 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _       | /|"<<"\\"<<" |"<< endl;
    cout << "               \t                        |\t\t\t\t\t|      +-----+" << endl;
    cout << "                                     \t|\tCustomer Details    -> 1\t|      " <<user<< endl;
    cout << "                                     \t|\tBook Cabs           -> 2\t|" << endl;
    cout << "                                     \t|\tBook Hotels         -> 3\t|" << endl;
    cout << "                                     \t|\tCharges & Bill      -> 4\t|" << endl;
    cout << "                                     \t|\tLog Out             -> 5\t|" << endl;
    cout << "                                     \t|\t\t\t\t\t|" << endl;
    cout << "                                     \t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter Choice: ";
    cin >> mainChoice;

    system("CLS");

    Customer a2; 
    Cabs a3;
    Booking a4;
    Chargers a5;

    if(mainChoice == 1){
        cout << "------Customer Details------\n" << endl;
        cout << "1. My Account"<< endl;
        cout << "2. Back"<< endl;

        cout << "\nEnter choice: ";
        cin >> inChoice;

        system("CLS");
        if(inChoice == 1){
            cout<<"Enter your Username : \n";
            string temp;cin>>temp;
            a2.getdetails(temp);
        }
        else if(inChoice == 2){
            menu(user);
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu(user);
        }
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu == 1){
            menu(user);
        }
        else{
            menu(user);
        }
    }
    else if(mainChoice == 2){
        system("CLS");
        a3.cabDetails(user);
    }
    else if(mainChoice == 3){
        system("CLS");
        cout << "--> Book a Luxury Hotel using the System <--\n" << endl;
        a4.hotels(user);
    }
    else if(mainChoice == 4){
        system("CLS");
        cout << "-->Get your receipt<--\n" << endl;
        a5.printBill();
        cout << "Your receipt is already printed you can get it from file path\n" << endl;
        cout << "to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";
        cin >> gotoMenu;
        if(gotoMenu == 1){
            system("CLS");
            a5.showBill();
            cout << "Press 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu(user);
            }
            else{
                menu(user);
            }
        }
        else{
            system("CLS");
            menu(user);
        }
    }
    else if(mainChoice == 5){
    system("CLS");
    menu();
    }
    else{
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu(user);
    }
}

int main()
{
    ManageMenu startObj;
    return 0;
}