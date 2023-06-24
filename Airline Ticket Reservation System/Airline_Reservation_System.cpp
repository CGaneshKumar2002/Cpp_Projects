#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string adr;
        static int cId;
        char arr[100];

        void information()
        {
            cout << "\n Enter the Customer ID: ";
            cin >> cId;
            cin.ignore();
            cout << "\n Enter the Name : ";
            getline(cin, name);
            cout << "\n Enter the Gender : ";
            cin >> gender;
            cout << "\n Enter the Age : ";
            cin >> age;
            cin.ignore();
            cout << "\n Enter the Address : ";
            getline(cin, adr);
            cout << "\n Your Details are saved with us\n"<<endl;
        }

};

int Details::cId;
string Details::name;
string Details::gender;

class Registration{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;
        void flights()
        {
            cout << "1. Flight to Dubai" << endl;
            cout << "2. Flight to Canada" << endl;
            cout << "3. Flight to UK" << endl;
            cout << "4. Flight to USA" << endl;
            cout << "5. Flight to Australia" << endl;
            cout << "6. Flight to Europe" << endl;
            cout <<"\n Welcome to the Airlines !"<<endl;
            cout <<"Select the country of which you want to book the flight: ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                    cout <<"_____________________Welcome to Dubai Emirates_______________________\n"<<endl;
                    cout <<"Your comfort is our Priority. Enjoy the Journey! "<<endl;
                    cout <<"Following are the flights \n"<<endl;
                    cout <<"1. DUB - 623"<<endl;
                    cout <<"\tDate & Time : 26-06-2023 7:00AM \n\tDuration : 15-Hrs\n\tCost: Rs.14000 "<<endl;
                    cout <<"2. DUB - 193"<<endl;
                    cout <<"\tDate & Time : 26-06-2023 7:00PM \n\tDuration : 16-Hrs\n\tCost: Rs.18000 "<<endl;
                    cout <<"3. DUB - 780"<<endl;
                    cout <<"\tDate & Time : 27-06-2023 2:00PM \n\tDuration : 15-Hrs\n\tCost: Rs.15000 "<<endl;

                    cout <<"\nSelect the flight you want to book : ";
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1:
                            charges = 14000;
                            cout <<"\nYou Have Sucessfully booked the flight DUB - 623" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 2:
                            charges = 18000;
                            cout <<"\nYou Have Sucessfully booked the flight DUB - 193" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 3:
                            charges = 15000;
                            cout <<"\nYou Have Sucessfully booked the flight DUB - 780" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        default:
                            cout << "Invalid Input, Please select appropriate choice \n"<<endl;
                            flights();
                    }
                    cout << "Press any key to return to Main Menu: "<<endl;
                    cin >> back;
                    mainMenu();
                    break;
                case 2:
                    cout <<"_____________________Canadian Airlines _______________________\n"<<endl;
                    cout <<"Your comfort is our Priority. Enjoy the Journey! "<<endl;
                    cout <<"Following are the flights \n"<<endl;
                    cout <<"1. CA - 666"<<endl;
                    cout <<"\tDate & Time : 26-06-2023 8:00AM \n\tDuration : 25-Hrs\n\tCost: Rs.34000 "<<endl;
                    cout <<"2. CA - 123"<<endl;
                    cout <<"\tDate & Time : 27-06-2023 8:00PM \n\tDuration : 26-Hrs\n\tCost: Rs.38000 "<<endl;
                    cout <<"3. CA - 654"<<endl;
                    cout <<"\tDate & Time : 28-06-2023 5:00PM \n\tDuration : 20-Hrs\n\tCost: Rs.35000 "<<endl;

