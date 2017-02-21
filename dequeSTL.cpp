/*  //from SO
    // http://stackoverflow.com/questions/6292332/what-really-is-a-deque-in-stl    
I was looking at STL containers and trying to figure what they really are (i.e. the data structure used), and the deque stopped me: I thought at first that it was a double linked list, which would allow insertion and deletion from both ends in constant time, but I am troubled by the promise made by the operator [] to be done in constant time. In a linked list, arbitrary access should be O(n), right?

And if it's a dynamic array, how can it add elements in constant time? It should be mentioned that reallocation may happen, and that O(1) is an amortized cost, like for a vector.

So I wonder what is this structure that allows arbitrary access in constant time, and at the same time never needs to be moved to a new bigger place

    //Further explanation
    https://www.codeproject.com/Articles/5425/An-In-Depth-Study-of-the-STL-Deque-Container

*/

#include <iostream>
#include <deque> 
using namespace std;
void printKMax(int arr[], int n, int k) {
    //Write your code here.
    
	deque<int> myDeque;
	for(int i = 0; i < n ; i++) {
        while (!myDeque.empty() && arr[i] > myDeque.back()) {
            // Keeping current max at front.
            myDeque.pop_back();  
        }
        
		myDeque.push_back(arr[i]);
        
        // Checks if the range is past an element and it's still the max we remove it
		if (i >= k && myDeque.front() == arr[i-k]) {  
            myDeque.pop_front();  
        }
        
		if (i >= k-1) {      // Are we to the first max  
            if (i < n-1) {   // Are we at the end of the array
                cout << myDeque.front() << " ";
            }
            else {
                cout << myDeque.front() << endl;
            }
        }
	}
    
    // Without using Deque. It works but times-out with large inputs. (Stuff like  n = 10000 and k = 3000 levels) Deques performance better/faster
    /*
    int max = 0;
    for (int i = 0; i < n-k+1;) {
        for (int j = 0; j < k; j++) {
            //cout << arr[i] << " ";
            if (arr[i] > max) {
                max = arr[i];
            }
            i++;
        }
        i = i - (k-1);
        //cout << endl;
        cout << max << " ";
        max = 0;
    }
    cout << endl; 
    */
}

int main() {
    // testing deque stuff
    /*
    deque<int> myDeque;
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_back(3);
    for (int i=0; i<myDeque.size(); ++i) cout << myDeque.at(i) << " ";
    cout << endl;    
    myDeque.pop_back();
    myDeque.pop_front();
    for (int i=0; i<myDeque.size(); ++i) cout << myDeque[i] << " ";
    cout << endl;
    */

     
    
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
   }
   return 0;
}
