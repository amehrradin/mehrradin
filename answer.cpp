#include <iostream>
#include <string>
#include <set>
using namespace std; 
int main(){

  string name ; 
  int num  = 0 ; 
  cin >> name ; 
  set <char> myset  ; 
  for (char x :  name){
    myset.insert(x);
  }
  for (char x : myset){
    num += 1 ; 
  }
  if (num % 2 == 0){
    cout << "CHAT WITH HER!"  ; 
  }
  else {
    cout << "IGNORE HIM!"  ;
  }

  return 0 ; 
}