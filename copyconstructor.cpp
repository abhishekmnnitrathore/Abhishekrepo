#include <iostream>
using namespace std;
class Test
{
private:
    int x;
    int y;
};
 
int main()
{
    Test t;
    t = 30; // conversion constructor is called here.
    return 0;
}
