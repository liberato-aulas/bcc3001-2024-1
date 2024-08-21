#include <iostream>
using namespace std;

int fat(int n) {
   int total = 1;
   for (int i = n; i > 0; i--) {
      total = total * i;  // (1 x 5) = 5
                          // (5 x 4) = 20
                          // (20 x 3) = 60
                          // (60 x 2) = 120
                          // (120 x 1) = 120
   }
   return total;
}

int fatR(int n) {
   if (n <= 1) return 1;

   return n * fatR(n - 1);
}

int main(int argc, char** argv) {

   int n = argc > 1 ? stoi(argv[1]) : 5;

   //    cout << fat(n) << endl;
   cout << fatR(n) << endl;
}