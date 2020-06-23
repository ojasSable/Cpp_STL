#include<iostream>
#include<vector>
using namespace std;

int main()
{
  // intializing a vector
  std::vector<int> v; // empty vector
  std::vector<int> v4 {7,8,9};
  std::vector<string> v1 {"Pankaj" ,"The" ,"Java" ,"Coder"}; // initialzed vector
  std::vector<string> v2(v1.begin(), v1.end()); //same elemnts of v1
  std::vector<string> v3(4 , "test"); // this inserts 'test' 4 times


//*****************************************************************************
  //*************** Member function of vector*****************************


  //********1. push_back()
  v.push_back(1);  //insert 1 at the back of v
  v.push_back(2);  //insert 2 at the back of v
  v.push_back(4);  //insert 3 at the back of v

  for(std::vector<int>::iterator it = v.begin(); it != v.end();it++)
  {
     cout << *it <<" ";   // for printing the vector
  }
  cout << "\n"<< endl;



  // 2.insert(itr, element) method inserts the element in vector before the
  //    position pointed by iterator itr.
  v.insert(v.begin()+2,3);


  //insert function can be overloaded by third argument, count as well.
  // This count parameter defines how many times the element is to
  // be inserted before the pointed position.

  // insert(itr,count,value)
  v3.insert(v3.begin()+2,4,"insert func");

  for(std::vector<string>::iterator it = v3.begin(); it != v3.end();it++)
  {
     cout << *it <<" " ;   // for printing the vector
  }
  cout << "\n"<< endl;


  //This method can also be used to insert elements from any other vector in
  //given range, specified by two iterators, defining starting and ending point of the range.
    v3.insert(v3.begin()+2,v1.begin(),v1.end());

    for(std::vector<string>::iterator it = v3.begin(); it != v3.end();it++)
    {
       cout << *it <<" ";   // for printing the vector
    }
    cout << "\n"<< endl;

// 3.pop_back()
// pop_back() is used to remove the last element from the vector.
// It reduces the size of the vector by one.
  cout << "vector v before pop_back function used" << endl;
  for(std::vector<int>::iterator it = v.begin(); it != v.end();it++)
  {
    cout << *it <<" ";   // for printing the vector
  }
  cout << "\n"<< endl;


 // pop back function is used to pop last element from vector
    v.pop_back(); // removes 4
    v.pop_back(); // removes 3
    v.pop_back(); // removes 2


    cout << "vector v after pop_back function used" << endl;
    for(std::vector<int>::iterator it = v.begin(); it != v.end();it++)
    {
      cout << *it <<" ";   // for printing the vector
    }
    cout << " \n" << endl;

// 4.erase()

//erase(itr_pos) removes the element pointed by the iterator itr_pos. erase method
// can also be overloaded with an extra iterator specifying the end
//point of the range to be removed, i.e erase(itr_start, itr_end).

   std::vector<int>v5 {10,20,30,40};

   v5.erase(v5.begin());   //removes first element from the vector

   for(std::vector<int>::iterator it = v5.begin(); it != v5.end();it++)
   {
     cout << *it <<" ";   // for printing the vector
   }
   cout <<"\n " << endl;

  // erase range of elements
    v5.erase(v5.begin(), v5.end() - 2 );
    /*removes all the elements except last two */

    for(std::vector<int>::iterator it = v5.begin(); it != v5.end();it++)
    {
      cout << *it <<" ";   // for printing the vector
    }
    cout <<"\n " << endl;

  //5. resize()


  /*resize(size_type n, value_type val) method resizes the vector to n elements.
   If the current size of the vector is greater than n then the trailing elements
    are removed from the vector and if the current size is smaller than n
     than extra val elements are inserted at the back of the vector.

For example, If the size of the vector is 4 right now, with elements {10, 20, 30, 40}
and we use resize method to resize it to size 5. Then by default a fifth element
 with value 0 will be inserted in the vector. We can specify the data to not be zero,
  by explicitly mentioning it as the val while calling the resize ethod. */

  v.resize(16,5); // value 5 is inserted in all newely added locations.
  for(std::vector<int>::iterator it = v.begin(); it != v.end();it++)
  {
    cout << *it <<" ";   // for printing the vector
  }
  cout <<"\n " << endl;


 //6.swap()

 /* This method interchanges value of two vectors.
  If we have two vectors v1 and v3 and we want to swap the elements inside them,
   you just need to call v1.swap(v3), this will swap the values
    of the two vectors. */

 v1.swap(v3);


//7.clear()
//This method clears the whole vector, removes all the elements from the vector
// but do not delete the vector.
//SYNTAX: clear()
//For a vector v, v.clear() will clear it, but not delete it.

  v.clear(); // makes the size of vector v zero as it deletes all elemets in v

// 8.size
// returns the sizeof vector i.e number of elements present in the vector
  v.size();
  v1.size();
  v2.size();

//9.empty()
// empty function
// This method returns true if the vector is empty else returns false.
bool b = v.empty();

// 10. capacity
//
// capacity function
// This method returns the number of elements that can be inserted in the vector
// based on the memory allocated to the vector.

v.capacity();
v1.capacity();
v2.capacity();

// 11.at()
//
// This method works same in case of vector as it works for array. vector_name.at(i)
// returns the element at ith index in the vector vector_name.
cout << v3.at(3) << endl;

// front and back functions
// vector_name.front() retuns the element at the front of the vector
// (i.e. leftmost element). While vector_name.back() returns the element at the
// back of the vector (i.e. rightmost element).

cout << v3.front() << endl;
cout << v3.back() << endl;
}
