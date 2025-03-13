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

void bubbleSortArray(){
    int pass = 1; //Step 1
    do {
        for (int j=0;j<=n-1-pass;j++){ //Step 2 
            if (arr[j] > arr[j+1]) { //Step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
        pass = pass + 1; //Step 4
    }while(pass <= n-1); //Step 5
}


int main(){

}