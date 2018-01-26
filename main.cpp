#include <iostream> 
#include <cmath>
#include <string> 
using namespace std; 

//Function prototypes
int colour(string[], const int); 
double multiplyIt(string[], double[], const int, int, int, int); 
int tolerance(string[], double[], const int); 

int main()
{
    // Variables for data
    const int band = 10, multiplier = 12, toleranceSize = 4; //  size of each string array
    int x,y,z;//  first 3 colours entered by user 
    int output;  // Contains tolerance  
    double result; //  result from calculation

    // Defined string arrays 
    string BAND_COLOUR_CODE[band] = { "black", "brown", "red", "orange",
                                     "yellow", "green", "blue", "violet",
                                     "grey", "white" };

    string MULTIPLIER_COLOR_CODE[multiplier] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet","grey", "white", "gold", "silver" };

    string TOLERANCE_colour_CODE[toleranceSize] = { "brown", "red", "gold", "silver" };

    // Arrays which hold numeric values for the string arrays
    double multiplierArray[multiplier] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0.1, 0.01 }; 

    double toleranceArray[toleranceSize] = { 1, 2, 5, 10 };

    // Loop to show each colour and the number it corresponds to 
    for (int i = 0; i < band; i++)
    {
        cout << BAND_COLOUR_CODE[i] << " : " << multiplierArray[i] << endl;
    }

    // Call the function three multiplyIts and store the information (i.e.: colour and its value) in the variables a, b, and c 
    x = colour(BAND_COLOUR_CODE, band); 

    y = colour(BAND_COLOUR_CODE, band); 

    z = colour(BAND_COLOUR_CODE, band); 

    cout << "\n"; 

    //Call the function to store the result from the calculation
    result = multiplyIt(MULTIPLIER_COLOR_CODE, multiplierArray, multiplier, x, y, z);

    cout << "\n";

    //Call the function to store the tolerance 
    output = tolerance(TOLERANCE_colour_CODE, toleranceArray, toleranceSize);

    cout << "\n";

    //Display information about the resistor
    cout << "This resistor has " << result << " ohms with " << output << " % tolerance." << endl; 

    cout << "\n"; 

    return 0; 
}

// Pre-Condition: This function accepts a string array and its size.    
//Post-Condition: It sets each colour to a particular numeric value  
//and converts it into an int to return after accepting user input.       

int colour(string BAND_COLOUR_CODE[], const int band)
{
    // Variables 
    char code[10];      // Represents the colours from the string array BAND_COLOUR_CODE
    int num = 0;        // Holds numeric value from 0-9 for colour band
    static int j = 0;   // Stores user input for colour 

    ++j;                // Increments to allow user to input colours in succession 

    cout << "\n";

    // Prompt for user input 
    cout << "Enter a colour for band " << j << ": > "; 
    cin.getline(code, 10); 

    // Loop to take care of the case of letters 
    for (int i = 0; i < 10; i++)
        code[i] = tolower(code[i]);

    // Loop to set user input to a number 
    for (int i = 0; i < band; i++)
    {
        if(code == BAND_COLOUR_CODE[i])
        {
            switch (i)
            {
                case 0:
                {
                    num = 0; 
                    break;
                }

                case 1:
                {
                    num = 1; 
                    break;
                }

                case 2:
                {
                    num = 2; 
                    break;
                }

                case 3:
                {
                    num = 3; 
                    break;
                }

                case 4:
                {
                    num = 4; 
                    break;
                }

                case 5:
                {
                    num = 5; 
                    break;
                }

                case 6:
                {
                    num = 6; 
                    break;
                }

                case 7:
                {
                    num = 7; 
                    break;
                }

                case 8:
                {
                    num = 8; 
                    break;
                }

                case 9:
                {
                    num = 9; 
                    break;
                }

                default: 
                {
                    cout << "ERROR!" << endl;
                }
            }
        }
    }

    return num;
}

// This function accepts two arrays, their size, and three variables that will hold colours for Pre-Condition.                                      
// Accepts user input and converts it into a int to use in data calculation. It returns a result for Post-Condition                         

double multiplyIt(string MULTIPLIER_COLOR_CODE[], double multiplierArray[], const int multiplier, int a, int b, int c)
{
    // Variables 
    char code[10];              // Represents colours from the string array BAND_COLOUR_CODE
    double total = 0;           // sum of a, b, and c 
    double num = 0;             // Holds numeric values for multiplier 
    double value;               // Stores value of resistor 

    // user input prompt
    cout << "Enter multiplier colour: > "; 
    cin.getline(code, 10);

    // case for letters loop distinguisher
    for (int i = 0; i < 10; i++)
        code[i] = tolower(code[i]);

    // Loop to set user input to a number
    for (int i = 0; i < multiplier; i++)
    {
        if (code == MULTIPLIER_COLOR_CODE[i])
        {
            switch (i)
            {
                case 0:
                {
                    num = 0; 
                    break;
                }

                case 1:
                {
                    num = 1; 
                    break;
                }

                case 2:
                {
                    num = 2; 
                    break;
                }

                case 3:
                {
                    num = 3; 
                    break;
                }

                case 4:
                {
                    num = 4; 
                    break;
                }

                case 5:
                {
                    num = 5; 
                    break;
                }

                case 6:
                {
                    num = 6; 
                    break;
                }

                case 7:
                {
                    num = 7; 
                    break;
                }

                case 8:
                {
                    num = 8; 
                    break;
                }

                case 9:
                {
                    num = 9; 
                    break;
                }

                case 10: 
                {
                    num = 0.1; 
                    break; 
                }

                case 11: 
                {
                    num = 0.01; 
                    break; 
                }
                default: 
                {
                    cout << "Error, try again!" << endl;
                }
            }
        }
    }

    total += (a * 100) + (b * 10) + c;

    value = total * pow(10, num);

    return value;
}

// This function accepts two arrays and their size for Pre-Condition 
//  It gets user input and converts it into an int for Post-Condition  
//to be returned.                                                 
 
int tolerance(string TOLERANCE_colour_CODE[], double toleranceArray[], const int toleranceSize)
{
    // Variables
    char code[10];      // Represents the colours from the string array BAND_COLOUR_CODE
    int num = 0;        // Holds numeric values for tolerance 

     // Loop allows user input a number 
    for (int i = 0; i < toleranceSize; i++)
    {
        cout << TOLERANCE_colour_CODE[i] << " : " << toleranceArray[i] << endl;
    }

    cout << "\n";

    // Prompt for user input
    cout << "Enter a colour for the tolerance: > "; 
    cin.getline(code, 10);

    // Loop for case letters 
    for (int i = 0; i < 10; i++)
        code[i] = tolower(code[i]);

    // Loop allows user input a number 
    for (int i = 0; i < toleranceSize; i++)
    {
        if (code == TOLERANCE_colour_CODE[i])
        {
            switch (i)
            {
                case 0:
                {
                    num = 1; 
                    break;
                }

                case 1:
                {
                    num = 2; 
                    break; 
                }

                case 2:
                {
                    num = 5; 
                    break;
                }

                case 3:
                {
                    num = 10; 
                    break;
                }

                default: 
                {
                    cout << "ERROR!" << endl;
                }
            }
        }
    }

    return num;
}
