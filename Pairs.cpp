// Here are some function for pair template :
//
// Operator = : assign values to a pair.
// swap : swaps the contents of the pair.
// make_pair() : create and returns a pair having objects defined by parameter list.
// Operators( == , != , > , < , <= , >= ) : lexicographically compares two pairs.
//  pair_name.first prints first elemnt of pair_name and  .second will print second name.

#include<iostream>
using namespace std;

int main()
{
  pair<int,int> pair1,pair2,pair4(1,2);
  pair<string,int> pair3; //pair of any two data types can be formed

  pair1 = make_pair(1,2);
  pair2 = make_pair(68,60);
  pair3 = make_pair("ojas",7);

  if (pair1 == pair4) {
    cout << "they are equal \n";
  }

  cout << pair1.first << endl;
  cout << pair1.second << endl;
  pair2.swap(pair1);    // swaps contents of one pair with other pair
  cout << pair1.first << endl;
  cout << pair1.second << endl;
  return 0;
}
