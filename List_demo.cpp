#include<iostream>
#include<list>
using namespace std;



//for compare function at line 162
bool compare_function(string &lhs, string &rhs) //descending order
{
  return lhs.length() > rhs.length();
}





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
cout << '\n' << endl;
/// """""""7.swap function""""""""
/*Swaps two list, if there is exception thrown while swapping any element, swap()
throws exception. Both lists which are to be swapped must be of the same type,
i.e you can’t swap list of an integer with list of strings.*/

std::list<int> swap1{1,2,3,4};
std::list<int> swap2{5,6,7,8};
cout << "Before swapping" << endl;
cout << "swap1 : ";
for(auto itr : swap1)
{
  cout << itr << " ";
}
cout << "\nswap2 : ";
for(auto itr : swap2)
{
  cout << itr << " ";
}

swap1.swap(swap2); // Syntax
cout  << endl;
cout << "\nAfter swapping" << endl;
cout << "swap1 : ";
for(auto itr : swap1)
{
  cout << itr << " ";
}
cout << "\nswap2 : ";
for(auto itr : swap2)
{
  cout << itr << " ";
}

cout << '\n' << endl;

// """8.reverse function""""
//This method can be used to reverse a list completely.
swap1.reverse();
swap2.reverse(); // syntx

cout << "swap1 : ";
for(auto itr : swap1)
{
  cout << itr << " ";
}
cout << "\nswap2 : ";
for(auto itr : swap2)
{
  cout << itr << " ";
}
cout << '\n' << endl;

// """"""9.sort function"""""""""
/*sort() method sorts the given list. It does not create new sorted list but
changes the position of elements within an existing list to sort it.
This method has two variations :

1.sort() : sorts the elements of the list in ascending order, the element of the
list should by numeric for this function.
2.sort(compare_function) : This type of sort() is used when we have to alter the
 method of sorting. Its very helpful for the elements that are not numeric.
  We can define how we want to sort the list elements in compare_funtion.
   For example, list of strings can be sorted by the length of the string,
   it can also be used for sorting in descending order.*/

  std::list<int> list1 = {2,4,5,6,1,3};
  std::list<string> list2 = {"h", "hhh", "hh"};

  list1.sort();// 1.syntax sorts ascending order numeric type only
  for(int &itr : list1)
  {
    cout << itr << " " ;
  }

  // compare function

  cout << endl;

  list2.sort(compare_function);
  for(auto itr : list2)
  {
    cout << itr <<" " ;
  }

  cout << '\n' << endl;


/*  splice function

splice() method transfers the elements from one list to another.
There are three versions of splice :

1.splice(iterator, list_name) : Transfers complete list list_name at position
pointed by the iterator.

2.splice(iterator, list_name, iterator_pos) : Transfer elements pointed by
iterator_pos from list_name at position pointed by iterator.

3.splice(iterator, list_name, itr_start, itr_end) : Transfer range
specified by itr_start and itr_end from list_name at position pointed by iterator.*/

std::list<int> list3 = {1,2,3,4};
std::list<int> list4 = {5,6,7,8};
std::list<int>::iterator its = list3.begin();
advance(its,1);

list3.splice(its, list4); //inserts complete list4 in list3 at list3[1]
for(auto itr : list3)
{
  cout << itr <<" " ;
}

cout << '\n' << endl;


// """""  merge function   """"""""""
/*Merges two sorted list. "It is mandatory that both the list should be sorted first."
 merge() merges the two list such that each element is placed at its proper position
  in the resulting list. Syntax for merge is list1.merge(list2).

The list that is passed as parameter does not get deleted and the list which
calls the merge() becomes the merged list*/

std::list<int> mergelist1 = {1,2,3,4,5};
std::list<int> mergelist2 = {6,7,8,9,10};

mergelist1.merge(mergelist2);

for(auto itr : mergelist1)
{
  cout << itr << " ";
}


}
