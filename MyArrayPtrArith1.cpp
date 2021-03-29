//
//  main.cpp
//  MyArrayPtrArith1
//
//  Created by Jackie on 3/28/21.
//

#include <iostream>
#include <string>
using namespace std;

class myArrayClass{
private:
    int arraySize;
    int *ptrArray;
public:
    //default constructor
    myArrayClass(){
        arraySize = 0;
        ptrArray=NULL;
    }
    
//    param constructor
    myArrayClass(int input){
        if (input > 0){
            arraySize = input;
            ptrArray = new int[arraySize];
        }
    }
    
//    setsize function
    void setSize (int input){
        if (ptrArray == NULL){
            arraySize = input;
            ptrArray = new int[arraySize];
        }else{
            delete [] ptrArray;
            arraySize = input;
            ptrArray = new int[arraySize];
        }
    }
//    set all values
    void setAllValeus(){
        if (ptrArray !=NULL){
            cout << "Enter " << arraySize << "numbers to put into the array: " << endl;
            for(int i =0; i < arraySize; i++){
                cin >> *(ptrArray + 1);
            }
        }
    }
//    print all
    void printAll(){
        if (ptrArray != NULL){
            for (int i =0; i < arraySize; i++){
                cout << *(ptrArray + i) << "\t";
                cout << endl;
            }
        }
    }
    
};

//STEP TWO
int main() {
 
}
