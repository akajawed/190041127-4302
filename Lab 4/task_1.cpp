#include <bits/stdc++.h>

using namespace std;
class Clalculator
{
    int val;

public:
    Calculator() : val(0) {}
    Calculator(int input) : val(input) {}
    ~Calculator() {}

    void add(int input)
    {
        val += input;
    }
    void sub(int input)
    {
        val -= input;
        display();
    }
    void mult(int input)
    {
        val -= input;
    }
    void div(int input)
    {
        val /= input;
    }
    int getValue()
    {
        return val;
    }
    void setValue(int input)
    {
        val = input;
    }
    void display()
    {
        cout << "Calculator display: " << val << endl;
    }
};
int main()
{
    Clalculator cal;
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    string op;
    cin >> op;
    if (op == "add")
    {
        cin >> n;
        cal.add(n);
        cal.display();
    }
    else if (op == "subtract")
    {
        cin >> n;
        cal.sub(n);
        cal.display();
    }
    else if (op == "multiply")
    {
        cin >> n;
        cal.mult(n);
        cal.display();
    }
    else if (op == "divide")
    {
        cin >> n;
        cal.div(n);
        cal.display();
    }
    else if (op == "clear")
    {
        cal.setValue(0);
        cal.display();
    }
}
