#include "SearchContext.hpp"

SearchContext::SearchContext(ISearch* c) : context(c) {}

void SearchContext::doSearch() {
  context->search();
}