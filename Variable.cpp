// String 
// int
// float
// bool

#include <string.h>
#include <iostream>

int Gesundheit = 100;

int output ()
{
    std::cout << "Gesundheit : " << + Gesundheit << "\n";
    return 0;
}
int gesMinus ()
{
    Gesundheit --;
    return 0;
}

int main()
{
    for (int i = 0; i < 11; i++)
    {
    output(); 
    gesMinus();
    }
    
    return 0;

}