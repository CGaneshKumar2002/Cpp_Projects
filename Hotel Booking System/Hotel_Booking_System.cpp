#include <iostream>
#include <conio.h>


int main()
{
    int quantity;
    int choice;
    int Q_rooms = 0, Q_pasta = 0, Q_burger = 0, Q_noodles = 0, Q_shake = 0, Q_chicken = 0;
    int S_rooms = 0, S_pasta = 0, S_burger = 0, S_noodles = 0, S_shake = 0, S_chicken = 0;
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chicken = 0;
    std::cout << "\n\t Quantity of items we have\n";
    std::cout << "\n Rooms Available : ";
    std::cin >> Q_rooms;
    std::cout <<"\n Quantity of Pasta : ";
    std::cin >> Q_pasta;
    std::cout <<"\n Quantity of Burger : ";
    std::cin >> Q_burger;
    std::cout <<"\n Quantity of Noodles : ";
    std::cin >> Q_noodles;
    std::cout <<"\n Quantity of Shake : ";
    std::cin >> Q_shake;
    std::cout <<"\n Quantity of Chicken : ";
    std::cin >> Q_chicken;

    m:
    std::cout << "\n-----------------------------------------------------------------------------\n\n";
    std::cout << "\n\t\t\t WELCOME TO OUR HOTEL !\n";
    std::cout << "\n\t\t Please select from the menu options ";
    std::cout <<"\n\n1) Rooms";
    std::cout <<"\n2) Pasta";
    std::cout <<"\n3) Burger";
    std::cout <<"\n4) Noodles";
    std::cout <<"\n5) Shake";
    std::cout <<"\n6) Chicken-Roll";
    std::cout <<"\n7) Information regarding sales and collection";
    std::cout <<"\n8) Exit";
    

    std::cout <<"\n\n Please Enter your choice! ";
    std::cout << "\n-----------------------------------------------------------------------------\n\n";
    std::cin >> choice;

    switch (choice)
    {
        case 1:
            std::cout << "\n\n Enter the number of rooms you want: ";
            std::cin >> quantity;
            if(Q_rooms - S_rooms >= quantity)
            {
                S_rooms = S_rooms + quantity;
                total_rooms = total_rooms + quantity * 1200;
                std::cout << "\n\n\t\t" << quantity << " Room / Rooms have been alloted to you !";
            }
            else
                std::cout << "\n\tOnly" << Q_rooms - S_rooms << " Rooms remaining in Hotel ";
            break;
        case 2:
            std::cout << "\n\n Enter the Pasta Quantity : ";
            std::cin >> quantity;
            if(Q_pasta - S_pasta >= quantity)
            {
                S_pasta = S_pasta + quantity;
                total_pasta = total_pasta + quantity * 250;
                std::cout << "\n\n\t\t" << quantity << " Pasta have been ordered !";
            }
            else
                std::cout << "\n\tOnly" << Q_pasta - S_pasta << " Pasta remaining in Hotel ";
            break;
        case 3:
            std::cout << "\n\n Enter the Burger Quantity : ";
            std::cin >> quantity;
            if(Q_burger - S_burger >= quantity)
            {
                S_burger = S_burger + quantity;
                total_burger = total_burger + quantity * 120;
                std::cout << "\n\n\t\t" << quantity << " Burgers have been ordered !";
            }
            else
                std::cout << "\n\tOnly" << Q_burger - S_burger << "Burgers remaining in Hotel ";
            break;
        case 4:
            std::cout << "\n\n Enter the Noodles Quantity : ";
            std::cin >> quantity;
            if(Q_noodles - S_noodles >= quantity)
            {
                S_noodles = S_noodles + quantity;
                total_noodles = total_noodles + quantity * 200;
                std::cout << "\n\n\t\t" << quantity << " Noodles have been ordered !";
            }
            else
                std::cout << "\n\tOnly" << Q_noodles - S_noodles << " Noodles remaining in Hotel ";
            break;
        case 5:
            std::cout << "\n\n Enter the Shakes Quantity : ";
            std::cin >> quantity;
            if(Q_shake - S_shake >= quantity)
            {
                S_shake = S_shake + quantity;
                total_shake = total_shake + quantity * 100;
                std::cout << "\n\n\t\t" << quantity << " Shakes have been ordered !";
            }
            else
                std::cout << "\n\tOnly" << Q_shake - S_shake << " Shakes remaining in Hotel ";
            break;
        case 6:
            std::cout << "\n\n Enter the Chicken-Roll Quantity : ";
            std::cin >> quantity;
            if(Q_chicken - S_chicken >= quantity)
            {
                S_chicken = S_chicken + quantity;
                total_chicken = total_chicken + quantity * 90;
                std::cout << "\n\n\t\t" << quantity << " Chicken-Rolls have been ordered !";
            }
            else
                std::cout << "\n\tOnly" << Q_chicken - S_chicken << " Chicken-Rolls remaining in Hotel ";
            break;
        case 7:
            std::cout << "\n\t\tDetails of sales and collections ";
            std::cout << "\n\n Number of rooms we had : " << Q_rooms;
            std::cout << "\n\n Number of rooms we gave for rent " << S_rooms;
            std::cout << "\n\n Remaining Rooms : " << Q_rooms - S_rooms;
            std::cout << "\n\n Total rooms collection for the day : " << total_rooms;

            std::cout << "\n\n Number of Pasta we had : " << Q_pasta;
            std::cout << "\n\n Number of Pasta we sold " << S_pasta;
            std::cout << "\n\n Remaining Pasta : " << Q_pasta - S_pasta;
            std::cout << "\n\n Total Pasta collection for the day : " << total_pasta;

            std::cout << "\n\n Number of Burgers we had : " << Q_burger;
            std::cout << "\n\n Number of Burgers we sold " << S_burger;
            std::cout << "\n\n Remaining Burgers : " << Q_burger - S_burger;
            std::cout << "\n\n Total Burgers collection for the day : " << total_burger;

            std::cout << "\n\n Number of Noodles we had : " << Q_noodles;
            std::cout << "\n\n Number of Noodles we sold " << S_noodles;
            std::cout << "\n\n Remaining Noodles : " << Q_noodles - S_noodles;
            std::cout << "\n\n Total Noodles collection for the day : " << total_noodles;

            std::cout << "\n\n Number of Shakes we had : " << Q_shake;
            std::cout << "\n\n Number of Shakes we sold " << S_shake;
            std::cout << "\n\n Remaining Shakes : " << Q_shake - S_shake;
            std::cout << "\n\n Total Shakes collection for the day : " << total_shake;

            std::cout << "\n\n Number of Chicken-Rolls we had : " << Q_chicken;
            std::cout << "\n\n Number of Chicken-Rolls we sold " << S_chicken;
            std::cout << "\n\n Remaining Chicken-Rolls : " << Q_chicken - S_chicken;
            std::cout << "\n\n Total Chicken-Rolls collection for the day : " << total_chicken;
            break;
        case 8:
            exit(0);
        default:
            std::cout << "\n Please select the available choice";
    }
    goto m;
}
