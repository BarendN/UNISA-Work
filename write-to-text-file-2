//Reads 3 files from the file inFile.txt, sums the nums
//and writes the sum to the file outFile.txt
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  ifstream in_stream;
  ofstream out_stream;

  in_stream.open("inFile.txt");
  if(in_stream.fail()){
    cout << "input File opening failed.\n";
    exit(1);
  }
  out_stream.open("outFile.txt");
  if(out_stream.fail()){
    cout << "Output File opening failed.\n";
    exit(1);
  }

  int first, second, third;
  in_stream >> first >> second >> third;
  out_stream << "The sum of the first 3\nnumbers in inFile.txt\nis " << (first + second + third) << endl;
  in_stream.close();
  out_stream.close();

  return 0;
}
