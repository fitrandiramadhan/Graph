//file    : Graph.cpp
//author  : steaKK

#include "Graph.hpp"

int main() {
  Graph G1;
  Graph G2(5);
  Graph G3(G2);
  Graph G4 = G3;

  G4.set_data(2,1,4);
  G4.print();

  return 0;
}
