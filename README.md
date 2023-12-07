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
