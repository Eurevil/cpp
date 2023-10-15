#include <iostream>
#include "biblioteka.cpp"

int main(){
    cout << "Czego dzisiaj pragniesz dokonac z wielomianami?";
    cout << "1 - Dodawania , 2 - Odejmowania , 3 - Mnozenia" << endl;

    int n;
    cin >> n;
    if (n==1)
    dodawanie();
    else
    if(n==2)
    odejmowanie();
    else
    if(n==3)
    mnozenie();
    else
    cout << "Zly input";

}
