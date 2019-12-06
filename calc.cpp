#include<iostream>
using namespace std;

int main()
{
    double a, b, c;
    bool exit = false;
    do
    {
        int choice;

        cout<<"\nEnter the first number --> ";
        cin>>a;
        cout<<"\nEnter the second number --> ";
        cin>>b;

        cout<<"\n---------------------MENU---------------------\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. DIVIDE\n5. EXIT\n choice --> ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                    c = a + b;
                    cout<<"\nResult = "<<c;
                    break;
            case 2:
                    c = a - b;
                    cout<<"\nResult = "<<c;
                    break;
            case 3:
                    c = a * b;
                    cout<<"\nResult = "<<c;
                    break;
            case 4:
                    c = a / b;
                    cout<<"\nResult = "<<c;
                    break;

            case 5:
                    exit = true;
                    break;

            default : cout<<"\nInvalid Choice!!!";
        }
    }while(!exit);
    return 0;
}