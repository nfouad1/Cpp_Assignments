#include <iostream>
#include <stack>

using namespace std;

int main (){

stack<int> teststack;

teststack.push(1);
teststack.push(2);
teststack.push(3);

while (!teststack.empty())
{
    cout << ' ' << teststack.top();
    teststack.pop();
}



}
