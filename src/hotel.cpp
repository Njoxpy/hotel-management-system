// create a basic structure

#include <iostream>
#include <string>

using namespace std;

// declare global variables for constants(in UPPERCASE)
const float SINGLE_ROOM_PRICE = 2300;
const float DOUBLE_ROOM_PRICE = 2300;
const float DISCOUNT_PERCENTAGE = 0.15;

int main()
{

    //    create variable for storing guest details
    int service_number = 0;

    //    welcome a user into our system
    cout << "------------------------------------------ \n"
            "       WELCOME TO MIDDLE HOTEL \n"
            "------------------------------------------ \n";
    string name;

    // implement a function to check if the user has entered the name or not(use if else)
    cout << "Enter your full name(first and last name): ";
    getline(cin, name);
    if (name == "")
    {
        cout << "Enter a valid name!" << endl;
    }
    else
    {
        cout << "Welcome " + name << endl;
        cout << "\n ";

        // display the number of service present in the hotel
        cout << "Here are the list of Service we are offering \n"
                "1. Book a hotel \n"
                "2. Order food \n"
                "3. Room service \n"
                "4. Laundry service \n \n";

        // check to see if the user has open number 1 but use switch statement

        // create variables for service and name

        cout << "--------------------------------------------- \n";

        // use switch statement
        cout << "Enter service number you want from above services:";
        cin >> service_number;

        switch (service_number)
        {
        case 1:
            cout << "You have chosen number to book a hotel." << endl;
            cout << "---------------------------------------- \n";
            // create variables for room_type

            int roomTypeNumber;
            int numberOfRooms;

            cout << "Here are the list of room type we have: \n"
                    "1. Single\n"
                    "2. Double\n";

            cout << "\n ";

            cout << "Enter the room type you want(use number): ";
            cin >> roomTypeNumber;

            // for single room type
            if (roomTypeNumber == 1)
            {
                cout << "You selected single room type." << endl;

                cout << "How many number of rooms you want from single room type: ";
                cin >> numberOfRooms;

                // check if the number of rooms are greater than 4 then give discount to the user
                if (numberOfRooms > 3)
                {
                    cout << "You got a discount of 0.15" << endl;
                    int totalCost = DISCOUNT_PERCENTAGE * numberOfRooms * SINGLE_ROOM_PRICE;
                    cout << "Total cost is: $" << totalCost;
                }
                else
                {
                    int totalCost = numberOfRooms * SINGLE_ROOM_PRICE;
                    cout << "Total cost is: $" << totalCost;
                }
            }

            // for double room type
            else if (roomTypeNumber == 2)
            {
                cout << "You selected double room type." << endl;

                cout << "How many number of rooms you want from double room type: ";
                cin >> numberOfRooms;

                // check if the number of rooms are greater than 4 then give discount to the user
                if (numberOfRooms > 3)
                {
                    cout << "You got a discount of 0.15" << endl;
                    float totalCost = DISCOUNT_PERCENTAGE * numberOfRooms * DOUBLE_ROOM_PRICE;
                    cout << "Total cost is: " << totalCost;
                }
                else
                {
                    float totalCost = numberOfRooms * DOUBLE_ROOM_PRICE;
                    cout << "Total cost is: " << totalCost;
                }
            }
            else
            {
                cout << "Oops! Incorrect room type!";
            }
            // allow user to choose between two room type and check if room = 1 (single) or room = 2 (double
            break;
        case 2:
            cout << "You have chosen number 2 \n"
                 << endl;
            cout << "Here are the meals available for you: \n"
                    "1. Rice \n "
                    "2. Sauerkraut\n"
                    "3. Matoke\n"
                    "4. Ugali\n"
                    "5. Burger\n"
                    "6. Pizza\n";

            break;

        case 3:
            cout << "You have chosen number 3" << endl;
            cout << "What room service do you want for now? "
                    "1. Requesting meals"
                    "2. Beverage";
            break;

        case 4:
            cout << "You have chosen number 4" << endl;
            cout << "What laundry service do you want for now?"
                    "1. Clothes"
                    "2. Brackets ";
            break;
        default:
            cout << "Incorrect type of service";
        }
    }

    return 0;
}
