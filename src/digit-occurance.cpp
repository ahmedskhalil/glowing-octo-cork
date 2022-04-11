//
//  digit-occurance.cpp
//  digit occurance
//
//  Created by Ahmed Khalil on 10/4/2022.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// O(n)
vector<int> count_occurances(vector<int>& digits, bool sort_digits) {
  int i = 0;
  size_t occurances;
  vector<int> counts;
  if (sort_digits) {
    sort(digits.begin(), digits.end()); // O(n log n)
    cout << "sorted vector : ";
    for (auto& i : digits) cout << " " << i;
    cout << endl;
  }
  while (i < 10) {
    occurances = count(digits.begin(), digits.end(), i);
    cout << i << " encountered "
        << occurances
        << " time(s)\n";
    counts.push_back(occurances);
    i++;
  }
  return counts;
}

int main(int argc, const char * argv[]) {
  vector<int> digits {3,4,5,2,2,9,7,2,1,0,6,4,4,6,6,9,0,9,9};
  bool sort_digits = true;
  auto counts = count_occurances(digits, sort_digits);
  return 0;
}

//OUTPUT
//sorted vector :  0 0 1 2 2 2 3 4 4 4 5 6 6 6 7 9 9 9 9
//0 encountered 2 time(s)
//1 encountered 1 time(s)
//2 encountered 3 time(s)
//3 encountered 1 time(s)
//4 encountered 3 time(s)
//5 encountered 1 time(s)
//6 encountered 3 time(s)
//7 encountered 1 time(s)
//8 encountered 0 time(s)
//9 encountered 4 time(s)
