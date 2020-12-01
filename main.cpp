/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
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
Thing 5)keyboard assembly
5 properties:
    1)number of keys
    2)has aftertouch
    3)whether or not the keys are weighted
    4)key length
    5)octave controls
3 things it can do:
    1)send midi
    2)send velocity
    3)send aftertouch
 */

/*
Thing 6)arrpeggiator section
5 properties:
    1)number of patterns
    2)latch function
    3)tempo sync
    4)arpeggiator pattern store
    5)arpeggiator pattern edit
3 things it can do:
    1)turn on or off arpeggio section
    2)engage latching function
    3)swap arpeggio pattern
 */

/*
Thing 7)pads section
5 properties:
    1)number of pads
    2)velocity sensitive 
    3)midi number
    4)pad composition
    5)softness
3 things it can do:
    1)play beats
    2)create sequences
    3)control dynamics
 */

/*
Thing 8)mixer section
5 properties:
    1)number of faders
    2)number of pan pots
    3)number of mute buttons
    4)length of fader travel
    5)number solo buttons
3 things it can do:
    1)adjust levels
    2)adjust pan
    3)mute track
 */

/*
Thing 9)transport section
5 properties:
    1)number of buttons
    2)color of buttons
    3)size of the buttons
    4)spacing of buttons
    5)transport position 
3 things it can do:
    1)move transport
    2)tap tempo
    3)arm a track
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
