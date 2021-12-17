#include <iostream> 

using namespace std;

class complex_number
{
   public :
      int real, imag;
};

int main()
{
   complex_number num;

   
   cout << "Enter real and imaginary parts of complex number:"<<endl; 
   cin >> num.real >> num.imag;
};
return 0;
}
