#include<iostream>
#include<list>
using namespace std;

int main()
{
//"""Syntax for creating a new linked list using list template is:"""
// iterating through array or vector is different from list as list is a linked list
std::list<int> l; // creates empty list
std::list<int> l2{1,2,3}; // initialized list

//***to make iterator point to a certain location we use 'advance(iterator,position)'.

//"""Member Functions"""

//""""1.insert function"""""
/*insert(iterator, element) : inserts element in the list before the position pointed
                            by the iterator.
insert(iterator, count, element) : inserts element in
                                  the list before the position pointed by the iterator
                                  , count number of times.
insert(iterator, start_iterator, end_iterator):
                                  insert the element pointed by start_iterator
                                  to the element pointed by end_iterator before
                                   the position pointed by iterator*/
std::list<int> l3{1,2,3,4};
std::list<int>::iterator it = l3.begin();
advance(it,2); // use of advance shown,now it points to 2nd element
l3.insert(it,100); // first form

l3.insert(l3.end(),l2.begin(),l2.end()); // 3rd form

l3.insert(it,3,101); // 2nd form

for (std::list<int>::iterator it2 = l3.begin();it2 != l3.end();it2++) {
  cout << *it2 << " " ;
}
cout << endl;


//""""2.push_back and push_front functions""""
//push_back(element) method is used to push elements into a list from the back.
//push_front(element) method is used to push elements into a list from the front.

std::list<string> l4{"(middle element)"};

l4.push_back("Impossible");
l4.push_back("By Score");

l4.push_front("is by");
l4.push_front("This");

for (std::list<string>::iterator it3 = l4.begin();it3 != l4.end();it3++) {
  cout << *it3 << " " ;
}
cout << endl;

//""""3.pop_back and pop_front functions"""""""""""
// both functions are void
/*pop_front() removes first element from the start of the list.
While pop_back() removes first element from the end of the list.*/
// line 63 and 64 remove elements after (middle elements) starting from last element.
 l4.pop_back();
 l4.pop_back();
// line 66,67 remove elements before  (middle element)  starting from front.
 l4.pop_front();
 l4.pop_front();

 for (std::list<string>::iterator it3 = l4.begin();it3 != l4.end();it3++) {
   cout << *it3 << " " ;
 }
 cout << endl;

 //"""4.empty function"""
// This method returns 1(true) if the list is empty else returns 0(false).
bool isEmpty = l.empty(); // l is empty list created at line 9
cout << isEmpty << endl;

isEmpty = l4.empty(); // l4 has one element "(middle element)"
cout << isEmpty << endl;
cout << endl;


//""""5.size function"""""""""
//This method can be used to find the number of elements present in the list.
cout <<l.size() << endl;
cout <<l2.size() << endl;
cout <<l3.size() << endl;
cout <<l4.size() << endl;
cout << endl;

//"""6.front and back function"""
/*front() is used to get the first element of the list from the start while back()
 is used to get the first element of the list from the back.*/
cout << l3.front() << endl; //l3{1,2,3,4};
cout << l3.back() << endl;


}
