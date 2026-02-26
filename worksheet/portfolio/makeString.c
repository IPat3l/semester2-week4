
/*
Name: Ismail Patel
Student ID: 201805034
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    // define appropriate data to hold your answer
    char final_string[200] = "";
    char ending[2];
    ending[1] = '\0';

    if (argc >= 2 && argc <= 11) // If between 1 and 10 arguments have been passed
    {
        // process the command-line data using appropriate string functions
        for (int i = 1; i < argc; i++) // Iterate through the arguments
        {   
            strncat(final_string, argv[i], 4); 
            // str n cat appends up to a certain number of characters onto dest
            // In this case, we append at most 4 characters from an arg onto the final string
            ending[0] = (i == argc-1) ? '\n' : '-';
            strcat(final_string, ending);
        }
    
    } else {
        return 0;
    }
    
    printf("%s", final_string); // use only this single print statement in your submitted code

    return 0;
}