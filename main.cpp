#include <iostream>
using namespace std;
int main() {
int liczba;
cout <<"Podaj liczbe, a ja ci powiem czy podana liczba przy dzieleniu przez 5 daje reszte 2\n";
cin>>liczba;
if(liczba%5==2)
{
    cout<<"Podana liczba daje resztę z dzielenia rowną 2";
}
else
cout<<"Podana liczba nie daje reszty z dzielenia rownej 2";
}