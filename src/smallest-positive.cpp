//
//  smallest-positive.cpp
//  smallest positive
//
//  Created by Ahmed Khalil on 10/4/2022.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

// O(n)
double smallest_value(std::vector<double> const& vec) {
  return *std::min_element(vec.begin(), vec.end(), [] (double a, double b) {
    return std::abs(0 - a) < std::abs(0 - b);
  });
}

int main(int argc, const char * argv[]) {
  vector<double> temperatures_1 {-14.2,-0.22,0.32,0.44,3.4,32,12,17,13.2,12.71,0.01};
  cout << smallest_value(temperatures_1) << endl;
  
  vector<double> temperatures_2 {-14.2,-0.22,-0.32,-0.-4.71,-0.01,44.4,-0.11,-0.01};
  cout << smallest_value(temperatures_2) << endl;
  
  vector<double> temperatures_3 {14.2,22.4,32.4,41.71,44.4,11.4,21.5,1.0,-1.0};
  cout << smallest_value(temperatures_3) << endl;
  
  vector<double> temperatures_4 {14.2,22.4,32.4,41.71,44.4,11.4,21.5,-1.0};
  cout << smallest_value(temperatures_4) << endl;
  return 0;
}

// OUTPUT
// 0.01
// -0.01
// 1
// -1
