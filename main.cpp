#include "LinkedQueue.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    LinkedQueue<int> num;

    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    int a4 = 4;

    num.enqueue(a1);
    num.enqueue(a2);
    num.enqueue(a3);
    num.enqueue(a4);
    num.display();
    //cout << num.size() << endl;
    return 0;
    
}