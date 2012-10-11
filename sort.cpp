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
    int ly = 0;
    int su = 0;
    int *a = new int[N];  // random
    int *b = new int[N];  // nuo 1 iki 1000
      for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;}
  //  cout << "Įvestas skaičių masyvas yra:" << endl;
  //  for (i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;
    selection(a, 0, N-1, ly, su);
      cout << "RANDOM selection palyginimu :" << ly << endl;
      cout << "RANDOM selection sukeitimu :" << su << endl;
        for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;}
        ly = 0; su = 0;
    selection(b, 0, N-1, ly, su);
      cout << "Nuo 1 iki 1000 selection palyginimu :" << ly << endl;
      cout << "Nuo 1 iki 1000 selection sukeitimu :" << su << endl;
            for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;}
                ly = 0; su = 0;
    insertion(a, 0, N-1, ly, su);
      cout << "RANDOM insertion palyginimu :" << ly << endl;
      cout << "RANDOM insertion sukeitimu :" << su << endl;
            for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;}
                ly = 0; su = 0;
    insertion(b, 0, N-1, ly, su);
      cout << "Nuo 1 iki 1000 insertion palyginimu :" << ly << endl;
      cout << "Nuo 1 iki 1000 insertion sukeitimu :" << su << endl;
            for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;}
                ly = 0; su = 0;
    bubble(a, 0, N-1, ly, su);
      cout << "RANDOM bubble palyginimu :" << ly << endl;
      cout << "RANDOM bubble sukeitimu :" << su << endl;
            for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;}
                ly = 0; su = 0;
    bubble(b, 0, N-1, ly, su);
      cout << "Nuo 1 iki 1000 bubble palyginimu :" << ly << endl;
      cout << "Nuo 1 iki 1000 bubble sukeitimu :" << su << endl;
            for (i = 0; i < N; i++)
        {a[i] = 1000*(1.0*rand()/RAND_MAX);
        b[i] = i;}

    cout << "Surūšiuotas skaičių masyvas yra:" << endl;
  //  for (i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;
    cout << "palyginimu :" << ly << endl;
    cout << "sukeitimu :" << su << endl;
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

