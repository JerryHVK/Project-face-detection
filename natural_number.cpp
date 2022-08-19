#include<iostream>
#include<math.h>

using namespace std;

bool Isprime(int n){
    if(n < 2) return false;
    for(int i=2; i <= sqrt(n); i++){
        if( n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N, t, k, sum, a;
    while(true){
        cout << "1 - Factor number in to primes" << endl;
        cout << "2 - Count the number of divisors" << endl;
        cout << "3 - Find the sum of all divisors" << endl;
        cout << "4 - Run all three programs sequentially" << endl;
        cout << "5 - Exist" << endl;
        cout << "Enter your choice: ";
        cin >> t;
        switch (t){
            case 1: //Prime factorization or Integer factorization
                cout << "Enter the number: ";
                cin >> N;
                cout << N << " = ";
                for(int i=2; i <= N; i++){
                    if(N % i == 0){
                        if(Isprime(i)){
                            int x=0;
                            while(N % i == 0){
                                x++;
                                N = N/i;
                            }
                            cout << i << "^" << x;
                            if(N != 1) cout << "x";
                        }
                    }
                }
                cout << endl;
                system("pause");
                break;
            case 2: //Counting the number of divisors
                cout << "Enter the number: ";
                cin >> N;
                k = 0;
                for(int i=1; i <= sqrt(N); i++){
                    if(N % i == 0){
                        if( i == N/i){
                            k++;
                        }
                        else{
                            k = k + 2;
                        }
                    }
                }
                cout << "The number of divisors is " << k << endl;
                system("pause");
                break;
            case 3: // Find the sum of all divisors
                cout << "Enter the number: ";
                cin >> N;
                sum = 0;
                for(int i=1; i <= sqrt(N); i++){
                    if(N % i == 0){
                        if(i != N/i){
                            sum = sum + i + N/i;
                        }
                        else{
                            sum = sum + i;
                        }
                    }
                }
                cout << "The sum of all divisors is " << sum << endl;
                system("pause");
                break;
            case 4: // Run all three programs sequentially
                cout << "Enter the number: ";
                cin >> N;
                
                // case 1:
                
                a = N;
                cout << "Prime factorization of " << N << " is " << N << " = ";
                for(int i=2; i <= N; i++){
                    if(N % i == 0){
                        if(Isprime(i)){
                            int x=0;
                            while(N % i == 0){
                                x++;
                                N = N/i;
                            }
                            cout << i << "^" << x;
                            if(N != 1) cout << "x";
                        }
                    }
                }

                // case 2:
                
                N = a;
                k = 0;
                for(int i=1; i <= sqrt(N); i++){
                    if(N % i == 0){
                        if( i == N/i){
                            k++;
                        }
                        else{
                            k = k + 2;
                        }
                    }
                }
                cout << endl << "The number of divisors is " << k << endl;

                // case 3:
                
                N = a;
                sum = 0;
                for(int i=1; i <= sqrt(N); i++){
                    if(N % i == 0){
                        if(i != N/i){
                            sum = sum + i + N/i;
                        }
                        else{
                            sum = sum + i;
                        }
                    }
                }
                cout << "The sum of all divisors is " << sum << endl;
                system("pause");

                break;
            case 5: // Exist
                cout << "Thanks for using our service, goodbye and see you again!";
                return 0;
        }
    }
    
}