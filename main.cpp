/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/

/*
Thing 1)oscilloscope
5 properties:
    1)horizontal input
    2)vertical input
    3)horizontal gain control
    4)vertical gain control
    5)horizontal sweep control
3 things it can do:
    1)graph voltage over time
    2)graph the difference in electrical waveforms
    3)measure voltage
 */


/*
Thing 2)cell phone
5 properties:
    1)carrier
    2)screen dimensions
    3)amount of RAM
    4)whether or not is has a SD card port
    5)whether or not it has a headphone port
3 things it can do:
    1)make calls
    2)play games
    3)send emails
 */

/*
Thing 3)guitar
5 properties:
    1)wood type
    2)number of frets
    3)scale length
    4)whether or not it has a tremelo bridge
    5)number of strings
3 things it can do:
    1)tune the strings
    2)play a melody
    3)strum a chord
 */

/*
Thing 4)parametric eq
5 properties:
    1)Low shelf frequency
    2)Hight shelf frequency
    3)Center band frequency
    4)center band gain
    5)center band slope
3 things it can do:
    1)de-ess vocals
    2)filter rumble
    3)kill feedback
 */

/*
Thing 10)MPK49KeyboardController
5 properties:
    1)keyboard assembly
    2)arrpeggiator section
    3)pads section
    4)mixxer section
    5)transport section
3 things it can do:
    1)trigger samples
    2)send midi notes
    3)control DAW
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
