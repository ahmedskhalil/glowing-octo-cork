//
//  intersection-set.cpp
//  intersection set
//
//  Created by Ahmed Khalil on 10/4/2022.
//

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <tuple>
#include <cmath>

using namespace std;

auto get_intersection_set(pair<double,double> a_interval, pair<double,double> b_interval) {
  std::vector<int> a_vals(abs(get<1>(a_interval) - get<0>(a_interval))+1);
  std::vector<int> b_vals(abs(get<1>(b_interval) - get<0>(b_interval))+1);
  std::iota(a_vals.begin(), a_vals.end(), get<0>(a_interval));
  std::iota(b_vals.begin(), b_vals.end(), get<0>(b_interval));
  std::vector<int> intersected_set;
  std::set_intersection(a_vals.begin(), a_vals.end(),
                        b_vals.begin(), b_vals.end(),
                        std::back_inserter(intersected_set));
  return intersected_set;
}

void print_vals(std::vector<int>& intersected_set) {
  for (auto val : intersected_set) {
    cout << val << " ";
  }
  cout << endl;
}

int main(int argc, const char * argv[]) {
  std::tuple<int,int> a_interval (0,10);
  std::tuple<int,int> b_interval (3,17);
  auto vals = get_intersection_set(a_interval, b_interval);
  print_vals(vals);
  
  std::tuple<int,int> aa_interval (-20,9);
  std::tuple<int,int> bb_interval (-3,17);
  auto valss = get_intersection_set(aa_interval, bb_interval);
  print_vals(valss);
  
  return 0;
}

// OUTPUT
// 3 4 5 6 7 8 9 10
// -3 -2 -1 0 1 2 3 4 5 6 7 8 9 
