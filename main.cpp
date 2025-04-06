//problem //ARRAYS
//PROBLEM 1
/*#include<iostream>
using namespace std;
int main(){*/
/*int n;
  cout<<"how many elements you want to store";
  cin>>n;
  int arrays[n];
int sum=0;



 for (int i=0;i<n;i++){
   cin>>arrays[i];
  sum+=arrays[i];
 }
   cout<<sum;
  return 0;

}
*/

//problem2

/* int n;
 cout<<"how many elements you want to store";
 cin>>n;
 int arrays[n];
int sum=0;
int average;


 for(int i=0;i<n;i++){
   cin>>arrays[i];
   sum+=arrays[i];
 }

 average=sum/n;
 cout<<"average is "<<average;
 return 0;}*/

// I write include iostream again for problem 3 to indicate proper usage of function

//problem 3
/*#include<iostream>
using namespace std;

int findmin(int arr[],int size){
   int min=arr[0];
  for(int i=1;i<size;i++){
      if(arr[i]<min){
        min=arr[i];
      }
    }
  return min;
}


int main(){

int size;
cin>>size;
int minArray[size];
for(int i=0;i<size;i++){
cin>>minArray[i];
}

cout<<"min is" <<findmin(minArray,size);
  }*/

//problem 4
/*#include<iostream>
using namespace std;

void findmax(double arr[],int size,int &index,double &max){
 max=arr[0];
 index=0;
  for(int i=1;i<size;i++){
    if (arr[i]>max){
      max=arr[i];
      index=i+1;
    }
  }
}

int main(){
  int size;
  cout<<"how many elements you want to store: ";
  cin>>size;
  if (size<=0){
    return -1;
  }

  int index;
  double max;
  double maxArray[size];
  for(int i=0;i<size;i++){
    cin>>maxArray[i];

  }
 findmax(maxArray,size,index,max);
  cout<<"max is "<<max<<"index is"<<index;
}*/


//problem 5
/*#include<iostream>
using namespace std;

bool strictlyEqual(const int list1[],const int list2[],int size){
  for(int i=0;i<size;i++){
    if(list1[i]!=list2[i]){
      return false;
    }
    else return true;
  }
}

int main(){
  int size;
  cout<<"how many elements you want to store: ";
  cin>>size;
  if (size<=0){
    return -1;
  }

  int list1[size];
  int list2[size];
  for(int i=0;i<size;i++){
    cin>>list1[i];
  }
  for(int i=0;i<size;i++){
    cin>>list2[i];
  }
  strictlyEqual(list1,list2,size);

   if (strictlyEqual(list1, list2, size)) {
          cout << "The two lists are strictly identical." << endl;
      } else {
          cout << "The two lists are not strictly identical." << endl;
      }

      return 0;
  }
*/


//problem 6
/*#include <iostream>
using namespace std;

int main() {
    int frequency[26] = {0};
    char ch;

    cout << "Enter characters (enter '0' to terminate):\n";

    while (true) {
        cin >> ch;


        if (ch == '0') {
            break;
        }


        if (ch >= 'a' && ch <= 'z') {
            frequency[ch - 'a']++;
        }
    }


    cout << "\nLetter frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            cout << (char)(i + 'a') << ": " << frequency[i] << endl;
        }
    }

    return 0;
}*/

//problem 7

//7
/*#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Enter number of elements: ";
    cin >> n;

    int arr[25];


    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
*/

//prblem 8

  /*#include <iostream>
  using namespace std;

  int main() {
      int counts[6] = {0};
      unsigned int seed = 1;
      for (int i = 0; i < 10000; i++) {
          seed = seed * 1103515245 + 12345;
          int roll = (seed % 6) + 1;
          counts[roll - 1]++;
      }
      for (int i = 0; i < 6; i++) {
          cout << "Value " << (i + 1) << " occurred " << counts[i] << " times." << endl;
      }

      return 0;
  }

*/

//9
/*#include <iostream>
using namespace std;


void reverseArray(int arr[], int start, int end) {
    while (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;


        start++;
        end--;
    }
}

int main() {
    int n;


    cout << "Enter number of elements: ";
    cin >> n;

    int arr[25];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    reverseArray(arr, 0, n - 1);


    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
*/

//10
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[25];
    cout << "Enter " << n << " positive integers:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool sorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
