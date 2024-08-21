#include <iostream>
using namespace std;

void print(int n) {
   for (int i = 1; i <= n; i++) {
      printf("%d ", i);
   }
}

void printR(int n) {
   if (n <= 0) return;

   printR(n - 1);
   cout << n << " ";
}

int main(int argc, char** argv) {

   //    int n;
   //    if (argc > 1) {
   //       n = stoi(argv[1]);
   //    } else {
   //       n = 10;
   //    }

   int n = argc > 1 ? stoi(argv[1]) : 10;
   //    print(n);
   printR(n);
}