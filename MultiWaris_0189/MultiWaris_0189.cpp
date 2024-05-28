#include <iostream> 
using namespace std;


class Orang {
public:
	int umur;

	Orang(int pUmur) :
		umur(pUmur)
	{
		cout << "orang dibuat dengan umur " << umur << "\n" << endl;
	}
};

class Pekerja : virtual public Orang {
public:
	Pekerja(int pUmur) :
		Orang(pUmur) {
		cout << "pekerja dibuat\n" << endl;
	}
};



int main() {
	;
}
