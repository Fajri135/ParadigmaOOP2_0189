#include <iostream>
using namespace std;

// Class parent
// Tambahkan final sesudah nama class
// Untuk mencegah adanya overriding
class baseClass
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya function dari base class";
    }
};

class derivedClass : public baseClass 
{
public:
    void perkenalan()
    {
        cout << "Hallo saya function dari derived class";
    }
};

int main()
{
   ;
}

