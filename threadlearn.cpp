//t1.join();   // main thead will wait t1 to finish
//t1.detach(); //seprate main thread from t1 thread both will excecute parellel

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
std::mutex mu;
void shared(int number)
{
mu.lock();
cout<<number;
mu.unlock();
}
void func1()
{
for(int i=0;i<1000;i++)	
{
shared(1);
}
}

void func2()
{
for(int i=0;i<1000;i++)
{
shared(2);
}
}

void func3()
{
for(int i=0;i<1000;i++)
{
shared(3);
}
}

int main()
{
std::thread t1(func1); // t1 thread start running
sleep(1);
std::thread t2(func2); // t2 thread start running
sleep(1);
std::thread t3(func3); // t3 thread start running
t1.join();
t2.join();
t3.join();
return 0;
}
