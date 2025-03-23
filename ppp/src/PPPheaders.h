// PPPheaders.h

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <span>
#include <stdexcept>
#include <random>
#include <exception> // missing from hosted file at https://stroustrup.com/PPPheaders.h and needed dependency for PPP_support.h

#include <stdint.h>
#include <list>
#include <map>
#include <unordered_map>
#include <set>
#include <memory>
#include <algorithm>

#define PPP_EXPORT
#include "PPP_support.h"

//using namespace std; // apparently an anti-pattern since it pollutes the shared namespace unnecessarily
using namespace PPP;


// disgusting macro hack to get a range checking:
#define vector Checked_vector
#define string Checked_string
#define span Checked_span