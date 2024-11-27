#include <fstream>
#include <iostream>
#include <string>
#include <ctime>
#include <set>

using namespace std;

int main() {
    srand(time(NULL));
    wifstream wcin("input.txt");
    int n;
    wcin>>n;
    wstring domande[n];
    wstring risposte[n];
    getline(wcin,domande[0]);
    for (int i=0; i<n ;i++)
    {
        getline(wcin,domande[i]);
        getline(wcin,risposte[i]);
    }
    while (true)
    {
        for (int i=n; i>0; i--)
        {
            int ciao=rand()%i;
            wcout<<domande[ciao]<<endl;
            system("pause");
            wcout<<risposte[ciao]<<endl;
            system("pause");
            swap(domande[i-1],domande[ciao]);
            swap(risposte[i-1],risposte[ciao]);
        }
        cout<<"\n\n\n\n\n\n\n\n\n\n";
    }
}
