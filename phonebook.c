// Calls Libraries
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Type (Data Structure) With Two Different Pieces Of Data (Names And Numbers) 
typedef struct
{
    string name;
    string number;
}
person;

// Creates Database (User Can Set To Any Positive Integer)
const int NUMBER = 5;

int main(void)
{
    // Creates An Array To Store Database
    person people[NUMBER];
    
    // Creates Values In The Database
    for (int i = 0; i < NUMBER; i++)
    {
        people[i].name = get_string("What's the name? ");
        people[i].number = get_string("What's the number? ");
    }
    
    // User Input
    string input = get_string("Whose phone number would you like to find? ");
    
    // Evaluates If User Requested Person Is In Phonebook
    for (int i = 0; i < NUMBER; i++)
    {
        if (strcmp(people[i].name, input) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}