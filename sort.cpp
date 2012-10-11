#include <iostream>
#include <stdlib.h>
template <class T> void exch(T &, T &);
template <class T> void compexch(T &A, T &B, int & su);
template <class T> void selection(T a[], int l, int r, int & ly, int & su);
template <class T> void insertion(T a[], int l, int r, int & ly, int & su);
template <class T> void bubble(T a[], int l, int r, int & ly, int & su);
void quickSort(int arr[], int left, int right, int & ly, int & su);
using namespace std;
int main(int argc, char *argv[])
{
    int i, N = 1000;
    int ly = 0;
    int su = 0;
    int *a = new int[N];  // random
    int *b = new int[N];  // nuo 1 iki 1000
    int *c = new int[N];  // nuo 1000 iki 1
    srand(5323);
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
  //  cout << "Įvestas skaičių masyvas yra:" << endl;
  //  for (i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;
    selection(a, 0, N-1, ly, su);
      cout << "RANDOM selection palyginimu :" << ly << endl;
      cout << "RANDOM selection sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
        ly = 0; su = 0;
    selection(b, 0, N-1, ly, su);
      cout << "Nuo 1 iki 1000 selection palyginimu :" << ly << endl;
      cout << "Nuo 1 iki 1000 selection sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
                ly = 0; su = 0;
    selection(c, 0, N-1, ly, su);
      cout << "Nuo 1000 iki 1 selection palyginimu :" << ly << endl;
      cout << "Nuo 1000 iki 1 selection sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
                ly = 0; su = 0;

                cout << endl << endl;

    insertion(a, 0, N-1, ly, su);
      cout << "RANDOM insertion palyginimu :" << ly << endl;
      cout << "RANDOM insertion sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
                ly = 0; su = 0;
    insertion(b, 0, N-1, ly, su);
      cout << "Nuo 1 iki 1000 insertion palyginimu :" << ly << endl;
      cout << "Nuo 1 iki 1000 insertion sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
                ly = 0; su = 0;
    insertion(c, 0, N-1, ly, su);
      cout << "Nuo 1000 iki 1 insertion palyginimu :" << ly << endl;
      cout << "Nuo 1000 iki 1 insertion sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
                ly = 0; su = 0;

                    cout << endl << endl;

    bubble(a, 0, N-1, ly, su);
      cout << "RANDOM bubble palyginimu :" << ly << endl;
      cout << "RANDOM bubble sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
                ly = 0; su = 0;
    bubble(b, 0, N-1, ly, su);
      cout << "Nuo 1 iki 1000 bubble palyginimu :" << ly << endl;
      cout << "Nuo 1 iki 1000 bubble sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
                ly = 0; su = 0;
    bubble(c, 0, N-1, ly, su);
      cout << "Nuo 1000 iki 1 bubble palyginimu :" << ly << endl;
      cout << "Nuo 1000 iki 1 bubble sukeitimu :" << su << endl;
      for (i = 0; i < 100; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
ly = 0; su = 0;
                            cout << endl << endl;

    quickSort(a, 0, N-1, ly, su);
      cout << "RANDOM quickSort palyginimu :" << ly << endl;
      cout << "RANDOM quickSort sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
                ly = 0; su = 0;
    quickSort(b, 0, N-1, ly, su);
      cout << "Nuo 1 iki 1000 quickSort palyginimu :" << ly << endl;
      cout << "Nuo 1 iki 1000 quickSort sukeitimu :" << su << endl;
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;
        c[i] = 1000-i;}
                ly = 0; su = 0;
    quickSort(c, 0, N-1, ly, su);
      cout << "Nuo 1000 iki 1 quickSort palyginimu :" << ly << endl;
      cout << "Nuo 1000 iki 1 quickSort sukeitimu :" << su << endl;


   // cout << "Surūšiuotas skaičių masyvas yra:" << endl;
  //  for (i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;

}
// Sukeičia elementus vietomis
template <class T>
  void exch(T &A, T &B)
    { T t = A ; A = B; B = t; }
// Sukeičia elementus vietomis tik jei patenkinta sąlyga
template <class T>
  void compexch(T &A, T &B, int & su)
    {
        if (B < A)
        {
            exch(A, B); su++;
            }
    }
// Išrinkimo algoritmo realizacija
template <class T>
void selection(T a[], int l, int r, int & ly, int & su)
  { for (int i = l; i < r; i++)
      { int min = i;
        for (int j = i+1; j <= r; j++)
        {
                      if (a[j] < a[min]) {min = j; } ly++;
        }

        exch(a[i], a[min]); su++;
      }
  }
// Įterpimo algoritmo realizacija
template <class T>
void insertion(T a[], int l, int r, int & ly, int & su)
  { int i;
    for (i = r; i > l; i--) {compexch(a[i-1], a[i], su); ly++;}
    for (i = l+2; i <= r; i++)
      { int j = i; T v = a[i];
        while (v < a[j-1])
          { a[j] = a[j-1]; j--; ly++; }
        a[j] = v;
      }
  }
// Burbulo algoritmas
template <class T>
void bubble(T a[], int l, int r, int & ly, int & su)
  { for (int i = l; i < r; i++)
      for (int j = r; j > i; j--)
        {compexch(a[j-1], a[j], su); ly++;}
  }
void quickSort(int arr[], int left, int right, int & ly, int & su) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {

            while (arr[i] < pivot)
            {
              i++;   ly++;
            }

            while (arr[j] > pivot)
            {
             j--;   ly++;
            }

            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  su++;
                  i++;
                  j--;
            }

      };

      /* recursion */
      if (left < j)
           {
               quickSort(arr, left, j, ly, su);
           }
      if (i < right) { quickSort(arr, i, right, ly, su);
}
}

