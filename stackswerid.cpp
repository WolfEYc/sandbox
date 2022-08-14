// stack::swap
#include <iostream>       // std::cout
#include <stack>          // std::stack
using namespace std;

int main ()
{
    std::stack<int> foo, bar;
    foo.push (7); foo.push(15);


    foo.swap(bar);

    while(!foo.empty())
    {
        cout << foo.top() << endl;
        foo.pop();
    }
    cout << endl;
    while(!bar.empty())
    {
        cout << bar.top() << endl;
        bar.pop();
    }

    return 0;
}