#include<iostream>
#include<tuple>
using namespace std;

int main()
{
  tuple<int,int,int,int> t5(1,1,1,1);
  tuple<int, int, int> t1;
  tuple<int ,int,int> t2(3,4,5);
  tuple<int ,string,string> t3;

  t1 = make_tuple(5,4,3);
  t3 = make_tuple(5,"study tonight","Loves you");

  cout << "Before swap t1 : t2\n";
  cout << get<0>(t1) << " " << get<0>(t2) << endl;
  cout << get<1>(t1) << " " << get<1>(t2) << endl;
  cout << get<2>(t1) << " " << get<2>(t2) << endl;
  t1.swap(t2);
  cout << "After swap t1 : t2\n";
  cout << get<0>(t1) << " " << get<0>(t2) << endl;
  cout << get<1>(t1) << " " << get<1>(t2) << endl;
  cout << get<2>(t1) << " " << get<2>(t2) << endl;


  // Assigning variable to a tuple using tie()
  int first;
  string second,third;
  tie(first,second,third) = t3;
  cout << first << " " << second << " "  << third << endl;
  //to ignore an element while assigning
  tie(first,ignore,third) = t3;
  cout << first << " " << third << endl;

  //joining two tuple with tuple_cat()
  auto t4 = tuple_cat(t1,t2);
  cout << get<0>(t4) << " " << get<1>(t4) << endl;
  cout << get<2>(t4) << " " << get<3>(t4) << endl;
  cout << get<4>(t4) << " " << get<5>(t4) << endl;

  return 0;
}
