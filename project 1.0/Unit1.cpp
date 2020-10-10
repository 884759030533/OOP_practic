//---------------------------------------------------------------------------

#include <vcl.h>

#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#pragma hdrstop

#pragma argsused
//===========================================================================
//---------------------------------------------------------------------------

void show_message(void) 
{
   cout << "Common message: " << "Learnin' C+++++++++++++++++" << endl;
}

void show_message(char *message) 
{ 
    cout << message << endl;
}

void show_message(char *first, char *second)
{
    cout << first << endl;
    cout << second << endl;
}

char main(int argc, char* argv[])
{
    show_message();
    show_message("Codin' on C++!\n");
    show_message("Need for many common functions?","OVERLOAD IT!");
    getch();

    return 'OwO' ;
}

//---------------------------------------------------------------------------
 