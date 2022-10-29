// 2211 Lecture1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void Print(); // function prototype

int main()
{

    //int x = 74;
    //std::cout << x << std::endl;
    //std::cout << (char)x << std::endl; // interpret the memory of x as a char

    // arrays are just contigous memory
    // they are dangerous
    //int array[10];
    //for (int i = 0; i < 12; i++)
    //{
    //    array[i] = i; // write to memory locations - array[i] - can overwrite memory we don't own
    //} 
    //for (int i = 0; i < 12; i++)
    //{
    //    std::cout << array[i] << std::endl; // read from memory locations - array[i]
    //}

    // If statement - make sure to do == 
    //int y = 10;
    //if (y = 11) // oops I did assignment operator
    //{
    //    std::cout << "y = " << y << std::endl;
    //}

    // switch - don't forget breaks
    /*int z = 5;
    switch (z)
    {
    case 5:
    {
        int a = 10;
        std::cout << "it is 5" << std::endl;
        break;
    }
    case 6:
        std::cout << "it is 6" << std::endl;
        break;
    }*/

    // enums
    //enum Colors {Red,White};
    //Colors color = Colors::Red;
    //std::cout << color << std::endl; // prints out the int value of color
    //// to print out the char[] of the enum, have to do manually
    //switch (color)
    //{
    //case Colors::Red:
    //    std::cout << "Red" << std::endl;
    //    break;
    //case Colors::White:
    //    std::cout << "White" << std::endl;
    //    break;
    //}

    //Print();

    // Console output
    //char name[6] = "Jason"; // null terminator (0) put at end of char[]
    //std::cout << name << std::endl; // insertion works special with char[]
    //name[5] = 'H'; // replace null terminator
    //std::cout << name << std::endl; // now prints until it sees a 0 ( null terminator )

    // non char array
    //float array2[5] = { 1.0f,1.1f,1.2f,1.3f,1.4f };
    //std::cout << array2 << std::endl; // just prints out the memory address of the firts element in the array
    //// need to loop and print out each element

    // Console input
   /* char name[32];
    std::cin >> name;
    std::cout << name << std::endl;

    char name2[32];
    std::cin >> name2;
    std::cout << name2 << std::endl;*/

    //char name3[32];
    //std::cin.getline(name3, 32); // reads 32 chars into name3
    //std::cout << name3 << std::endl;

    // numeric input
    //int x;
    //std::cin >> x;
    //std::cout << x << std::endl;
    //// need to check for errors
    //if (std::cin.fail()) // we got unexpected input
    //{
    //    std::cin.clear(); // clears any error flags in cin
    //}
    //std::cin.ignore(INT_MAX, '\n'); // flushes out the buffer

    //int y;
    //std::cin >> y;
    //std::cout << y << std::endl;


    //int z;
    //std::cin >> z;
    //std::cout << z << std::endl;

    //////////////////////LAB////////////////////
    //std::cout << INT_MAX << std::endl; // right click on INT_MAX and go to definition
    
    srand(time(NULL)); // seeding the rand to time ( always different )
    for (int i = 0; i < 3; i++)
    {   
        std::cout << rand() << std::endl; // rand() gives a random number each time it is called
    }

    int easy = rand() % 10; // 0-9
    int medium = 10 + rand() % 10; // 10-19

}

void Print() // implementation of function
{
    std::cout << "Hello" << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
