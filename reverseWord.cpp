#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

string rvrs_ln(const string& line);

int main(){

   ifstream infile("B-small-practice.in");
   ofstream oufile("B-small-practice-result.out");

   // check if the files were opened successfully
   if(!infile) cout<<"Could not open input file"<<endl;
   if(!oufile) cout<<"Could not open output file"<<endl;

   int x = 1;       //index for formatting output file
   string line;
   int test_cases;
   infile>>test_cases;      //this is never used
   getline(infile,line);    //discards first line

   for(; getline(infile,line); x++){
       string all = rvrs_ln(line);
       oufile<<"Case #"<<x<<": "<<all<<endl;
   }
   infile.close();
   oufile.close();
}

string rvrs_ln(const string& line){
    istringstream buffer(line);
    string wrd,rvrs;
    vector<string> hold;
    int count_wrd = 0;

    while(buffer>>wrd){
        hold.push_back(wrd);
        count_wrd++;
    }
    for(int i = count_wrd-1; i>=0; --i){
        rvrs += hold[i];
        rvrs += " ";
    }
    return rvrs;
}
