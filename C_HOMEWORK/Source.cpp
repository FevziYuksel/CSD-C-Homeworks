#include <iostream>
#include <future>
#include <chrono>
#include <coroutine>
using namespace std;

int square(int x) {
    return x * x;
}
//
//int main() {
//    int v;
//    auto a = async(&square, 10);
//
//    //a.wait();
//    v = a.get();
//       
//    
//
//    cout << "The thread returned " << v << endl;
//    return 0;
//}