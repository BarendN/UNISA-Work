//Reads 3 nums from the file inFile.txt, sums the numbers
//and writes the sum to the file outFile.txt
//(A better version of this program will be given in Display 6.2)
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){

  ifstream inFile;
  ofstream outFile;
  outFile.open("outFile.txt");
  inFile.open("inFile.txt");

  if(inFile.fail()){
    cout << "Opening the input file has failed.";
    exit(1);
  }

    int first, second, third;

    inFile >> first >> second >> third;
    outFile << "The sum of the first 3\nnumbers in infile.txt\nis " << first + second + third << endl;

  return 0;
}
