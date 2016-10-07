#include <iostream>

int c;
float a;
float b;
using namespace std;
double summary(float a, float b); // сумма двух чисел
double division(float a, float b); // деление
double multiplication(float a, float b);
double  sub(float a, float b);
double  involutioin(float a, float c);
double square_root(float a); //произведение, Разность, возведение в степень, квадратный корень

int main() {

    setlocale(LC_ALL,"rus");
    //float a=1.728,b=2.418;
    //int c=16;
    std::cout<<"Введите целое значение, корень которого хотите вычислить\n";
    std::cin>>c;
    std::cout<< "Введите значение a\n ";
    std::cin>>a;
    std::cout<< "Введите значение b\n ";
    std::cin>>b;


    std::cout<<"\nCумма равна: " << summary(a,b);
    std::cout<<"\nРазность равна: "<< sub(a,b);
    std::cout<<"\nПроизведение равно: "<< multiplication(a,b);
    std::cout<<"\nЧастное равно: "<< division(a,b);
    std::cout<<"\na в степени c равно: "<< involutioin(a,b);
    std::cout<<"\nквадратный корень из c равен: "<<square_root(c) ;


    return 0;
}


double summary(float a, float b)
{
    return  a+b;
}

double sub (float a, float b)
{
    return a-b;
}

double  multiplication (float a, float b)
{
    return a*b;
}

double division (float a, float b)
{
    return a/b;
}

double involutioin (float a, float b)
{
    double  result = a;
    for(int i = 1; i <b; i++)
    {
        result *=a;
    }

    return result;
}
double square_root(float c)
{
    float z =0;
    while (z*z < c){
        z++;
    }

    return z;
}
