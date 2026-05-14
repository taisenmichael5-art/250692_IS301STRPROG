
                     IS301 LAB 4 
🔹 ARRAYS
✅ 1. Binary Search is best for any array (True/False)
Answer: ❌ False
Explanation:
 Binary search only works efficiently on sorted arrays.
 If the array is not sorted, binary search cannot be used. In such cases, sequential search is better.

✅ 2. Fill in the blank
Answer:
 An index is an integral value used to access an element in an array.

✅ 3. Correct Array Initialization
Answer: ✅ c
int ary[] = {1, 2, 3, 4};
❌ Feedback:
a. ❌ Wrong syntax { } used incorrectly
b. ❌ Uses [] instead of {} for values
d. ❌ Invalid size declaration
e. ❌ Uses incorrect brackets

✅ 4. Assign value to first element
Answer: ✅ d
ary[0] = x;
❌ Feedback:
a. ❌ Assigning to entire array (invalid)
b. ❌ Wrong usage
c. ❌ x is treated as array
e. ❌ Assigns to second element

✅ 5. Passing arrays
Answer: ✅ d
When an array is passed to a function, its address is passed (reference).
❌ Feedback:
a. ❌ Arrays can be passed
b. ❌ Rows CAN be passed
c. ❌ Not fully correct
e. ❌ Second dimension must be specified in declaration

✅ 6. Two-dimensional arrays
Answer: ✅ a
A 2D array is an array of arrays.
❌ Feedback:
b. ❌ First dimension also needed sometimes
c. ❌ Only one data type allowed
d. ❌ First dimension = rows, not columns
e. ❌ Incorrect explanation

🔹 SORTING & SEARCHING
✅ 7. Fill in the blank
Answer: ✅ e — sorting
❌ Feedback:
arranging ❌ informal
listing ❌ not algorithm
parsing ❌ unrelated
searching ❌ finding, not arranging

✅ 8. Sorting method
Answer: ✅ e — selection sort
❌ Feedback:
bubble ❌ swaps repeatedly
exchange ❌ not specific
insertion ❌ shifts elements
quick ❌ divide-and-conquer

✅ 9. Search type
Answer: ✅ e — sequential search
❌ Feedback:
ascending ❌ order not search
binary ❌ needs sorted data
bubble ❌ sorting method
selection ❌ sorting method

✅ 10. Sequential search FALSE statement
Answer: ✅ d — The list must be ordered
Explanation:
 Sequential search works on unsorted lists, so this statement is false.

✅ 11. Two-dimensional arrays
Answer: ✅ a
Same explanation as before ✅

✅ 12. Program Output
✅ Output:
0
2
0
3
0
4
0
5
0
6

✅ Explanation:
First loop:
list[2*i + 1] = i + 2;
Fills odd indexes only
Values increase from 2 → 6
Second loop:
Prints all elements

🔹 PROGRAMMING (C CODE)
✅ 13. Compare Two Arrays
#include <stdbool.h>

bool compareArrays(int A[], int B[], int size) {
	for(int i = 0; i < size; i++) {
    	if(A[i] != B[i]) {
        	return false;
    	}
	}
	return true;
}

🔹 STRUCTURES
✅ 14. Student Structure
typedef struct {
	int studentID;
	char *firstName;
	char *lastName;
	int totalCredits;
	float GPA;
} Student;

✅ 15. Array of Months
typedef struct {
	int monthNumber;
	char *monthName;
	int days;
} Month;

Month months[12] = {
	{1, "January", 31},
	{2, "February", 28},
	{3, "March", 31},
	{4, "April", 30},
	{5, "May", 31},
	{6, "June", 30},
	{7, "July", 31},
	{8, "August", 31},
	{9, "September", 30},
	{10, "October", 31},
	{11, "November", 30},
	{12, "December", 31}
};
``

✅ 16. Valid / Invalid
a. ❌ Invalid (STRUCT is wrong keyword)
b. ❌ Invalid (same issue)
c. ✅ Valid
d. ✅ Valid

✅ 17. Shuffle Deck Function
#include <stdlib.h>
#include <time.h>

typedef struct {
	char* suit;
	int value;
} CARD;

typedef CARD DECK[52];

void shuffle(DECK deck) {
	srand(time(NULL));

	for(int i = 0; i < 52; i++) {
    	int r = rand() % 52;

    	CARD temp = deck[i];
    	deck[i] = deck[r];
    	deck[r] = temp;
	}
}



