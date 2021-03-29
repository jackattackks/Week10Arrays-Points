# Week10Arrays-Points

Program 1 - WRITE ALL THE CODE in ONE FILE...   MyArrayPtrArith1.cpp

Step 1 - Define the class

Write a class, myArrayClass, that creates an integer array.

* Add an 'arraySize' variable, initialize to zero ( default constructor function )

* Create int * ptrArray  ( default constructor set to NULL )

* Add a default constructor ( see above for what is should do )

* Add a parm constructor that can set the array size,

    and then assigns new int[arraySize] to ptrArray. Validate size > 0.

* Add a setSize function that lets the user input a size, arraySize, of an array of integers,

    and then assigns new int[arraySize] to ptrArray ( only if it is NULL ). Validate size > 0.

* Add a function, setAllValues, Have the user prompted and then enter the values for the array.

   Validate that ptrArray != NULL, if so then add values . Use pointer arithmetic to specify the index of the array while the user is entering the values into the array.

* Add a printAll function that prints out the array...values using pointer arithmetic. Validate that ptrArray != NULL, if so then print out all values

---

testing: - code for int main() --

                   // Step 2 - Declare and Step 3 use it

                   // Test default constructor

                   myArrayClass  Array1;

                   Array1.setSize(7);                        

                   Array1.setAllValues();  // Code a Loop that asks for input for each value one at a time

                                                        // Input 10,15,20,25,30,35,42     

                   Array1.printAll();

 

                // Test parm constructor

                   myArrayClass Array2(7);

                   Array2.setAllValues();

                   Array2.printAll();

 

                   // Test with default constructor

                   myArrayClass * ptrArray1 = new myArrayClass;

                   .......  // add code to call setSize function, use 7

                 .......  // add code to call setAllValues function:  input 100,150,200,250,300,350,420

                 .......  // add code to call printAll function

 

Program 2 - WRITE ALL THE CODE in ONE FILE...   MyArrayPtrArithTemp2.cpp

                Convert Program 1 to a template.

                Test with <int> and <double> and <long int>

                Use the test found above for program 1…

 

Program 3 - Split the code from program 2 into two files: 

 

                MyArrayPtrArithMain.cpp  // contains int main() function and its code

                MyArrayPtrArithTemp.cpp  // contains class template code

                and run.
