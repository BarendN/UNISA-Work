//all the occurences of 'C' are replaced by "C++".
//Assumes that the uppercase letter 'C' does not occur in cad.dat except
//as the name of the C programming langauge.
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void add_plus_plus(ifstream& instream, ofstream& outstream);
//Precondition: instream has been connected to an input file with open.
//outstream has been connected to an ooutput file with open.
//Postcondition: The contents of the file connected to instream have been
// copied into the file connected to outstream, but with each 'C' replaced
//by "C++". (The files are not closed by this funciton.)

int main(){
  ifstream fin;
  ofstream fout;
  cout << "Begin Editing Files.\n";
  fin.open("cad.txt");
  if(fin.fail()){
    cout << "Input file opening has failed.\n";
    exit(1);
  }

  fout.open("cplusad.txt");
  if(fout.fail()){
    cout << "Output file opening failed.\n";
    exit(1);
  }

  add_plus_plus(fin, fout);
  fin.close();
  fout.close();
  cout << "End of editing files.\n";
  return 0;
}

void add_plus_plus(ifstream& instream, ofstream& outstream){
  char next;
  instream.get(next);
  while(! instream.eof()){
    if(next == 'C') outstream << "C++";
    else outstream << next;
    instream.get(next);
  }
}
