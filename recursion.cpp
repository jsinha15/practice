#include <iostream>
using namespace std;
void funB(int n);
// tail recursion
void fun1(int n)
{
    if (n > 0)
    {
        cout << n;
        fun1(n - 1);
    }
}
// head recursion
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        cout << n << " ";
    }
}
// tree recursion
void Tree_fun(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        Tree_fun(n - 1);
        Tree_fun(n - 1);
    }
}
// indirect recursion
void funA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 1)
    {
        cout << n << " ";
        funA(n / 2);
    }
}
// nested recursion
int NestedRecursion(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
        NestedRecursion(NestedRecursion(n + 11));
}
// sum of first n natural number
int SumOfNaturalNo(int n)
{
    if (n == 0)
        return 0;
    else
        return SumOfNaturalNo(n - 1) + n;
}
// factorial of n
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return factorial(n - 1) * n;
}

// exponent
int exponent(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return exponent(m, n - 1) * m;
}
//exponent but better
int pow(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return exponent((m * m), n / 2);
    else
        return m * exponent((m * m), n / 2);
}
// taylor series
double Taylor(int x, int n)
{
 static double p=1,f=1;
 double r;

 if(n==0)
 return 1;
 r=Taylor(x,n-1);
 p=p*x;
 f=f*n;
 return r+p/f;
}

int main()
{
    int x = 3;
    int y = 20;
    int z = 90;
    int p = 5;
    int num = 2;
    int e = 6;
    fun1(x);
    cout << endl;
    fun2(x);
    cout << endl;
    Tree_fun(x);
    cout << endl;
    funA(20);
    cout << endl;
    funB(20);
    int r = NestedRecursion(z);
    cout << r << " " << endl;
    int s = SumOfNaturalNo(5);
    (s == 0) ? cout << "0 is not a natural number u dumbfuck" : cout << "the sum is " << s << endl;
    int f = factorial(p);
    (f == 1) ? cout << "factorial of 0 is 1" : cout << "factorial of " << p << " is " << f << endl;
    int value = exponent(num, e);
    (value == 1) ? cout << value << " " : cout << value << " " << endl;
    int power = pow(num, e);
    if (power == 1)
    {
        cout << value << endl;
    }
    else
        cout << power << endl;
    double series=Taylor(1,10);
    (series==1)?cout<<"the value is 1 ":cout<<"the value is "<<series<<endl;    
    
    return 0;
}

