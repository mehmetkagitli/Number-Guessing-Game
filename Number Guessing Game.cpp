
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


int main()
{
    srand(time(0));

    int randomNum = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100 : ";

    while (true){
    cin >> guess;

    if (guess < randomNum) {
        cout << "Please enter a larger number.";
    }
    else if (guess > randomNum) {
        cout << "Please enter a smaller number.";
    }
    else {
        cout << "Congratulations! You guessed it right :)";
        break;
    }
    }

}
