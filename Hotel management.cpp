#include <iostream>
using namespace std;

int main()
{
    int quant, choice;

    // Quantity of food items
    int Qpizza = 0, Qsandwich = 0, Qfries = 0;
    int Qshake = 0, Qcoffee = 0, Qcake = 0;

    // Food items sold
    int Spizza = 0, Ssandwich = 0, Sfries = 0;
    int Sshake = 0, Scoffee = 0, Scake = 0;

    // Total price of items
    int Total_pizza = 0, Total_sandwich = 0, Total_fries = 0;
    int Total_shake = 0, Total_coffee = 0, Total_cake = 0;

    cout << "\n\t Quantity of items we have";

    cout << "\n\n Quantity of Pizza : ";
    cin >> Qpizza;

    cout << "\n Quantity of Sandwich : ";
    cin >> Qsandwich;

    cout << "\n Quantity of French Fries : ";
    cin >> Qfries;

    cout << "\n Quantity of Shake : ";
    cin >> Qshake;

    cout << "\n Quantity of Coffee : ";
    cin >> Qcoffee;

    cout << "\n Quantity of Cake : ";
    cin >> Qcake;

menu:

    cout << "\n\n\t\t FOOD MENU";

    cout << "\n\n1. Pizza";
    cout << "\n2. Sandwich";
    cout << "\n3. French Fries";
    cout << "\n4. Shake";
    cout << "\n5. Coffee";
    cout << "\n6. Cake";
    cout << "\n7. Information regarding sales and collection";
    cout << "\n8. Exit";

    cout << "\n\n Please Enter your choice! ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "\n\n Enter the Pizza Quantity : ";
            cin >> quant;

            if(Qpizza >= quant)
            {
                Qpizza = Qpizza - quant;
                Spizza = Spizza + quant;
                Total_pizza = Total_pizza + quant * 200;

                cout << "\n\t" << quant << " Pizza is the order!";
            }
            else
            {
                cout << "\n\tOnly " << Qpizza
                     << " Pizza remaining in hotel";
            }
            break;

        case 2:
            cout << "\n\n Enter the Sandwich Quantity : ";
            cin >> quant;

            if(Qsandwich >= quant)
            {
                Qsandwich = Qsandwich - quant;
                Ssandwich = Ssandwich + quant;
                Total_sandwich = Total_sandwich + quant * 100;

                cout << "\n\t" << quant << " Sandwich is the order!";
            }
            else
            {
                cout << "\n\tOnly " << Qsandwich
                     << " Sandwich remaining in hotel";
            }
            break;

        case 3:
            cout << "\n\n Enter the French Fries Quantity : ";
            cin >> quant;

            if(Qfries >= quant)
            {
                Qfries = Qfries - quant;
                Sfries = Sfries + quant;
                Total_fries = Total_fries + quant * 80;

                cout << "\n\t" << quant
                     << " French Fries is the order!";
            }
            else
            {
                cout << "\n\tOnly " << Qfries
                     << " French Fries remaining in hotel";
            }
            break;

        case 4:
            cout << "\n\n Enter the Shake Quantity : ";
            cin >> quant;

            if(Qshake >= quant)
            {
                Qshake = Qshake - quant;
                Sshake = Sshake + quant;
                Total_shake = Total_shake + quant * 120;

                cout << "\n\t" << quant << " Shake is the order!";
            }
            else
            {
                cout << "\n\tOnly " << Qshake
                     << " Shake remaining in hotel";
            }
            break;

        case 5:
            cout << "\n\n Enter the Coffee Quantity : ";
            cin >> quant;

            if(Qcoffee >= quant)
            {
                Qcoffee = Qcoffee - quant;
                Scoffee = Scoffee + quant;
                Total_coffee = Total_coffee + quant * 60;

                cout << "\n\t" << quant << " Coffee is the order!";
            }
            else
            {
                cout << "\n\tOnly " << Qcoffee
                     << " Coffee remaining in hotel";
            }
            break;

        case 6:
            cout << "\n\n Enter the Cake Quantity : ";
            cin >> quant;

            if(Qcake >= quant)
            {
                Qcake = Qcake - quant;
                Scake = Scake + quant;
                Total_cake = Total_cake + quant * 150;

                cout << "\n\t" << quant << " Cake is the order!";
            }
            else
            {
                cout << "\n\tOnly " << Qcake
                     << " Cake remaining in hotel";
            }
            break;

        case 7:

            cout << "\n\n\t\t Details of sales and collection";

            cout << "\n\n Number of Pizza we had : " << Qpizza + Spizza;
            cout << "\n Number of Pizza we sold : " << Spizza;
            cout << "\n Remaining Pizza : " << Qpizza;
            cout << "\n Total Pizza collection for the day : "
                 << Total_pizza;

            cout << "\n\n Number of Sandwich we had : "
                 << Qsandwich + Ssandwich;
            cout << "\n Number of Sandwich we sold : " << Ssandwich;
            cout << "\n Remaining Sandwich : " << Qsandwich;
            cout << "\n Total Sandwich collection for the day : "
                 << Total_sandwich;

            cout << "\n\n Number of French Fries we had : "
                 << Qfries + Sfries;
            cout << "\n Number of French Fries we sold : " << Sfries;
            cout << "\n Remaining French Fries : " << Qfries;
            cout << "\n Total French Fries collection for the day : "
                 << Total_fries;

            cout << "\n\n Number of Shake we had : "
                 << Qshake + Sshake;
            cout << "\n Number of Shake we sold : " << Sshake;
            cout << "\n Remaining Shake : " << Qshake;
            cout << "\n Total Shake collection for the day : "
                 << Total_shake;

            cout << "\n\n Number of Coffee we had : "
                 << Qcoffee + Scoffee;
            cout << "\n Number of Coffee we sold : " << Scoffee;
            cout << "\n Remaining Coffee : " << Qcoffee;
            cout << "\n Total Coffee collection for the day : "
                 << Total_coffee;

            cout << "\n\n Number of Cake we had : "
                 << Qcake + Scake;
            cout << "\n Number of Cake we sold : " << Scake;
            cout << "\n Remaining Cake : " << Qcake;
            cout << "\n Total Cake collection for the day : "
                 << Total_cake;

            break;

        case 8:
            exit(0);

        default:
            cout << "\n Please select the numbers mentioned above!";
    }

    goto menu;

    return 0;
}
