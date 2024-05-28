#include <iostream> 
using namespace std;

class seseorang
{
public:
    // Pure virtual function
    virtual void pesan() = 0;

    // Virtual function biasa
    // Virtual void pesan()
    // {
    //   cout << "Pesan dari seseorang" << end;
    // }
};

class joko : public seseorang 
{
public:
    // Deklarasi
    void pesan()
    {
        // Implementasi
        cout << "Pesan dari joko" << endl;
    }
};

class lia : public seseorang
{
public:
    void pesan()
    {
        cout << "Pesan dari lia" << endl;
    }
};

int main()
{
    
}
