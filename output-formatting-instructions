//Illustrates output formatting instructions
//Reads all the numbers in the file rawdata.txt and writes the numbers
//to the screen and to the file neat.txt in a neatly formatted way.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void make_neat(ifstream& messy_file, ofstream& neat_file, int number_after_decimalpoint, int field_width){
  neat_file.setf(ios::fixed); //Not in e-notation
  neat_file.setf(ios::showpoint); //Show decimal point
  neat_file.setf(ios::showpos); //Show + sign
  neat_file.precision(number_after_decimalpoint);
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.setf(ios::showpos);
  cout.precision(number_after_decimalpoint);

  double next;
  while(messy_file >> next){ //satisfies if there is a next number to read
    cout << setw(field_width) << next << endl;
    neat_file << setw(field_width) << next << endl;
  }

}

int main(){

  ifstream fin;
  ofstream fout;

  fin.open("in.txt");
  if(fin.fail()){
    cout << "Input file opening failed.\n";
    exit(1);
  }

  fout.open("neat.txt");
  if(fout.fail()){
    cout << "Output file opening failed.\n";
    exit(1);
  }

  make_neat(fin, fout, 5, 12);

  fin.close();
  fout.close();

  cout << "End of program.\n";
  return 0;

}