                    cout <<"\nSelect the flight you want to book : ";
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1:
                            charges = 34000;
                            cout <<"\nYou Have Sucessfully booked the flight CA - 666" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 2:
                            charges = 38000;
                            cout <<"\nYou Have Sucessfully booked the flight CA - 123" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 3:
                            charges = 35000;
                            cout <<"\nYou Have Sucessfully booked the flight CA - 654" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        default:
                            cout << "Invalid Input, Please select appropriate choice \n"<<endl;
                            flights();
                    }
                    cout << "Press any key to return to Main Menu: "<<endl;
                    cin >> back;
                    mainMenu();
                    break;
                case 3:
                    cout <<"_____________________Welcome to UK Airways_______________________\n"<<endl;
                    cout <<"Your comfort is our Priority. Enjoy the Journey! "<<endl;
                    cout <<"Following are the flights \n"<<endl;
                    cout <<"1. UK - 453"<<endl;
                    cout <<"\tDate & Time : 26-06-2023 5:00AM \n\tDuration : 24-Hrs\n\tCost: Rs.26000 "<<endl;
                    cout <<"2. UK - 432"<<endl;
                    cout <<"\tDate & Time : 28-06-2023 7:00AM \n\tDuration : 25-Hrs\n\tCost: Rs.27000 "<<endl;

                    cout <<"\nSelect the flight you want to book : ";
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1:
                            charges = 26000;
                            cout <<"\nYou Have Sucessfully booked the flight UK - 453" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 2:
                            charges = 27000;
                            cout <<"\nYou Have Sucessfully booked the flight UK - 432" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        default:
                            cout << "Invalid Input, Please select appropriate choice \n"<<endl;
                            flights();
                    }
                    cout << "Press any key to return to Main Menu: "<<endl;
                    cin >> back;
                    mainMenu();
                    break;
                case 4:
                    cout <<"_____________________Welcome to US Airways_______________________\n"<<endl;
                    cout <<"Your comfort is our Priority. Enjoy the Journey! "<<endl;
                    cout <<"Following are the flights \n"<<endl;
                    cout <<"1. US - 809"<<endl;
                    cout <<"\tDate & Time : 29-06-2023 5:00AM \n\tDuration : 35-Hrs\n\tCost: Rs.44000 "<<endl;
                    cout <<"2. US - 688"<<endl;
                    cout <<"\tDate & Time : 30-06-2023 7:00AM \n\tDuration : 36-Hrs\n\tCost: Rs.48000 "<<endl;
                    cout <<"3. US - 143"<<endl;
                    cout <<"\tDate & Time : 30-06-2023 2:00PM \n\tDuration : 35-Hrs\n\tCost: Rs.45000 "<<endl;

                    cout <<"\nSelect the flight you want to book : ";
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1:
                            charges = 44000;
                            cout <<"\nYou Have Sucessfully booked the flight US - 809" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 2:
                            charges = 48000;
                            cout <<"\nYou Have Sucessfully booked the flight US - 688" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 3:
                            charges = 45000;
                            cout <<"\nYou Have Sucessfully booked the flight US - 143" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        default:
                            cout << "Invalid Input, Please select appropriate choice \n"<<endl;
                            flights();
                    }
                    cout << "Press any key to return to Main Menu: "<<endl;
                    cin >> back;
                    mainMenu();
                    break;
                case 5:
                    cout <<"_____________________Welcome to Australian Airlines_______________________\n"<<endl;
                    cout <<"Your comfort is our Priority. Enjoy the Journey! "<<endl;
                    cout <<"Following are the flights \n"<<endl;
                    cout <<"1. AS - 109"<<endl;
                    cout <<"\tDate & Time : 29-06-2023 5:00AM \n\tDuration : 32-Hrs\n\tCost: Rs.42000 "<<endl;
                    cout <<"2. AS - 188"<<endl;
                    cout <<"\tDate & Time : 30-06-2023 7:00AM \n\tDuration : 34-Hrs\n\tCost: Rs.46000 "<<endl;
                    cout <<"\nSelect the flight you want to book : ";
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1:
                            charges = 42000;
                            cout <<"\nYou Have Sucessfully booked the flight AS - 109" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 2:
                            charges = 46000;
                            cout <<"\nYou Have Sucessfully booked the flight AS - 188" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        default:
                            cout << "Invalid Input, Please select appropriate choice \n"<<endl;
                            flights();
                    }
                    cout << "Press any key to return to Main Menu: "<<endl;
                    cin >> back;
                    mainMenu();
                    break;
                case 6:
                    cout <<"_____________________Welcome to European Airlines_______________________\n"<<endl;
                    cout <<"Your comfort is our Priority. Enjoy the Journey! "<<endl;
                    cout <<"Following are the flights \n"<<endl;
                    cout <<"1. EU - 879"<<endl;
                    cout <<"\tDate & Time : 29-06-2023 5:00AM \n\tDuration : 17-Hrs\n\tCost: Rs.25000 "<<endl;
                    cout <<"2. EU - 678"<<endl;
                    cout <<"\tDate & Time : 29-06-2023 7:00PM \n\tDuration : 18-Hrs\n\tCost: Rs.26000 "<<endl;
                    cout <<"3. EU - 173"<<endl;
                    cout <<"\tDate & Time : 30-06-2023 2:00PM \n\tDuration : 17-Hrs\n\tCost: Rs.25500 "<<endl;

                    cout <<"\nSelect the flight you want to book : ";
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1:
                            charges = 25000;
                            cout <<"\nYou Have Sucessfully booked the flight EU - 879" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 2:
                            charges = 26000;
                            cout <<"\nYou Have Sucessfully booked the flight EU - 678" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        case 3:
                            charges = 25500;
                            cout <<"\nYou Have Sucessfully booked the flight EU - 173" << endl;
                            cout <<"You can go back to menu and take the ticket" << endl;
                            break;
                        default:
                            cout << "Invalid Input, Please select appropriate choice \n"<<endl;
                            flights();
                    }
                    cout << "Press any key to return to Main Menu: "<<endl;
                    cin >> back;
                    mainMenu();
                    break;
            }
        }
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details
{
    public:
        void bill()
        {
            string destination = "";
            ofstream outf("log.txt");
            {
                outf<<"-----------------ABC Airlines---------------"<<endl;
                outf<<"-------------------Ticket-------------------"<<endl;
                outf<<"--------------------------------------------"<<endl;
                outf<<"\nCustomer ID: "<<Details::cId<<endl;
                outf<<"Customer Name: "<<Details::name<<endl;
                outf<<"Customer Gender: "<<Details::gender<<endl;
                outf<<"\n\tDescription"<< endl << endl;

                if(Registration::choice == 1)
                    destination = "Dubai";
                else if(Registration::choice == 2)
                    destination = "Canada";
                else if(Registration::choice == 3)
                    destination = "UK";
                else if(Registration::choice == 4)
                    destination = "USA";
                else if(Registration::choice == 5)
                    destination = "Australia";
                else if(Registration::choice == 6)
                    destination = "Europe";
                outf << "Destination : \t\t"<<destination<<endl;
                outf << "Flight Cost : \t\t" <<Registration::charges << endl; 
            }
            outf.close();
        }
        void display()
        {
            ifstream ifs("log.txt");
            {
                if(!ifs)
                    cout << "File Error !" << endl;
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout << arr << endl;
                }
            }ifs.close();
        }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout <<"\n\t                       CGK Airlines            \n" << endl;
    cout <<"\t________________________Main Menu________________________\n";
    cout <<"\t_________________________________________________________" << endl;
    cout <<"\t|\t\t\t\t\t\t\t|" << endl;
    cout <<"\t|\t Press 1 to add the Customer Details     \t|" << endl;
    cout <<"\t|\t Press 2 for the Flight Registration     \t|" << endl;
    cout <<"\t|\t Press 3 for Ticket and Charges          \t|" << endl;
    cout <<"\t|\t Press 4 to Exit                         \t|" << endl;
    cout <<"\t|\t\t\t\t\t\t\t|";
    cout <<"\n\t_________________________________________________________" << endl;

    cout <<"\nEnter the choice : ";
    cin >>lchoice;

    Details d;
    Registration r;
    Ticket t;
    switch(lchoice)
    {
        case 1:
            cout <<"_________Customers_________\n"<< endl;
            d.information();
            cout << "Press any key to go back to Main Menu ";
            mainMenu();
            break;
        case 2:
            cout <<"_______Book a Flight Using this System________\n"<<endl;
            r.flights();
            break;
        case 3:
            cout <<"_________GET YOUR TICKET________\n"<<endl;
            t.bill();
            cout <<"Your ticket is printed, you can collect it \n" << endl;
            cout <<"Press 1 to Display your ticket ";
            cin >> back;
            if(back == 1)
            {
                t.display();
                cout << "Press any key to go back to Main Menu: ";
                cin >> back;
                mainMenu();
            }
            else
            mainMenu();
            break;
        case 4:
            cout << "\n\n\t_______**Thank You**_______"<<endl;
            exit(0);
        default:
            cout << "Invalid Input, Please select appropriate choice \n"<<endl;
            mainMenu();
        
    }
}

int main()
{
    Management m;
    return 0;
}