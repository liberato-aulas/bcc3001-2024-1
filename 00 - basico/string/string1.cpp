#include <iostream>
#include <string>
using namespace std;

int main() {
   string nome1 = "Joao";
   string nome2("Maria");
   string nome3, nome4;

   nome3 = "Jose";
   nome4 = nome1 + " " + nome2 + " Luis";

   cout << nome1 << endl;
   cout << nome2 << endl;
   cout << nome3 << endl;
   cout << nome4 << endl;

   cout << "Size: " << nome1.size() << endl;
   cout << "Length: " << nome1.length() << endl;
   cout << "Capacity: " << nome1.capacity() << endl;
   cout << "Max-Size: " << nome1.max_size() << endl;
}