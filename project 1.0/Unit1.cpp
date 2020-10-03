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

double some_kind_func(double x, double y, double z)
{
    double SIG, SIG1, SIG2, SIG3, SIG11;
    double yx1, yx2;
    //----------------------------

    if ((y==x)||(x==0.0))
    {
        cout<<"dividing by zero\n\nthat's illegal";
        return 0x0;
    }
    yx1 = y/x;                              // -2^(1/3)  that's illegal
    yx2 = y-x;
    //----------------------------
    if (yx1<0.0) SIG11 = (-pow(-yx1,1.0/3.0));
    else SIG11 = pow(yx1,1.0/3.0);

    if (x<0.0) SIG1 = -pow(-x,yx1);
    else SIG1 = pow(x,yx1);

    SIG1 -= SIG11;
    SIG1 = fabs(SIG1);

    SIG2 = (cos(y) - z/yx2);
    SIG3 = 1.0 + (yx2*yx2);

    SIG = SIG2/SIG3;
    SIG = yx2*SIG;
    SIG = SIG1 + SIG;
    //----------------------------

    return SIG;
}

char main(int argc, char* argv[])
{                 //x=182.5   y=18.255  z=-0,03928
    cout << some_kind_func(182.5, 18.255, -0.03928);   // 2, -1, 1

    getch();

    return 'OwO' ;
}

//---------------------------------------------------------------------------
 