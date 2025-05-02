#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;

int random_num(){
    srand(time(NULL)); ///To generate different random numbers each run

    int limit(100);
    int num = (rand() % limit) + 1; ///Will generate random number from 1 to 100
    return num;

}

int main(){
    cout << "Enter a number between 1 and 100: ";

    int num = random_num();

    int guess;
    while(num != guess){
        cout << "Enter a number again : ";
        cin >> guess;
        if(guess == num)
            cout << "Great you have guessed it right" << endl;
        else if(abs(num - guess)<= 10) cout << "Hot!" << endl;
        else cout << "cold" << endl;
    }

    return 0;
}
