/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Computabilidad y Algoritmia
 *
 * @author Adrián Ramos 
 * @date 5 oct 2021
 * @brief How to know if a number could be a sum of squares
 *
 */

// A brute force approach based implementation
// to find if a number can be written as sum
// of two squares.
#include <bits/stdc++.h>
using namespace std;
 
// function to check if there exist two
// numbers sum of whose squares is n.
bool sumSquare(int n)
{
    for (long i = 1; i * i <= n; i++)
        for (long j = 1; j * j <= n; j++)
            if (i * i + j * j == n) 
              return true;
    return false;
}
 
// driver Program
int main(int argc, char *argv[])
{
  
   if (argc!=2)
   {
       cout << "Debes ingresar únicamente un parámetro...\n" << endl;
       return 1;
   }

  else{
    string argument = argv[1];
    int arg = stoi(argument);  
    if (sumSquare(arg))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }    
}