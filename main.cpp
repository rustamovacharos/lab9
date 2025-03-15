
  //problem1 (recursion)
 /* int multipl(int a,int b){
    if (b==0){
      return 0;
    }
    if (b>0){
      return a+ multipl(a,b-1);
    }
    if (b<0){
      return -a+ multipl(a,b+1);
    }}


#include <iostream>
using namespace std;
int main(){
  cout<<"enter two numbers ";
  int a,b;
  cin>>a>> b;
  cout<<"multiplication of "<<a<<" and "<<b<<" is "<<multipl(a,b);
}
*/

//problem 2
/*int factorial (int n){
  if (n==0){
    return 1;//boshidagi farqi
  }
  return n*factorial(n-1);//n-1 dicrement parti oldidegi n oxirgi kopayishi bogan son

}
#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"choose number for factorial ";
  cin>>n;
  cout<<"factorial of "<<n<<" is "<<factorial(n);
}*/


//problem 3
/*int fibonacci(int n){
  if (n==0){
    return 0;
  }
  if (n==1){
    return 1;
  }
return fibonacci(n-1) + fibonacci (n-2);
}

#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"choose number for fibonacci ";
  cin>>n;
  cout<<"fibonacci of "<<n<<" is "<<fibonacci(n);
}*/


//problem 4;

/*int sum(int N){
  if (N==0){
    return 0;
  }
  return N + sum(N-1);
}
#include <iostream>
using namespace std;
int main(){
  int N;
  cin>>N;
  cout<<"sum of "<<N<<" is "<<sum(N);
}*/


//problem 5
/*#include <iostream>
using namespace std;

int func (int n){
  if (n==1){
    cout<<n<<" ";
    return 1;
  }

  cout<<n<<" ";
    return func(n-1);
}


int main(){
  int n;
  cin>>n;
 func(n);
}
*/

//problem 6
/*#include <iostream>
using namespace std;
int digit(int n,int count=0){
  if (n==0){
    return count;
  }

  return digit(n/10,count+1);

}


int main(){
  int n;
  cin>>n;
  cout<<"number of digits in "<<n<<" is "<<digit(n);

}*/



//problem 7
/*int digit(int n){
  if (n==0){
    return 0;
  }
  return n%10 + digit(n/10);
}
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<"sum of digits in "<<n<<" is "<<digit(n);
}
*/

//problem 8
/*int power_numbers (int x, int y){
  if (y==0){
    return 1;
  }
  else return x * power_numbers(x,y-1);
}
#include <iostream>
using namespace std;
int main(){
  int x,y;
  cin>>x>>y;
  cout<<x<<" to the power of "<<y<< " is "<<power_numbers(x,y);
}*/

//problem 9
/*#include <iostream>
using namespace std;

int reverse(int number, int reversedNum = 0) {

    if (number == 0) {
        return reversedNum;
    }

    int last_digit = number % 10;


    reversedNum = reversedNum * 10 + last_digit;
    return reverse(number / 10, reversedNum);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int reversedNumber = reverse(number);
    cout << "Original number is " << number << endl;
    cout << "Reversed number is " << reversedNumber << endl;

    return 0;
}
*/



/* PROBLEM 10
#include <iostream>
using namespace std;

int count_digit(int number) {
    if (number == 0) {
        return 0;
    }
    return 1 + count_digit(number / 10);
}


int powerOfTen(int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= 10;
    }
    return result;
}


int is_palindrome(int number, int original_number, int numDigits) {

    if (numDigits <= 1) {
        return 1;
    }


    int firstDigit = number / powerOfTen(numDigits - 1);
    int lastDigit = number % 10;


    if (firstDigit != lastDigit) {
        return 0;
    }


    int remainingNumber = (number % powerOfTen(numDigits - 1)) / 10;


    return is_palindrome(remainingNumber, original_number, numDigits -2);
}

int is_palindrome(int number) {

    if (number < 0) {
        return 0;
    }


    int numDigits = count_digit(number);


    return is_palindrome(number, number, numDigits);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (is_palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}*/

//problem 11

/*#include <iostream>
using namespace std;


int Prime(int n, int divisor = 2) {

    if (n <= 1) {
        return 0;
    }
    if (divisor * divisor > n) {
        return 1;
    }
    if (n % divisor == 0) {
        return 0;
    }


    return Prime(n, divisor + 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (Prime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
*/