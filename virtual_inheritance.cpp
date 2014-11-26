#include<iostream>
using namespace std;
class storable //this is the our base class inherited by transmitter and receiver classes
{
        public:
        storable()
          {}
        virtual void read();
//        virtual ~storable();
   
};
//void storable::read()
//{
// cout<<"Storable"<<endl;
//}
class transmitter: virtual public storable 
{
        public:
        void read()
         {
           cout<<"transmit"<<endl;
         }
   
}; 

class receiver:  virtual public storable
{
        public:
        void read()
           {  
            cout<<"receiver"<<endl;
           }
      
};

class radio: public transmitter,public receiver
{
//        public:
 //       void read()
 //           {
 //            cout<<"radio"<<endl;
 //           }
};

int main()
{
//storable s;
radio r;
r.read();
storable *s = new receiver();
s->read();
return 0;
}
