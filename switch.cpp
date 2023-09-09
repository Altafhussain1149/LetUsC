#include <iostream>
using namespace std;
void fact(int);
void prime(int);
void even_odd(int);

int main()
{
    int choice, number;
    // cout<<"Hello User, Please enter a choice from the following:"<<endl;
    while (1)
    {
        cout << "Enter your choice:" << endl;
        cout << "1. Factorial" << endl
             << "2. Prime or not" << endl
             << "3. Even or odd" << endl
             << "4. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter number: ";
            cin >> number;
            fact(number);
            break;
        case 2:
            cout << "Enter number: ";
            cin >> number;
            prime(number);
            break;
        case 3:
            cout << "Enter number: ";
            cin >> number;
            even_odd(number);
            break;
        case 4:
            exit(1);
            break;
        default:
            cout << "Invalid Choice"<<endl<<endl;
            break;
        }
    }
    return 0;
}
void fact(int x)
{
    if (x == 0)
        cout << "1";
    else if (x > 0)
    {
        int factorial = 1;
        for (int i = 2; i <= x; i++)
            factorial = factorial * i;
        cout << factorial;
    }
    else
        cout << "Not valid for factorial operation" << endl
             << endl;
}
void prime(int x)
{
    int flag=0;
    for(int i=2;i<=(x/2)+1;i++)
    {if(x%i==0)
        flag=1;
    }
    if(flag==0)
    cout<<"Prime number"<<endl<<endl;
    else 
    cout<<"Not prime number"<<endl<<endl;

}    

void even_odd(int x)
{
    if (x>1)
    {
        if(x%2==0)
        cout<<"Even number"<<endl<<endl;
        else 
        cout<<"Odd number"<<endl<<endl;

    }
    else
    cout<<"Not valid for prime or non prime"<<endl<<endl;
}