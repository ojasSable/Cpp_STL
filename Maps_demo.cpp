/*Maps contain sorted key-value pair, in which each key is unique and cannot be changed,
 and it can be inserted or deleted but cannot be altered. Value associated with keys can be altered.
 We can search, remove and insert in a map within O(n) time complexity.*/

#include<iostream>
#include<map>

using namespace std;

int main()
{
  //"""""""""Initialization""""""""""
//  map<key_type , value_type> map_name;

std::map<int,string> m0 {{1,"Ross"},{2,"Chandler"},{3,"Phoebe"}};
/* creates a map m with keys 1,2,3 and
        their corresponding values Ross,Chandler,Phoebe */

std::map<int,string> m1;
m1[100] = "Joey";// inserts key = 100 with value = Joey
m1[105] = "Rachel";// inserts key = 105 with value = Rachel
m1[110] = "Monica";// inserts key = 110 with value = Monica

std::map<int,string> m2(m0.begin(),m0.end()); // copies m0 ro m2

//**********member Functions************************

/* ****************1.at and [ ]
Both at and [ ] are used for accessing the elements in the map.
The only difference between them is that at throws an exception
if the accessed key is not present in the map, on the other hand
operator [ ] inserts the key in the map if the key is not present already in the map.*/


   cout << m2.at(1) << endl ;  // prints value associated with key 1 ,i.e Ross
   cout << m2.at(2) << endl ;  // prints value associated with key 2 ,i.e Chandler
   cout << m2.at(3) << endl ; // prints value associated with key 2 ,i.e Phoebe
   cout << "\n" << endl;

   cout << m2[1] << endl ;  // prints value associated with key 1 ,i.e Ross
   cout << m2[2] << endl ;  // prints value associated with key 2 ,i.e Chandler
   cout << m2[3] << endl ; // prints value associated with key 2 ,i.e Phoebe
   cout << "\n" << endl;

   m2[4] = "Smelly Cat"; //inserts value = "Smelly cat" with key value 4
   cout << m2[4] << endl;
   cout << "\n" << endl;

/* ***********  empty, size and max_size ************************
empty() returns boolean true if the map is empty, else it returns Boolean false.
 size() returns number of entries in the map, an entry consist of a key and a value.
  max_size() returns the upper bound of the entries that a map can contain
  (maximum possible entries) based on the memory allocated to the map. */

  bool b = m2.empty();
  cout << b << endl;

  int size = m2.size();
  cout << size << endl;

  int max_size = m2.max_size();
  cout << max_size << endl;

 cout << "\n" << endl;

  /* ************insert and insert_or_assign*********************
  insert() is used to insert entries in the map. Since keys are unique in a map,
   it first checks that whether the given key is already present in the map or
   not, if it is present the entry is not inserted in the map and the iterator
   to the existing key is returned otherwise new entry is inserted in the map.

  There are two variations of insert():

  insert(pair) : In this variation, a pair of key and value is inserted in the map.
   The inserted pair is always inserted at the appropriate position as keys
   are arranged in sorted order.
  insert(start_itr , end_itr): This variation inserts the entries in range
  defined by start_itr and end_itr of another map.
  The insert_or_assing() works exactly as insert() except that if the given
  key is already present in the map then its value is modified.
  */

std::map<int,string> beauties {{1,"Alexandra daddrio"}};
     beauties.insert( pair<int,string> (2,"Paige renee"));

     std::map<int,string> m5 {{3,"Rachel"},{4,"Monica"},{5,"Phoebe"}};
     beauties.insert(m5.begin(),m5.end());

     beauties.insert(make_pair(6,"Robin Scherbatsky"));

  for(auto itr : beauties)
  {
    cout << itr.first << " : " <<  itr.second << endl;
  }
  cout << "\n" << endl;
/* ***************  erase and clear *************************
  erase() removes the entry from the map pointed by the iterator
  (which is passed as parameter), however if we want to remove all the
  elements from the map, we can use clear(), it clears the map and sets its size to 0.

  There are two variations of erase :

  erase(iterator_itr) : This removes entry from the map pointed
                        by iterator iterator_itr, reducing the size of map by 1.
  erase(start_iterator, end_iterator) : It removes the elements in range
                                        specified by the start_iterator and end_iterator. */

  cout << "Before using clear on map m2" << endl;
   b = m2.empty();
  cout << b << endl;
  cout << "After using clear on map m2" << endl;

  m2.clear() ; // clear()
  b = m2.empty();
  cout << b << endl;

    cout << "\n" << endl;
  auto itr = beauties.begin();
  advance(itr,6);
  beauties.erase(itr); // erase(itrerator_itr)

  for(auto itr : beauties)
  {
    cout << itr.first << " : " <<  itr.second << endl;
  }
    cout << "\n" << endl;


itr = beauties.begin();
auto itr2 = itr;
advance(itr,3);
advance(itr2,5);
  beauties.erase(itr,itr2);

  for(auto itr : beauties)
  {
    cout << itr.first << " : " <<  itr.second << endl;
  }

    cout << "\n" << endl;
  return 0;
}
