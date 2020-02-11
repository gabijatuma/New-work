#include <iostream>
using namespace std;
int main() {
  string name;
  string greet = "Sveikas,";
  cout << "Iveskite savo varda: "<<endl;
  cin >> name;
  int length = name.size();
  if(name[length-1]=='a')
  greet = "Sveika, ";

  int n = greet.length();
  n+=name.length();
  n+=5;

  string one, two, three, four, five;

  for(int i = 0; i < n; i++)
    one+='*';
  two+='*';
  for(int i = 0; i < n-2; i++)
    two+=' ';
  two+='*';
  three+="* ";
  three+=greet;
  three+=" ";
  three+=name;
  three+=" *";
    four+="*";
  for(int i = 0; i < n-2; i++)
    four+=" ";
  four+="*";
  for(int i = 0; i < n; i++)
  five+="*";



  cout<<one<<endl;
  cout<<two<<endl;
  cout<<three<<endl;
  cout<<four<<endl;
  cout<<five<<endl;
}
