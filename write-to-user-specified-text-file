//Reads 3 nums from the file specified by the user, sums the numbers
//and writes the sum to another file specified by the user.
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

  char in_file_name[16], out_file_name[16];
  ifstream instream;
  ofstream outstream;

  cout << "I will sum 3 nums taken from an input\nfile and write them to an output file.\n";
  cout << "Enter the input file name (maximum 15 characters):\n";
  cin >> in_file_name;
  cout << "Enter the output file name (maximum of 15 characters):\n";
  cin >> out_file_name;

  instream.open(in_file_name);
  if(instream.fail()){
    cout << "Input file opening failed.\n";
    exit(1);
  }

  outstream.open(out_file_name);
  if(outstream.fail()){
    cout << "Output file opening failed.\n";
    exit(1);
  }

  int first, second, third;
  instream >> first >> second >> third;
  outstream << first + second + third;

  instream.close();
  outstream.close();

  cout << "End of program.\n";

  return 0;
}
