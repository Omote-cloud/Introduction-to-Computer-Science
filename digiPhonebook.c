// Saves names and numbers to a CSV file

#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    //Open CSV file
    FILE *file = fopen("phonebook.csv", "a");
    if (!file)
    {
        return 1;
    }

    //Get name and number
    string name = get_string("Name: ");
    string number = get_string("Number: ");

    //Print to file
    fprintf(file, "%s,%s\n", name, number);

    //Close file
    fclose(file);
}