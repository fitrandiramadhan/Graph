//file    : Graph.hpp
//author  : steaKK

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>

using namespace std;

class Graph {

public:
  Graph();
  Graph(int);
  Graph(const Graph&);
  Graph& operator=(const Graph&);
  ~Graph();

  int get_size();
  int get_data(int,int);

  void set_data(int,int,int);

  void print();

private:
  static const int DEFAULT_SIZE = 10;
  static const int DEFAULT_INFINITY = -1;

  int infinity;
  int size;
  vector<vector<int>> data;

};


#endif
