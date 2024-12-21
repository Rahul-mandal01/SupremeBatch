// ------------------LEETCODE:273

// Convert a non-negative integer num to its English words representation.

 

// Example 1:

// Input: num = 123
// Output: "One Hundred Twenty Three"
// Example 2:

// Input: num = 12345
// Output: "Twelve Thousand Three Hundred Forty Five"
// Example 3:

// Input: num = 1234567
// Output: "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"
 

// Constraints:

// 0 <= num <= 231 - 1


string numberToWords(int num) {
    // If the number is zero, return "Zero"
    if(num == 0){
        return "Zero"; // Special case for zero
    }

    // Iterate through the mapping of numbers to words
    for(auto it: mp){
        // Check if the current number is greater than or equal to the mapped number
        if(num >= it.first){
            string a = "";
            // If the number is 100 or greater, recursively convert the quotient part
            if(num >= 100){
                a = numberToWords(num / it.first) + " "; // Convert the quotient part
            }

            string b = it.second; // Get the corresponding word for the current number
            string c = "";
            // If there is a remainder, recursively convert the remainder part
            if(num % it.first != 0){
                c = " " + numberToWords(num % it.first); // Convert the remainder part
            }
            // Combine the parts and return the result
            return a + b + c;
        }
    }
    return ""; // Return an empty string if no match is found (should not happen)
}


// Time Complexity (TC)
// The time complexity of the numberToWords function is O(N), where N is the number of digits in the input number num. Here's a detailed breakdown:

// Iteration through the Mapping:

// The function iterates through the vector mp, which has a constant size of 29 elements. This iteration is O(1) since the size of mp does not change with the input size.
// Recursive Calls:

// The function makes recursive calls to handle the quotient and remainder parts of the number. Each recursive call processes a smaller part of the number, reducing the number of digits by at least one in each step.
// Combining Parts:

// Combining the parts (quotient, current word, and remainder) is done in constant time.
// Overall, the function processes each digit of the number once, leading to a linear time complexity of O(N).

// Space Complexity (SC)
// The space complexity of the numberToWords function is also O(N), where N is the number of digits in the input number num. Here's a detailed breakdown:

// Call Stack:

// The function uses recursion to process the number. Each recursive call adds a new frame to the call stack. In the worst case, the depth of the recursion is equal to the number of digits in the number.
// String Construction:

// The function constructs strings to represent the English words for the number. The space required for these strings is proportional to the number of digits in the number.
// Overall, the maximum depth of the recursion and the space required for string construction both contribute to a linear space complexity of O(N).