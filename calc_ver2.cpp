#include <iostream>

double summary(float a, float b)
{
        return a+b;
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

double involutioin(float a, float b)
{
        double result = a;
        for(int i = 1; i <b; i++)
        {
                result *=a;
        }

        return result;
}

long double square_root(float a) {
double powi = 1;
int i;
for(i=1;i<a;i++)
{
if (involutioin(powi,2) == a) break;
else (powi = 0.5*(powi + a/powi));
}
return powi;
}
int main() {

        //int c;
        float a;
        float b;
        using namespace std;
        double division(float a, float b); // деление
        double multiplication(float a, float b);
        double sub(float a, float b);
        double involutioin(float a, float b);
        double square_root(float a); //произведение, Разность, возведение в степень, квадратный корень


        setlocale(LC_ALL,"rus");
        //float a=1.728,b=2.418;
        //int c=16;
      //  std::cout<<"Введите целое значение, корень которого хотите вычислить\n";
      // std::cin>>c;
        std::cout<< "Введите значение a\n ";
        std::cin>>a;
        std::cout<< "Введите значение b\n ";
        std::cin>>b;


        std::cout<<"\nCумма равна: " << summary(a,b);
        std::cout<<"\nРазность равна: "<< sub(a,b);
        std::cout<<"\nПроизведение равно: "<< multiplication(a,b);
        std::cout<<"\nЧастное равно: "<< division(a,b);
        std::cout<<"\na в степени c равно: "<< involutioin(a,b);
        std::cout<<"\nквадратный корень из c равен: "<<square_root(a) ;


        return 0;
}
