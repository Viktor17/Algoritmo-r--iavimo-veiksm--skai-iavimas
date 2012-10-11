#include <iostream>
#include <stdlib.h>
template <class T> void exch(T &, T &);
template <class T> void compexch(T &A, T &B, int & su);
template <class T> void selection(T a[], int l, int r, int & ly, int & su);
template <class T> void insertion(T a[], int l, int r, int & ly, int & su);
template <class T> void bubble(T a[], int l, int r, int & ly, int & su);
using namespace std;
int main(int argc, char *argv[])
{
    int i, N = 1000;
    int ly = 1;
    int su = 1;
    int *a = new int[N];
      for (i = 0; i < N; i++)
        a[i] = 1000*(1.0*rand()/RAND_MAX);

    cout << "Įvestas skaičių masyvas yra:" << endl;
    for (i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;
    bubble(a, 0, N-1, ly, su);
    cout << "Surūšiuotas skaičių masyvas yra:" << endl;
    for (i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;
    cout << "palyginimu :" << ly << endl; // RANDOM : selection - 5269; insertion - 1000; bubble - 499501
    cout << "sukeitimu :" << su << endl; // RANDOM : selection - 1000; insertion - 992; bubble - 247927
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
            if (a[j] < a[min]) {min = j; ly++;}
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
          { a[j] = a[j-1]; j--; }
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

