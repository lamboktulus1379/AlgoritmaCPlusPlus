#include <iostream>

using namespace std;

// tipe, name, argumen
int kali_tiga(int a)
{
    return a * 3;
}

void print()
{
    cout << "Hello" << endl;
    cout << "World" << endl;

    return;
}

bool palindrome(string pal)
{
    cout << pal[0] << endl;

    cout << "Panjang adalah: " << pal.length() << endl;

    // katak
    // pal[0] = k
    // pal[1] = a
    // pal[2] = t
    // pal[3] =
    cout << "Pal: " << pal[4] << endl;

    return false;
}

int main()
{
    // Menentukan ganjil atau genap

    // + - : * %
    // Modulus
    // 5 % 2 = 1; 10 % 2 = 0; 999 % 3 = 0;
    // print();
    // print b

    // kalikan dengan 3
    int a;
    cout << "Masukkan bilangan: " << endl;
    cin >> a;

    int result = kali_tiga(a);

    cout << "hasil adalah: " << result << endl;

    //
    cout << "Palindrome" << endl;
    string pal = "katak";
    palindrome(pal);

    return 0;
}