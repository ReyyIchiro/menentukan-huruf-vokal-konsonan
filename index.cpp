#include <iostream>
using namespace std;

int main()
{
  char huruf;

  cout << "Masukkan huruf: ";
  cin >> huruf;

  if ((huruf >= 'a' && huruf <= 'z') || (huruf >= 'A' && huruf <= 'Z'))
  {
    if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u' ||
        huruf == 'A' || huruf == 'E' || huruf == 'I' || huruf == 'O' || huruf == 'U')
    {
      cout << huruf << " adalah huruf vokal." << endl;
    }
    else
    {
      cout << huruf << " adalah huruf konsonan." << endl;
    }
  }
  else
  {
    cout << huruf << " bukan huruf alphabet." << endl;
  }

  return 0;
}

