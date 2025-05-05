#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang 
{
    private:
         string nama;

    public:
        void setNama(string pNama);
        friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a);
};   

void orang::setNama(string pNama)
{
     nama = pNama;
}
void siswa:: setId(int pId)
{
    id = pId;
}

void siswa::displayAll(orang &a)
{
    cout << id << endl
         << a.nama;
}
int main()
{
    orang Joko;
    Joko.setNama("Joko Susilo");
    siswa Joko_siswa;
    Joko_siswa.setId(1);
    Joko_siswa.displayAll(Joko);
    return 0;
}