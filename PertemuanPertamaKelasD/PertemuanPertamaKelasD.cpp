
#include <iostream>
using namespace std;

int main()
{
    //begin
    //numeric nAlas, nTinggi, nLuas
    //display 'Masukan Alasnya= '
    //accept nAlas
    //display 'Masukan Tingginya= '
    //accept nTinggi
    //display ntinngi
    //compute nLuas = 1/2 * nTinggi
    //display 'Luasnya adalah = ' + nLuas

    int nAlas, nTinggi;
    double nLuas;
    cout << "Masukan Alasanya=";
    cin >> nAlas;
    cout << "Masukan Tingginya=";
    cin >> nTinggi;
    nLuas = 0.5 * (nAlas * nTinggi);
    cout << "Luasnya adalah= " << nLuas << endl;
    system("pause");
}

