#include <iostream>
#include <string>
using namespace std ; 
int main(){
  int n , m ; 
  int meat = 0 ; 
  int meat2 = 0  ;
  int limo = 0 ; 
  int sabzi = 0 ; 
  cin >> n >> m ; 
  for (int i = 1 ; i<=  n ; i ++ ){
    for (int i = 1 ; i<= m ; i++){
      char x ; 
      cin >> x ; 
      if (x == 'o'){
        limo += 1 ;
      }
      if(x == '.'){
        sabzi += 1 ; 
      }
      if(x == '*'){
        meat += 1 ;
      }
    }
  }
    for (int i = 1 ; i<=  n ; i ++ ){
    for (int i = 1 ; i<= m ; i++){
      char x ; 
      cin >> x ; 
      if (x == 'o'){
        limo += 1 ;
      }
      if(x == '.'){
        sabzi += 1 ; 
      }
      if(x == '*'){
        meat2 += 1 ;
      }
    }
  }

  cout << meat << " " << meat2 ;  

  return 0 ; 
}