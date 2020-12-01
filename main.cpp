/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};







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
struct Oscilloscope
{
//5 properties:
    //1)horizontal input
    float horizontalInput = 0.0f;
    //2)vertical input
    float verticalInput = 0.0f;
    //3)horizontal gain control
    int horizontalGain = 0;
    //4)vertical gain control
    int verticalGain = 0;
    //5)horizontal sweep control
    int horizontalSweepControl = 0;
//3 things it can do:
    //1)graph voltage over time
    void graphVoltageOverTime(float yInput, float sweep);
    //2)graph the difference in electrical waveforms
    void graphWaveformDifference (int channelA, int channelB);
    //3)measure voltage
    void measureVoltage (int channelA, int channelB);

};

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
