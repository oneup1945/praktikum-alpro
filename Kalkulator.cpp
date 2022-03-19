#include<iostream>
using namespace std;

int main()
{
    int i,j,hasil;
    char k;
    
    
    cout << "Kalkulator"<<endl;
    cout << "masukkan nilai pertama:"<<endl;cin>>i;
    cout << " masukan nilai kedua:"<<endl; cin>>j;
    cout << " pilihan pengoperasian= +,-,*,/";cin>>k;
    
    cout << " k :";
    cout << i << " "<<hasil<<" "<< j <<endl;
    switch(k){
       case '+':
            hasil= i + j;
            break;
       case '-':
            hasil= i - j;
            break;
       case '*':
            hasil= i * j;
            break;  
        case ':':
            hasil= i / j;
            break;       
    }
       cout <<i<<k<<j<<"="<<hasil<<endl;
    
       cin.get();
       return 0;
}
