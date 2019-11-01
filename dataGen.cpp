#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

/***** CONFIG *****/
const string FILENAME = "data.txt"; //name of file to write to
const int MIN = 1; //[inclusive] min range
const int MAX = 200; //[inclusive] max range (MAX = 2147483647)
const int COUNT = 100; //(number of integers to be generated
/***** CONFIG *****/

//Generates Random integers and write to a files (seperated by a space)
//OVERRIDES FILE
int main()
{
  ofstream file;
  file.open(FILENAME);

  /* initialize random seed: */
  srand(time(NULL));

  int cur;
  for(int i = 0; i< COUNT;i++)
  {
    cur = rand() % (MAX+1) + MIN;
    file << cur << endl;
  }

  file.close();
}
