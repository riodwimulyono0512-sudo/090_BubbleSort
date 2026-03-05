// Add Library
#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variable global array a dengan ukuran 20
int n;       // Deklarasi variabel global n untuk menyimpan banyaknya elemen

void input ()
{ // procedur untuk input
    int d;
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
        cin >> n;                                         // Input dari elemen
        if (n <= 20)                                      // Jika n kurang dari sama dengan 20
           break;                                         // Keluar dari loop
        else                       
        {                                                            // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
        }
    }

    cout << endl;
    cout << "=======================" <<endl; 
    cout << "Masukkan Elemen Array" <<endl;
    cout << "=======================" << endl;

    for (int i = 0; i < n; i++)
    {                                          // Looping dengan i dimulai dari 0 hingga n
        cout << "Data ke-" << (i + 1) << ": "; // Output ke layar
        cin >> arr [i];
    }
}

void bubbleSortArray()
{
  int pass = 1;

  do
  {
    for (int j = 0; j <= n -  1 - pass; j++)
    { // step 2
        if (arr[j] > arr [j + 1])
        {// step 3
            int temp;
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
     pass += 1; //step 4

    cout << "\nPass" << pass -1 << ": "; // Number of pass
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " "; // Menampilkan data pada number of pass
    }
    cout << endl;

  } while (pass <= n -1); // step 5
}