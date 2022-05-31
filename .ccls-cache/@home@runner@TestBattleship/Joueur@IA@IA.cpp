#include <iostream>
#include "IA.h"
//#include "stdlib.h"
using namespace std;

IA::IA(Joueur &J, int dim_x, int dim_y) {
  J.setnom("ordinateur");
  J.setplateau_dim(dim_x, dim_y);
}