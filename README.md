# Arrays-Strings


## Aim :- 
To study use of and to implement arrays and strings in C++.

## Software used :-
VS code

## Theory :-
An array in C++ is a collection of elements, all of the same type, stored in contiguous memory locations.<br> 
Arrays provide a way to store multiple values in a single variable, making it easier to manage large amounts of data.<br>

Strings are sequences of characters used to store text. <br>
In C++, the string class is defined in the <string> header file. <br>
There are two types of strings in C++ :<br>

1) C style Strings
2) std : : string

### Algorithm (1): Finding Maximum and Minimum Values in an Array

1. **Initialize Variables**:
   - Set two variables, `max` and `min`, to the value of the first element in the array.

2. **Iterate Through the Array**:
   - Loop through the array starting from the second element to the last element.

3. **Compare Each Element**:
   - For each element in the array:
     - **Update Maximum**: If the current element is greater than `max`, assign the current element's value to `max`.
     - **Update Minimum**: If the current element is less than `min`, assign the current element's value to `min`.

4. **End the Loop**:
   - Continue iterating until all elements have been compared.

5. **Output the Results**:
   - Display the values of `max` and `min`, which now hold the maximum and minimum values in the array, respectively.


### Algorithm (2): Displaying Elements of an Array

1. **Initialize Variables**:
   - Define an integer `n` to represent the size of the array.
   - Declare and initialize an array `arr` of size `n` with predefined integer values.

2. **Iterate Through the Array**:
   - Start a loop that runs from index `0` to `n-1` (i.e., from the first element to the last element of the array).

3. **Print Each Element**:
   - In each iteration of the loop, access the current element of the array using the loop index.
   - Output the value of the current element followed by a space.

4. **End the Loop**:
   - Continue looping until all elements of the array have been printed.

5. **End the Program**:
   - Return `0` to indicate successful program termination.


### Algorithm (3): Searching an Element in an Array

1. **Initialize Variables**:
   - Declare an integer `key` to store the value to be searched.
   - Define an array `x[]` with a fixed set of integer values.

2. **Input the Search Key**:
   - Prompt the user to input the value of `key` that they want to search for in the array.
   - Store the user's input in the `key` variable.

3. **Iterate Through the Array**:
   - Start a loop that iterates from index `0` to `6` (for an array of size 7).

4. **Compare Each Element**:
   - In each iteration, compare the current element of the array (`x[i]`) with the `key`.
   - **If a Match is Found**: 
     - Print the position of the matching element (index `i+1`).
   - **If No Match is Found**:
     - Continue to the next iteration.

5. **End the Loop**:
   - Continue looping until all elements have been checked.

6. **End the Program**:
   - Return `0` to indicate successful program termination.

### Algorithm (4): Calculating the Sum and Average of Array Elements

1. **Initialize Variables**:
   - Declare an array `x[5]` to store five integer values.
   - Initialize an integer `sum` to `0` to store the cumulative sum of the array elements.
   - Declare an integer `avg` to store the average of the array elements.

2. **Input Array Elements**:
   - Prompt the user to input five integer values.
   - Use a loop that iterates from index `0` to `4` to store each input value into the corresponding position in the array `x`.

3. **Calculate the Sum**:
   - Use another loop that iterates from index `0` to `4`.
   - In each iteration, add the current element of the array (`x[i]`) to the `sum` variable.

4. **Calculate the Average**:
   - After the loop, compute the average by dividing the `sum` by `5` (the number of elements).

5. **Output the Results**:
   - Print the calculated `sum`.
   - Print the calculated `avg` (average).

6. **End the Program**:
   - The program then ends successfully.

## conclusion :
1).in this experiment we learnt how to print an array ,take user input of array, reverse it ,<br> search an element in it and find max ,min ,sum and average of the elements if the array <br>
2). in this experiment we also learnt to perform the basic operations on strings like:- <br>printing a string, concatenation of string, printing the string in reverse and checking if the string is a palindrome or not
