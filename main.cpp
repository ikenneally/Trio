#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int,int,int);
void swap(int&,int&);
//Main used to input numbers from user and call sort, then print accordingly
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
//Print in reverse order, so they are from greatest to least
  cout<<numC<<","<<numB<<","<<numA<<endl;
return 0;
}
//sortDescending sorts the numbers into descending order, which we will later print out in reverse to fix the output order
void sortDescending(int first, int second, int third)
{
if( first < third )
{
swap(first,third);
}
if( second < first )
  {
    swap(first,second);
  }
  if( third<second )
  {
    swap(second,third);
  }
}
//Swaps the two given integers with eachothers values
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
