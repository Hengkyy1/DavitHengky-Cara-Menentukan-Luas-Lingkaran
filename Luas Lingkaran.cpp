#include<iostream>
using namespace std;

int main(){
    //const untuk mendeklarasikan nilai tetap
    const float phi = 3,14;
    float L, r;

    //value r
    cout<<"masukkan jari-jari lingkaran = ";
    cin>>r;

    //proses perhitungan luas
    L = phi * r * r;

    //pemanis
    cout<<"diketahui lingkaran dengan = "<<endl;
    cout<<"phi \t = "<<phi<<endl;
    cout<<"r \t = "<<r<<endl;
    cout<<"=============================="<<endl;

    //penampilan hasil
    cout<<"Luas lingkaran dengan jari-jari "<<r<<" cm" adalah ";
    cout<<L<<;" cm2";
    
    return O;
    
}
