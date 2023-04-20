#include <iostream>
using namespace std;
int main()
{
  string litera;
  cout << "Podaj litere m lub k a ja napisze czy jestes mezczyzna czy kobieta" << endl;
  cin >> litera; 
  if(litera == "k") cout << "jestes kobieta" << endl;
  else if(litera == "K") cout << "jestes kobieta" << endl;
  else if(litera == "m") cout << "jestes mezczyzna"<< endl;
  else if(litera == "M") cout << "jestes mezczyzna"<< endl;
  else cout<<"no gender"<<endl;
  return 0;
}