#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "String in C++ are very nice.";
	
	for (int i = 0; i < str.size(); i++) {
	  cout << str[i] << ' ';
  }
  cout << endl;
   
  for (int i = 0; i < str.size(); i++) {
	  cout << str.at(i) << ' ';
  }
  cout << endl;

  for (char c : str) { 
	  cout << c << ' ';
  }
   cout << endl;

}