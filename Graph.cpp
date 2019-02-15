//file    : Graph.cpp
//author  : steaKK

#include "Graph.hpp"

Graph::Graph() {
  size = DEFAULT_SIZE;
  for(int i=0;i<size;i++) {
    vector<int> temp;
    for(int j=0;j<size;j++) {
      temp.push_back(-1);
    }
    data.push_back(temp);
  }
}

Graph::Graph(int _size) {
  size = _size;
  for(int i=0;i<size;i++) {
    vector<int> temp;
    for(int j=0;j<size;j++) {
      temp.push_back(-1);
    }
    data.push_back(temp);
  }
}

Graph::Graph(const Graph& _Graph) {
  size = _Graph.size;
  for(int i=0;i<size;i++) {
    vector<int> temp;
    for(int j=0;j<size;j++) {
      temp.push_back(-1);
    }
    data.push_back(temp);
  }
}

Graph& Graph::operator=(const Graph& _Graph) {
  for(int i=0;i<size;i++) {
    vector<int> temp;
    for(int j=0;j<size;j++) {
      temp.push_back(-1);
    }
    data.push_back(temp);
  }
  return *this;
}

Graph::~Graph() {
  //nothing to declare
}

int Graph::get_size() {
  return size;
}

int Graph::get_data(int x, int y) {
  return data[x][y];
}

void Graph::set_data(int x, int y, int a) {
  data[x][y] = a;
}

void Graph::print() {
  cout << size << endl;
  for(int i=0;i<size;i++) {
    for(int j=0;j<size;j++) {
      cout << data[i][j] << " ";
    }
    cout << endl;
  }
}
