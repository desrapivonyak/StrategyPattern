#pragma once
#include "LinearSearch.hpp"
#include "BinarySearch.hpp"

class SearchContext {
public:
  SearchContext(ISearch*);
  void doSearch();
private:
  ISearch* context;
};