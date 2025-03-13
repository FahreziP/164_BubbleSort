#include <iostream>
#include <string>
using namespace std;

int arr[20];    //deklarasi variable global array dengan panjang 20
int n;          //deklarasi variable global "n" untuk menyimpan elemen pada array

//prosedur input
void input(){
    int d;
    while (true){
        cout <<  "Masukkan banyaknya elemen pada array = ";
        cin >> n;
        if (n <= 20){
            break;
        }
        else {
            cout << "\nArray maksimal 20 elemen.\n"; 
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;
}

int main(){

}