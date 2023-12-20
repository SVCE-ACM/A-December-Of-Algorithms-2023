# A-December-of-Algorithms-2023
<div align="left">
<h1>
    <p align="center"><img alt="header" src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/103169831/0c9a9502-6b9a-4c99-b00f-79ffed567016" width="500"></img></p>

</h1>
Welcome to A December of Algorithms 2023. 

After overwhelming responses from previous years, we present you with a new collection of algorithms to implement this December. 

Each Day, Each Algorithm ;) 

Finish them all to get a certificate :)


**Send a pull request only after completing all 31 algorithms.**

**Please submit all PRs on or before January 15th 11:59 PM IST.**

## What Do I Do?
We have a small collection of algorithms, one for every day of the month. Scroll down to take a look at them. 

All you need to do is fork this repository, implement all 31  algorithms and send a pull request over to us. 

Check out our FAQ for more information.

## Index
  - [**December 1 - Cricmetric**](#december-1---cricmetric)
  - [**December 2 - Shopper's Choice**](#december-2---shoppers-choice)
  - [**December 3 - Sunburnt**](#december-3---sunburnt)
  - [**December 4 - Mirror Magic**](#december-4---mirror-magic)
  - [**December 5 - Peaky Blinders**](#december-5---peaky-blinders)
  - [**December 6 - The Lost Algorithm Scrolls**](#december-6---the-lost-algorithm-scrolls)
  - [**December 7 - Baby Blocks**](#december-7---baby-blocks)
  - [**December 8 - The Enchanted Forest**](#december-8---the-enchanted-forest)
  - [**December 9 - Camels  on a String!**](#december-9---camels-on-a-string)
  - [**December 10 - Forgot Password.**](#december-10---forgot-password)
  - [**December 11 - Coder of Conversions**](#december-11---coder-of-conversions)
  - [**December 12 - The Heist**](#december-12---the-heist)
  - [**December 13 - Call Cipher**](#december-13---call-cipher)
  - [**December 14 - Call of Justice**](#december-14---call-of-justice)
  - [**December 15 - Subsequence Sorcery**](#december-15---subsequence-sorcery)
  - [**December 16 - Outbreak Dynamics**](#december-16---outbreak-dynamics)
  - [**December 17 - Bookshelf Dilemma**](#december-17---bookshelf-dilemma)
  - [**December 18 - It's Christmas Season**](#december-18---its-christmas-season)
  - [**December 19 - Symbolic Sum**](#december-19---symbolic-sum)
  - [**December 20 - Treasure Hunt In The Isles**](#december-20---treasure-hunt-in-the-isles)
  - [**FAQ**](#faq)


## Algorithms

 ### December 1 - Cricmetric

   #### Problem Statement
   In a cricket match, each batsman has a unique identifier, and their corresponding  runs scored are stored in an array.     Your task is to analyze the cricket match data  and determine the following: 
   
    1. The total runs scored by the team. 
    2. The batsman who scored the highest number of runs and their corresponding  unique identifier.


   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/103169831/6e7189c3-455a-4f37-baaa-9f3bd3ceae87" width="400"></p>
   
   #### Sample Input/Output
   ```
      Input: 
      5 
      20 35 40 15 25

      Output:
      135 
      2

   ```

   #### Explanation
   ```
     
        There are five batsmen in the match. Their runs are 20, 35, 40, 15, and 25. The total  runs scored by the team are 135. Batsman number 3 (index 2) scored the highest  number of runs, which is 40. 
        
   ```
   ```
      Input: 
      10 
      10 20 30 40 50 60 70 80 90 100 
      
      Output: 
      550 
      9

   ``` 
   
   #### Explanation
   ```
     
        There are ten batsmen in the match. Their runs are 10, 20, 30, 40, 50, 60, 70, 80,  90, and 100. The total runs scored by the team are 550. Batsman number 10 (index  9) scored the highest number of runs, which is 100. 
        
   ```
    
- **References**
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)
    - [Indexing in Arrays](https://www.geeksforgeeks.org/how-exactly-does-indexing-works-in-arrays/)
----

 ### December 2 - Shopper's Choice

   #### Problem Statement
   In a retail store, the management wants to analyze customer purchase data to gain insights into the popularity of various products. They have a dataset representing customer purchases, where each entry corresponds to the product ID of the item bought.
Given an array of product IDs, develop a program to generate the frequency of each product as an output array. The frequency represents how often each product has been purchased.


   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/55a0cca7-6c69-48d4-9b90-55fd5799e820" width="400"></p>
   
   #### Sample Input/Output
   ```
    Input 1 
    [2,2,3,4,5,6,2,4,6,7] 
    Output 1 
    [3,1,2,1,2,1] 


   ```

   #### Explanation
   ```
     
    Frequency of 2: 3 
    Frequency of 3: 1 
    Frequency of 4: 2 
    Frequency of 5: 1 
    Frequency of 6: 2 
    Frequency of 7: 1
 
        
   ```
   ```
    Input 2
    [25,28,33,27,28,25,25,31]
    Output 2
    [3,2,1,1,1]


   ``` 
   
   #### Explanation
   ```
     
    Frequency of 25: 3 
    Frequency of 28: 2 
    Frequency of 33: 1 
    Frequency of 27: 1 
    Frequency of 31: 1 
  
        
   ```
    
- **References**
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)
----

 ### December 3 - Sunburnt

   #### Problem Statement
   In the city of Codeville, a skyline of buildings awaits the morning sun. Given an array 'H' representing their heights, design a function to count buildings that will see the sunrise from the side where the array begins. A building enjoys the sunrise if there are no taller buildings blocking its view. Determine how many buildings get to greet the day with the warmth of the first rays of sunlight.
   
   Note: Height of building should be strictly greater than height of buildings in left in order to see the sun.

   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/103169831/18620cf0-87f4-42bf-827e-c785181823fe" width="400"></p>
   
   #### Sample Input/Output
   ```
    Input 1 
    N = 4
    H[] = {2, 3, 4, 5}

    Output 1 
    4


   ```

   ```
    Input 2
    N = 5
    H[] = {7, 4, 8, 2, 9}

    Output 2
    3


   ``` 
   
   #### Explanation
   ```

   As 7 is the first element, it can see the sunrise. 4 can't see the sunrise as 7 is hiding it.
   8 can see. 2 can't see the sunrise. 9 also can see the sunrise.
        
   ```
    
- **References**
    - [Searching Algorithms](https://www.geeksforgeeks.org/searching-algorithms/?ref=shm)
 
----

### December 4 - Mirror Magic

   #### Problem Statement
   - The great God Horus has found a way inside the treasure room, but what stands before him is The God Of Wisdom, The Spinnix. Horus must complete the mystery of The Spinnix name.
   - **Clue:** It was there when you were born, and shall follow you till death, if any part of the name reflects on mirror and repeats itself (Palindromic), then the answer of the riddle would be “the smallest substring that is palindromic.”
  - If not then Horus shall chant "Error".


<p align="center"><img src="https://media.giphy.com/media/Y2tCgTgzWRji5U0dIn/giphy-downsized-large.gif" /></p>
 
   
   #### Sample Input/Output
   ```

    Input: 
    Hollow

    Output: 
    ll 

   ```

   
   ```

    Input:
    Master

    Output:
    Error

   ```

#### Explanation
   ```
    In the string “Hollow”, the possible palindromic substrings are “Ollo” and “ll” out of which the smallest palindromic substring is “ll”.
  
   ```

### December 5 - Peaky Blinders
#### Problem Statement
- You are a detective working on a case involving a group of thieves.
- You have obtained a list of the amounts stolen by each thief during a series of robberies.
- Your task is to determine the total amount of money stolen by the thieves who stole more than or equal to the average amount stolen by the group.  


   <p align="center"><img src="https://media.giphy.com/media/l3mZpcNC69UuXjoME/giphy-downsized-large.gif"></p>
   
   #### Sample Input/Output
   ```
        Input: [10, 20, 30, 40, 50] 
        Output: 120 
   ```

   #### Explanation
   ```
        Average amount stolen: 30 
        Elements greater than or equal to the average: 30, 40, 50 
        Sum of elements greater than or equal to the average: 30 + 40 + 50 = 120
   ```
   #### Sample Input/Output
   ```
      Input: [5, 10, 15, 20, 25] 
      Output: 60 
   ``` 
 ### December 6 - The Lost Algorithm Scrolls
#### Problem Statement
Ancient algorithm scrolls containing the most potent coding spells have been scattered. Each scroll is encoded with a unique pattern. You are on a quest to collect the scrolls, decoding their patterns. Write a program that, given a list of encoded words, finds the optimal sequence where each word differs by a single letter, unlocking the ancient scrolls' power.
  

 <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/510191ec-569e-49d8-9127-b296394154c7"></p>
   
   #### Sample Input/Output
   ```
       Input: ["cat", "cot", "dot", "dog", "cog", "coat", "doll"]
       Output: ["cat", "cot", "dot", "dog", "cog"]

   ```

   #### Explanation
   ```
       1. "cat" to "cot":
             Only one letter changes ("a" to "o").
             This adheres to the rule that the words in the chain must differ by exactly one letter.
       2. "cot" to "dot":
             Again, only one letter changes ("c" to "d").
             The chain is still follows the rule of a single-letter difference between consecutive words.
       3. "dot" to "dog":
             Just like before, only one letter changes ("t" to "g").
       4. "dog" to "cog":
             Once more, only one letter changes ("d" to "c").

   ```
#### Sample Input/Output
   ```
     Input: ["apple", "orange", "banana", "grape", "peach"]
     Output: No valid chain.

   ```
- **References**
    - [String Data Structure](https://www.geeksforgeeks.org/string-data-structure/)
 
----

### December 7 - Baby Blocks

   #### Problem Statement
   Sarah, a toy designer, needs to verify if the rectangular piece fits into the circular hole for her Baby Block Toy design.
   
   Create a function that takes three numbers — the width and height of a rectangle, and the radius of a circle — and returns true if the rectangle can fit inside the circle, false if it can't.

   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/103169831/ec47a50c-3241-4b24-9350-3516fb83e6ad" width="400"></p>

   
   #### Sample Input/Output
   ```
    Input 1 
    rectangleInCircle(8, 6, 5)

    Output 1 
    true


   ```

   ```
    Input 2
    rectangleInCircle(5, 9, 5)

    Output 2
    false


   ``` 
   
   #### Explanation
   ```

   If the length of the rectangle’s diagonal is greater than the diameter of the circle then the rectangle won’t fit/pass through. 
        
   ```
    
- **References**
    - [Pythagoras Theorem](https://www.mathsisfun.com/pythagoras.html)
 
----
### December 8 - The Enchanted Forest

   #### Problem Statement
   
In the mystical land of Pyborg, there lies an enchanted forest guarded by a magical creature. Legend has it that the only way to navigate through the forest is by creating a magical square.The creature is kind but loves patterns, and the magic square must follow a unique rule.

The rule is as follows:
    1.The numbers in the square must form an increasing sequence starting from 1.
    2.The sum of the numbers in each row, column and both main diagonals must be the same.

Write a function ‘find_path(n)’ that takes an odd integer ‘n’ as input and returns a 2D list representing the magic square required to safely traverse the enchanted forest.


Constraints:
The input ‘n’ is an odd integer (3<=n<=15)

Help the brave adventurers in Pyborg to safely navigate the enchanted forest.



   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/783a1d44-636d-4c5f-b7ae-69b6c9b7f355" width="400"></p>


   
   #### Sample Input/Output
   ```
Input: 3
Output: 
    2 7 6
	9 5 1
	4 3 8



   ```

   #### Explanation
   ```

  It is a 3x3 matrix where (2+7+6 = 2+9+4=15 ) and similarly all rows, diagonals and columns give the same sum as 15

        
   ```

   ```
Input: 5
Output: 
	       9    3   22  16  15
	       2   21   20  14   8
           25  19   13   7   1
           18  12   6    5   24
           11  10   4   23   17



   ```
### December 9 - Camels on a String!

   #### Problem Statement
   
There is a sequence of words in camel case as a string of letters, s, having the following properties:
- It is a concatenation of one or more words consisting of english letter
- All letters in the first word are lower case
- For each subsequent words,the first letter is uppercase and the rest of the letters are lowercase

Determine the number of words in s.

 <p align="center"><img src="https://media.giphy.com/media/l3fZPYrlEGoSLvq9O/giphy.gif"></p>

#### Example
```
s= ‘onetwothree’

There are 3 words in the string- ’one’, ’two’, ’three’
```
#### Constraints
```
The camel case should contain the following parameters(s):
- string s: the string to be analyzed
- int: the number of words in s
- 1<= length of s<= 10^5
```
     
#### Sample Input/Output
   ```
   Input:  S = SaveChangesInTheEditor

   Output: 5

   ```

#### Explanation
   ```
  String s contains 5 words:
	1.save
	2.changes
	3.in
	4.the
	5.editor       
   ```  
  
    
- **References**
    - [Strings in C](https://www.geeksforgeeks.org/strings-in-c/)
 
----

### December 10 - Forgot Password.
   #### Problem Statement
   
- In the town of Willow, where everyone's computer password was part of their actual name.One day, a peculiar situation arose.
- A group of citizens found themselves unable to recall their passwords, but they had a single clue to aid them.
- By deciphering the clues, help the forgetful citizens to rediscover their passwords

 <p align="center"><img src="https://i.imgur.com/BHynXrm.gif"></p>

 

     
#### Sample Input/Output
   ```
   Input:  select substring(empname,4,13) from emp;

   ```
   ##### Output:
   <p align="center"><img src="https://i.imgur.com/HLup9iu.gif"></p>

  

#### Sample Input/Output
  ``` 
   Input:  select substring(empname,2,2) from emp;
```
   ##### Output: 
   <p align="center"><img src="https://i.imgur.com/4xKljsl.gif"></p>
	   
   

#### Explanation
   ```
 - The SQL query SELECT SUBSTRING(empname, 2, 2) FROM emp; retrieves a substring from the "empname" column in the "emp" table for each row.
 - The SUBSTRING function is employed, specifying the starting position as the second character and extracting two characters.
    
   ```   
----

### December 11 - Coder of Conversions
   #### Problem Statement
  - In Algorithmsville, Digitius and Binarya had a simple request for the Coder of Conversions. 
  - They wanted a function that could add them up and show the sum in binary. 
  - Without much fuss, the Coder whipped up a quick function. 
  - Now, whenever numbers in Algorithmsville wanted to go binary, they just used that handy function. Assume you are the coder and design the function.

    <p align="center"><img src="https://media.giphy.com/media/QpVUMRUJGokfqXyfa1/giphy.gif"></p>

#### Sample Input/Output
   ```
   Input: (1,1) 
   Output: 10

   ```

#### Explanation
   ```
  Sum of the Input is 2 whose binary value is 10.     
   ```
#### Sample Input/Output
   ```
   Input: (51,12) 
   Output: 111111

   ```

#### Explanation
   ```
  Sum of the Input is 64 whose binary value is 111111.     
   ```  
### December 12 - The Heist
A group of thieves has recently stolen a collection of valuable jewelry from a vault. Among the loot are three boxes. To quickly identify the box containing the gold without arousing suspicion, the thieves decide to employ a binary search algorithm. The goal is to minimize the number of inspections and swiftly pinpoint the box with the gold.

<p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/124942fd-1f3e-4147-ac5a-1b9de0b7b34c"></p>
    

#### Sample Input/Output
   ```
   Input:   Box1=[Emerald, Ruby, Gold, Silver]
   	  Box2=[Silver, Diamond, Emerald, Copper]
   	  Box3=[Ruby, Platinum ,Bronze, Silver]
   Output: Box1 Contains the Gold


   ```


   ```
   Input:   Box1=[Emerald, Ruby, Bronze ,Silver]
   	  Box2=[Gold, Diamond, Ruby, Copper]
   	  Box3=[Ruby, Platinum, Bronze, Silver]
   Output: Box2 Contains the Gold


  ```

#### Explanation
   ```
  Input: Box2: [Gold, Diamond, Ruby, Copper]
  The Binary Search is done with the search element as Gold 
  The Box containing Gold is Box 2.
   
   ```
- **References**
    - [Binary Search](https://www.geeksforgeeks.org/binary-search/)

----   
### December 13 - Call Cipher
Holmes and Watson are racing against time on a mission to decipher the encoded phone numbers of the killer's next victims. With just one clue in hand, they urgently need a program to convert these letter-encoded numbers into their numerical form, all to swiftly warn and save the potential targets.


<p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/ae2f782f-6280-4bb6-a762-6af147d078c2"></p>

<p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/9e8360d2-92f7-486d-a372-adb8c72a7993"></p>


    

#### Sample Input/Output
   ```
textToNum("123-647-EYES") ➞ "123-647-3937"
textToNum("(325)444-TEST") ➞ "(325)444-8378"
textToNum("653-TRY-THIS") ➞ "653-879-8447"
textToNum("435-224-7613") ➞ "435-224-7613"

   ```



#### Explanation
   ```
  Given an encoded phone number like "1-800-HOLMES" as input, the program needs to convert it to its numerical form, such as "1-800-465637." The output should represent the same phone number with letters replaced by their corresponding digits.


   
   ```
- **References**
    - [Ciphering](https://www.tutorialspoint.com/count-of-alphabets-having-ascii-value-less-than-and-greater-than-k-in-cplusplus)

----   

### December 14 - Call of Justice
In the midst of a criminal purge on this foggy night, where I can only identify those within a one-meter radius, I seek your assistance in spotting criminals nearby. 

Additionally, I am grappling with a challenge involving a binary tree, a target node, and an integer value k. The task is to locate all nodes at a distance of k from the specified target node, with the constraint of not having access to parent pointers. Your support is crucial in both endeavors as we strive for justice.


<p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/8c0155b8-702c-453c-8528-61648f17fa12"></p>

<p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/3c60f582-21f4-42a9-a51e-84141030129d"></p>
    

#### Sample Input/Output
   ```
   Input:     
          17
        /    \
       8      27
     /   \
    4     14 
        /   \
      10     16

Target Node = 8, K = 2

Output: 10 16 27



   ```


   ```
 Input:
          14
        /    \
      7       20
    /   \       \
   4     3       30
        /  
       2    
     /  \
   1      4

Target Node = 7, K = 3

Output: 1 4 30



  ```

#### Explanation
   ```
  Complete the function KDistanceNodes() which takes the root of the tree, target, and K as input parameters and returns a list of nodes at k distance from target in a sorted order.
   
   ```
- **References**
    - [Tree Data Structure](https://www.geeksforgeeks.org/binary-tree-data-structure/)

----   
### December 15 - Subsequence Sorcery
A wizard discovered a magical scroll containing a cryptic string. Legend has it that the number of distinct subsequences within this string holds the key to unlocking a portal to a parallel universe. Can you create an algorithm to unveil the magical count and guide the wizard through the portal to their extraordinary adventure?


<p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/153520105/e279e7d1-bc54-4dbc-8474-560eb75e5a08"></p>

Given a string as an input.Find the number of distinct subsequences from it.

    

#### Sample Input/Output
   ```
Input 1: “ghg”
Output 1: 7
```
```
Input 2: “ice”
Output 2: 8

   ```



#### Explanation
   ```
The possible distinct subsequences from the input string are : “ “,”g”,”h”,”gh”,”gg”,”hg”,”ghg”. Hence, the total number of distinct subsequences is 7.

```

- **References**
    - [Subsequences](https://www.geeksforgeeks.org/)

----

### December 16 - Outbreak Dynamics

   #### Problem Statement
   In a grid representing a city, there are zombies and humans. Zombies can infect humans in adjacent cells (up, down, left, or right), turning them into zombies. However, zombies cannot cross obstacles represented by the value -1. Humans can move freely. Implement a function to calculate the minimum time it takes for the zombie infection to spread throughout the entire city. If it's not possible for the infection to spread to all humans, return -1.The city is represented as a 2D grid, where:

0 represents an empty cell (can be occupied by a human),
1 represents a cell with a zombie,
-1 represents an obstacle.


   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/a5fc5d69-b8a4-41dc-b59c-9009c31e9cb9"></p>
   
   #### Sample Input/Output
   ```
      Input 1:
grid = [
    [0, 1, 0, 0],
    [1, 1, 1, 1],
    [0, 1, -1, 0],
    [0, 0, 0, 0]
]

Output: 3
   ```

   #### Explanation
   ```
     For Input 1:
In this example, it takes 3 minutes for the zombie infection to spread to all humans. The path is as follows:

1.Minute 1: Zombies in (0, 1) and (1, 0) infect humans in (0, 0) and (1, 1).
2.Minute 2: Zombies in (1, 2) and (1, 3) infect humans in (0, 2), (1, 2), and (2, 2).
3.Minute 3: Zombies in (2, 1) and (2, 3) infect humans in (2, 0), (2, 1), and (2, 2).
        
   ```
#### Sample Input/Output
   ```
      Input 2:
grid = [
    [1, 0, 1, 1, 0],
    [0, 0, 0, 1, 1],
    [1, 0, 1, 1, 1],
    [1, 0, -1, 0, 0],
    [1, 1, 0, 0, 1]
]
Output: 4

   ``` 
   
   #### Explanation
   ```
     For Input 2:
Minute 1: Zombies in (0, 0) and (2, 0) infect humans in (0, 1) and (1, 0).
Minute 2: Zombies in (0, 2) and (2, 2) infect humans in (0, 0), (0, 2), (1, 1), and (1, 3).
Minute 3: Zombies in (0, 3) and (2, 3) infect humans in (1, 2), (2, 1), and (2, 2).
Minute 4: Zombies in (0, 4), (1, 4), and (4, 4) infect humans in (1, 3), (2, 4), (3, 4), and (4, 3).        
   ```
    
- **References**
    - [Breadth First Search](https://www.javatpoint.com/breadth-first-search-algorithm)
    - [Queue](https://www.geeksforgeeks.org/queue-data-structure/)
    - [Graphs](https://www.programiz.com/dsa/graph)
  
----
### December 17 - Bookshelf Dilemma

   #### Problem Statement
   Imagine you're a librarian in a busy city library. A visitor complains about confusing loops in certain book sections. Create a function called detectAndRemoveLoop(). Swiftly, you navigate the shelves, untangling and fixing loops. The books now sit neatly, providing an orderly reading experience for visitors. This tool proves invaluable in maintaining the library's organization. Create a linked list that detects and removes the loops.



   <p align="center"><img src = "https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/153520105/3378af05-944d-4e9c-b3e1-cf53e5bccac9"></p>
   
   #### Sample Input/Output
   ```
   Input1: 1 -> 2 -> 3 -> 4 -> 5
          ↑         ↓
          7 <- 6 <- 8
   Output1:  1 -> 2 -> 3 -> 4 -> 5
   ```

   #### Explanation
   ```
     The detectAndRemoveLoop() function works like a librarian straightening the chain. It finds the person stuck in the loop and gently releases their hand.
After removing the loop, the chain remains the same. People (books) still hold hands in the same order, just without the confusing circle.
Therefore, the output (1->2->3->4->5) represents the straightened chain. It only shows the main line of connected books, not the removed loop.        
   ```
#### Sample Input/Output
   ```
      Input2: A -> B -> C -> D -> E
          ↑         ↓
          G <- F <- H
      Output2: A -> B -> C -> D -> E -> F -> H
   ``` 
    
- **References**
    - [Detect and Remove loop](https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/)
----
### December 18 - It's Christmas Season

   #### Problem Statement
   Alice has received a beautiful tree as a gift from her math teacher. This tree has N nodes connected by N-1 edges, and each node is assigned a value represented by arr[i]. Alice enjoys playing with the tree by cutting certain edges and dividing it into multiple subtrees. She has a favorite number X, and she’s curious to find out the number of ways she can cut the tree into subtrees so that the sum of values in each subtree is divisible by X, the cutting order of the edges doesn’t matter.

Help Alice solve this interesting problem by determining the count of good cuttings she can make when dividing the initial tree into 1 subtree, 2 subtree, 3 subtree, and so on, up to N subtrees.

As the number of good cuttings can be huge you need to print the answer modulo 10^9 +7.



   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/153520105/461ad714-e900-4fa0-886c-902d246d0682"></p>

   #### Input and Output Constraints
   ```
INPUT FORMAT:
 
. The first line of the input contains an integer T, representing the number of test cases.
. The first line of each test case contains 2 integers , N, X.
. Next line of each test case contains N integers separated by a space, representing the array arr.
. The next N-1 lines of each test case contain 2 integers each, representing an edge of the tree.

OUTPUT FORMAT:

. For each test case, output N integers separated by space telling the count of good cuttings when divided the tree into 1 subtree, 2 subtree, 3 subtree and so on up to  N subtrees.
```
   
   #### Sample Input/Output
   ```
Input:
2
5 3
3 2 3 2 5
1 2
1 3
2 4
2 5
5 1
1 2 3 4 5
1 2
1 5
2 3
2 4
Output:
1 2 1 0 0 
1 4 6 4 1
   ```

   #### Explanation
   ```
In the first test case;
. to divide the initial tree into 2 subtrees the possible set of edges which can be removed are:
  . {(1,2)}
  . {(1,3)}
. to divide the initial tree into 3 subtrees the possible set of edges which can be removed are:
  . {(1,2),(1,3)}
        
   ```
  
- **References**
    - [Tree Data Structure](https://www.geeksforgeeks.org/tree-data-structure/)
----
### December 19 - Symbolic Sum

   #### Problem Statement
   Consider a sequence of elements where each element is either a positive integer or a special symbol 'X'. The goal is to calculate the symbolic sum of the sequence, where 'X' is treated as a 
   placeholder for the sum of all the positive integers in the subsequence rooted at that 'X'. Additionally, each 'X' node can have a multiplier associated with it, denoted as 'Xk', where 'k' is a
   positive integer. The 'Xk' node represents the sum of all positive integers in the subsequence rooted at that 'X' multiplied by 'k'. Write a function that takes such a sequence and returns the symbolic sum.

   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/153520105/a555d31f-7645-4981-af36-4c775cdcd446"></p>
   
   #### Sample Input/Output
   ```
   Input-1: [X3, 3, X2, 2, X1, 1, 4]
   Output-1: 49
   ```
   #### Explanation
   ```
  The subsequence rooted at the first 'X3' is the entire sequence, so its sum is 3 + 2 + 1 + 4 = 10, and the multiplier is 3. Therefore, the contribution is 3 * 10 = 30.
  The subsequence rooted at the second 'X2' is the sequence [2, 1, 4], so its sum is 2 + 1 + 4 = 7, and the multiplier is 2. Therefore, the contribution is 2 * 7 = 14.
  The subsequence rooted at the third 'X1' is the sequence [1, 4], so its sum is 1 + 4 = 5, and the multiplier is 1. Therefore, the contribution is 1 * 5 = 5.
  Therefore, the overall symbolic sum is 30 + 14 + 5 = 49.
   ```
  #### Sample Input/Output
  ```
   Input-2: ['X2', 1, 'X3', 2, 3, 'X2', 4, 'X1', 5]
   Output-2: 50
   ```
  ### NOTE:
  The solution to this problem may result in multiple valid outputs based on the formation of the symbolic sum tree. The 
  order in which 'X' nodes are processed and chosen as the root node can influence the tree and, consequently, the final 
  symbolic sum.

  Please be aware that different valid symbolic sum trees may lead to distinct output values.

  Feel free to document and communicate (in the code) your chosen approach for handling the order of node processing in your solution.

  #### Other Possible Outputs:
  ```
   Input-1: [X3, 3, X2, 2, X1, 1, 4]
   Output-1: 49
   Output-1a: 51 [Forming a right-most tree with X3 as root node]
   Output-1b: 33 [Forming a tree with X3 as root node]
   Output-1c: 14 [Forming a right-most tree with X2 as root node]
   ```
    
- **References**
    - [Tree Traversal Techniques](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)
    - [Recursion](https://www.geeksforgeeks.org/introduction-to-recursion-data-structure-and-algorithm-tutorials/)
 
----

### December 20 - Treasure Hunt In The Isles

   #### Problem Statement
   
In the treacherous Cursed Isles, there lies a network of mysterious caves connected by ancient
pathways. Legends speak of hidden treasures guarded by spectral entities. Brave adventurers
seek to navigate this perilous network to uncover the greatest treasure—the Enchanted Diamond.

Your task is to write a function treasure_hunt(graph, start, end) that takes a weighted, directed
graph representing the cave network and finds the safest path from the start cave to the end
cave. However, beware! The caves are cursed, and the weights on the edges not only represent
distances but also the level of ghostly interference. The higher the weight, the more likely
spectral entities are to appear along the way.
To complete the treasure hunt successfully, the adventurer must not only find the shortest path
but also the path with the least interference.


   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/115417933/af96e8c4-d13a-46f4-b0e6-645670c7239a" width="400"></p>
   
   #### Sample Input/Output
   ```
      Input: 
      graph = {
     'Cave_A': {'Cave_B': 3, 'Cave_C': 5},
     'Cave_B': {'Cave_D': 7, 'Cave_E': 1},
     'Cave_C': {'Cave_D': 3},
     'Cave_D': {'Cave_E': 5},
     'Cave_E': {}
     }
     start_cave = 'Cave_A'
     end_cave   = 'Cave_E'

     Output:
      ['Cave_A', 'Cave_B', 'Cave_E']


   ```



   #### Explanation
   ```

	The graph represents the following cave network:
	
	Cave_A --3--> Cave_B --7--> Cave_D --5--> Cave_E
	|       |
	5       1
	|       |
	V       V
	Cave_C --3→
	
	The adventurer starts at Cave_A and seeks to reach Cave_E with the shortest and
	least-interfered path.
	
	The graph is represented as a dictionary where keys are cave names, and values are dictionaries representing neighboring caves and the level of ghostly interference(weights).
	All weights are positive integers.
	Cave names are unique strings.
	The start and end caves are guaranteed to be valid caves in the graph.

        
   ```

   #### Sample Input/Output
   ```
      Input: 
       graph = {
      'Cave_A': {'Cave_B': 4, 'Cave_C': 6},
      'Cave_B': {'Cave_C': 2, 'Cave_D': 5, 'Cave_E': 8},
      'Cave_C': {'Cave_A': 6, 'Cave_D': 7},
      'Cave_D': {'Cave_B': 5, 'Cave_E': 3},
      'Cave_E': {}
      }
      start_cave = 'Cave_B'
      end_cave   = 'Cave_E'

      Output:
       ['Cave_B', 'Cave_D', 'Cave_E']


   ```
    
- **References**
    - [Graph Data Structure And Algorithms](https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/)
    - [Shortest Path Algorithm In C++](https://www.geeksforgeeks.org/c-program-for-dijkstras-shortest-path-algorithm-greedy-algo-7/)
----

FAQ
======

#### Who can join the Challenge?
Anyone who is passionate about coding and can dedicate a little time a day for the challenge for the next 31 days.

#### When should I submit the pull request?
You don't need to submit it everyday. Just submit it once you're done with all 31 algorithms.

#### What if I'm not able to code every day?
Not a problem. While coding every day is nice, we understand that other commitments might interfere with it. 

Plus its holiday season. So you don't have to solve one problem every day. 

Go at your own pace. One per day or 7 a week or even all 30 in a day.

#### What language should I use to code?
Anything! New to GoLang? Best way to practice it. 

Wanna find out what all this hype about Python is? Use it! 

Any and all languages are welcome. 

Maybe you could try using a different language for every problem as a mini-challenge?

#### Fork? Pull request? What is all that? I don't know how to use GitHub!
If you are new to Git or GitHub, check out this out [GitHub](https://guides.github.com/activities/hello-world/)

#### Where are the rest of the problems?
Our code ninjas are hard at work preparing the rest of the problems. Don't worry, they'll be up soon.

#### How should I complete these programs?
We have a folder for each day of the month. Simply complete your code and move the file into that folder. 

Be sure to rename your file to the following format: `language_username` or `language_username_problemname`
Some examples:
`python3_exampleUser.py`
`c_exampleUser.c`

**Please do not modify any existing files in the repository.**

#### I forked the repository but some problems were added only after that. How do I access those problems?
Not to worry! Open your nearest terminal or command prompt and navigate over to your forked repository. 

Enter these commands:
```bash
git remote add upstream https://github.com/SVCE-ACM/A-December-of-Algorithms-2023.git
git fetch upstream
git merge upstream/main
```
If you're curious, the commands simply add a new remote called upstream that is linked to this repository. Then it 'fetches' or retrieves the contents of the repository and attempts to merge it with your progress.
Note that if you've already added the upstream repository, you don't need to re-add it in the future while fetching the newer questions.

#### I received a merge error. What do I do?
This shouldn't happen unless you modify an existing file in the repository. There's a lot of potential troubleshooting that might be needed, but the simplest thing to do is to make a copy of your code outside the repository and then clone it once again. Now repeat the steps from the answer above. Merge it and then add your code. Now proceed as usual. :)

#### I'm facing difficulties with/need help understanding a particular question.
Open up an [issue](https://github.com/SVCE-ACM/A-December-of-Algorithms-2021/issues) on this repository and we'll do our best to help you out.

###### [[Back to Top]](#----)

![wave](http://cdn.thekrishna.in/img/common/border.png)
