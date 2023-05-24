#include "lib.h"
float massimo  (int dim , float max[]){

    float   m = max[0] ;

    for (int j =0 ; j<dim; j ++ ){

        if ( max [j]> m ){

            m = max[j];
        }
    }
    return m;
}

