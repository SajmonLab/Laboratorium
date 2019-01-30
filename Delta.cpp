#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])

{
    double a,b,c,delta,x0,x1,x2;

    cout<<"podaj 1 liczbe\n"<<endl;
     cin>>a;

    cout<<"podaj 2 liczbe\n"<<endl;
     cin>>b;
    cout<<"podaj 3 liczbe\n"<<endl;
     cin>>b;
    if(a==0) cout<<"To nie jest rownanie kwadratowe\n"<<endl;
    else
     {
       delta = (b*b)-(4*a*c);
       cout<<"delta wynosi"<<delta<<endl<<endl;
       if (delta>0)
        {
         if (b>=0)
          {
           x1=(-b-sqrt(delta))/(2*a);
           x2=(c/a)/x1;
          }
      else
       {
        x2=(-b+sqrt(delta))/(2*a);
        x1=(c/a)/x2;
        }
        cout<<"Pierwiastki rownania kwadratowego wynosza "<<x1<<x2<<endl<<endl;
      }
      else
       {
       if (delta == 0)
        {
        x0=-b/(2*a);
        cout<<"Pierwiastek rownania kwadratowego wynosi"<<x0<<endl<<endl;
        }

       else
       cout<<"Rownanie nie ma pierwiastkow\n"<<endl;
       }
     }
    system("PAUSE");
    return EXIT_SUCCESS;
}
