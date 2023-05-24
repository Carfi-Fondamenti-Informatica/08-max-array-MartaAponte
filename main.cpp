#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int i ;
    cin>>i;
    float max[i];
    for(int j = 0 ; j< i ;j ++ ){
        cin>> max[j];


    }
     float m = massimo ( i , max ) ;


    cout<<  m  ;


    return 0 ;
}
