#include <iostream>
#include <fstream>
#include <string>

void login();
void registration();
void forgot();

int main()
{
    int choice;
    m:
    std::cout << "\t\t\t__________________________________________________________\n\n\n";
    std::cout << "\t\t\t                  Welcome to the Login Page               \n\n\n";
    std::cout << "\t\t\t______________________      MENU         _________________\n\n\n";
    std::cout << std::endl;
    std::cout << "\t| Press 1 to LOGIN                        |\n";
    std::cout << "\t| Press 2 to REGISTER                     |\n";
    std::cout << "\t| Press 3 if you forgot your PASSWORD     |\n";
    std::cout << "\t| Press 4 to EXIT                         |\n";
    std::cout << "\n\t\t\tPlease Enter Your Choice: ";
    std::cin >> choice;
    std::cout << std::endl;
        switch (choice)
        {
            case 1:
                login();
                break;
            case 2:
                registration();
                break;
            case 3:
                forgot();
                break;
            case 4:
                std::cout << "\t\t\tThank You!\n\n";
                exit(0);
            default:
                std::cout << "\t\t\tPlease select from the options given above.\n\n";
                main();
                break;
        }
    goto m;

    return 0;
}

void login()
{
    std::string userId, password, id, pass;
    std::cout << "\t\t\tPlease Enter the Username and Password:\n";
    std::cout << "\t\t\tUSERNAME: ";
    std::cin >> userId;
    std::cout << "\t\t\tPASSWORD: ";
    std::cin >> password;

    std::ifstream input("records.txt");

    bool success = false;
    while (input >> id >> pass)
    {
        if (id == userId && pass == password)
        {
            success = true;
            break;
        }
    }
    input.close();

    if (success)
    {
        std::cout << userId << "\nYour Login is Successful!\nThanks for logging in!\n";
    }
    else
    {
        std::cout << "\nLOGIN ERROR\nPlease check your Username or Password.\n";
    }
}

void registration()
{
    std::string ruserId, rpassword;
    std::cout << "\t\t\tEnter the Username: ";
    std::cin >> ruserId;
    std::cout << "\t\t\tEnter the Password: ";
    std::cin >> rpassword;

    std::ofstream f1("records.txt", std::ios::app);
    f1 << ruserId << " " << rpassword << std::endl;
    f1.close();

    std::cout << "\n\t\t\tRegistration is Successful!\n";
}

void forgot()
{
    int opt;
    std::cout << "\t\t\tForgot Your Password? No Worries!\n";
    std::cout << "Press 1 to Search your ID by your Username\n";
    std::cout << "Press 2 to go back to the Main Menu\n";
    std::cout << "\t\t\tEnter Your Choice: ";
    std::cin >> opt;

    switch (opt)
    {
        case 1:
        {
            std::string suserId, sId, sPass;
            std::cout << "\n\t\t\tEnter the username which you used while registration: ";
            std::cin >> suserId;

            std::ifstream f2("records.txt");
            bool found = false;
            while (f2 >> sId >> sPass)
            {
                if (sId == suserId)
                {
                    found = true;
                    break;
                }
            }
            f2.close();

            if (found)
            {
                std::cout << "\n\nYour account is found!\n";
                std::cout << "\n\nYour Password is: " << sPass << '\n';
            }
            else
            {
                std::cout << "\nSorry! Your Account is not found!\n";
            }

            break;
        }
        case 2:
            break;
        default:
            std::cout << "\t\t\tWrong Choice. Please try again.\n";
            break;
    }
}
