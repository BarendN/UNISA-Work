//Append data to the end of the file data.txt
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){

  cout << "Opening data.txt for appending.\n";
  ofstream fout;
  fout.open("data.txt", ios::app);
  if(fout.fail()){
    cout << "Input file opening failed.\n";
    exit(1);
  }

  fout << "5 6 pick up sticks.\n" << "7 8 ain't c++ great!\n";
  fout.close();
  cout << "End of appending to the file.\n";
  return 0;
}
