#include <iostream>
#include <sstream>

using namespace std;
void bub_sort(int *mas, unsigned int k)
{
    for (unsigned int i = 0; i < k ; i++)
    {
        for (unsigned int j = 0; j<k-i-1; j++)
        {
            if (mas[j]>mas[j+1])
            {
            swap(mas[j ],mas[j+1]);
            }
        }
    }
}
    bool read (int *mas, unsigned int k)
    {
        string stroka;
        getline(cin,stroka);
        istringstream stream (stroka);
        for (unsigned int i=0; i<k;i++)
        {
            if (!(stream>>mas[i]))
            {
                cout<<"Error"<<endl;
                return false;

            }
        }
        return true;
    }

int main() {
    unsigned int k;                             
    cin >> k;
    cin.get();
    int *mas = new int[k];
    if (read(mas, k)) {
        bub_sort(mas, k);
        for (unsigned int i = 0; i < k; i++) {
            cout << mas[i] << " ";
        }
    }
    return 0;
}
