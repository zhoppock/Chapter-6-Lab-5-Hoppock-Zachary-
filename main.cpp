// Hoppock, Zachary
// removeDuplicates.cpp
// November 21, 2020
// Remove duplicate numbers from a vector
// Version #1
#include <vector>
#include <iostream>

using namespace std;

/**
   Removes duplicates from a vector
   @param values an array of random values that contains duplicates
*/
void remove_duplicates(vector<double>& values)
{
  for (int i = 0; i < values.size(); i++)
  {
    int target = values[i];
    for (int j = i + 1; j < values.size(); j++)
    {
      if (values[j] == target)
      {
        for (int k = j + 1; k < values.size(); k++)
        { 
          values[k - 1] = values[k]; 
        }
        values.pop_back();
      }
    }
  }
}

int main()
{
  vector<double> values = {1, 4, 9, 16, 9, 7, 4, 9, 11};
  cout << "Original vector:" << endl;
  for (int i = 0; i < values.size(); i++)
  {
    cout << values[i] << " ";
  }
  remove_duplicates(values);
  cout << endl << "Altered vector:" << endl;
  for (int i = 0; i < values.size(); i++)
  {
    cout << values[i] << " ";
  }
  return (0);
}