// ATM system in C++
// Author: Abdulloh
// Features: check balance, deposit, withdraw

#include <iostream>
using namespace std;

int main()
{
    int b = 0, c, d, w;
    do
    {
        cout << "\n1. Check the balance \n2. Deposit money \n3. Withdraw money \n4. Exit \n";
        cin >> c;
        
        switch(c)
        {
            case 1:
                cout << "Your balance " << b << endl;
                break;
            case 2:
                do 
                {
                    cout << "Enter amount to deposit: ";
                    cin >> d;
                    
                    if(d <= 0)
                        cout << "Amount should be positive\n";
                    else
                    {
                        b += d;
                        cout << "You deposited " << d << ", now your balance " << b << endl;
                    }
                }while(d <= 0);
                break;
            case 3:
                do 
                {
                    cout << "Enter amount to withdraw: ";
                    cin >> w;
                    
                    if(w <= 0)
                        cout << "Amount should be positive\n";
                    else if(b < w)
                        cout << "There is no enough money on your balance\n";
                    else
                    {
                        b -= w;
                        cout << "You withdrawed " << w << ", now your balance " << b << endl;
                    }
                    break;
                }while(w <= 0 || w > b);   
                break;
            case 4:
                cout << "Thank you!";
                break;
            default:
                cout << "Invalid information\n";
        }
    }while(c != 4);
    return 0;
}
