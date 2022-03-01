/*
Author: Camren Henderson
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab4B

Prints "*" and " " into a checkerboard
*/

#include <iostream>
using namespace std;

int
main ()
{
  //Initialize variables
  int w, h;

  //Inputs
  cout << "Enter width: ";
  cin >> w;
  cout << "Enter height: ";
  cin >> h;

  std::cout << "Shape: " << std::endl;

  //Decalre star and incrementors
  char x = '*';
  int s = 0, ix = 0;


  for (int row = 0; row < h; row++)
    {
      for (int col = 0; col < w; col++)
	{

	  if ((col % 6 < 3 && row % 6 < 3) || (col % 6 >= 3 && row % 6 >= 3))
	    {

	      if (ix < 3)
		{
		  cout << x;
		}
	      //Increase by one
	      ix++;

	      if (ix == 3)
		{
		  ix = 0;
		}

	    }
	  else
	    {
	      if (s < 3)
		{
		  cout << " ";
		}
	      //Also increase by one
	      s++;

	      if (s == 3)
		{
		  s = 0;
		}
	    }
	}
      cout << endl;
    }
}
