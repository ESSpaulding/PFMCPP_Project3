 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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
    2)screen size
    3)amount of RAM
    4)whether or not is has a SD card port
    5)whether or not it has a headphone port
3 things it can do:
    1)make calls
    2)play games
    3)send emails
 */
struct CellPhone
{
//5 properties:
    //1)carrier
    std::string carrier = "Sprint";
    //2)screen size
    int screenSize = 3;
    //3)amount of RAM
    int gigabytesOfRAM = 8;
    //4)whether or not is has a SD card port
    bool hasSDCardPort = false;
    //5)whether or not it has a headphone port
    bool phoneHasHeadphoneJack = true;
   // 5) make 2 of the 10 user-defined types have a nested class. 
   struct TouchScreen
    {
        float screenHeight = 4.5f;
        float screenWidth = 3.0f;
        int x = 0, y = 0;

        void fingerPrintVerification(float ownersFinger, float usersFinger);
        void getFingerPosition(int X, int Y);
    };
//3 things it can do:
    //1)make calls
    void makeCall (int phoneNumber, std::string personYouAreCalling);
    //2)play games
    void playGame (bool gameMode);
    //3)send emails
    void sendEmail (std::string emailAddress);

    TouchScreen touchScreen;
};
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
 struct Guitar
 {
    //5 properties:
    //1)wood type
    std::string woodType = "mahogany";
    //2)number of frets
    int numberOfFrets = 22;
    //3)scale length
    float scaleLength = 24.75f;
    //4)whether or not it has a tremelo bridge
    bool hasTremeloBridge = true;
    //5)number of strings
    int numberOfstrings = 6;
   //5) make 2 of the 10 user-defined types have a nested class. 
    struct Tremelo
    {
        int numberOfSprings = 3;
        bool isTremeloFloating = true;
        bool isTremeloLocking = true;

        void Flutter(float startFrequency, float endFrequency, float flutterRate);
        void diveBomb(float startFrequency, float endFrequency, float pitchDecentTime);
    
    };
    //3 things it can do:
    //1)tune the strings
    void tuneTheStrings (float pitchToTuneTo, int stringToTune);
    //2)play a melody
    void playMelody (std::string notesOfScale, std::string keyToPlayIn);
    //3)strum a chord
    void strumChord (std::string rootNote, bool chordHasMinorThird, bool chordHasMinorSeventh);

    Tremelo tremelo;
 };

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
struct ParametricEq
{
    //5 properties:
    //1)Low shelf frequency
    float lowShelfFrequency = 50.0f;
    //2)Hight shelf frequency
    float highShelfFrequency = 18000.0f;
    //3)Center band frequency
    float centerBandFrequency = 1000.0f;
    //4)center band gain
    float centerBandGain = 0.5f;
    //5)center band slope
    float centerBandSlope = 0.7f;
    //3 things it can do:
    //1)de-ess vocals
    void vocalDeEss (float sibilanceAmount, float sibilanceSuppression);
    //2)filter rumble
    void rumbleFilter (float rumbleFrequency, float filterCut);
    //3)kill feedback
    void killFeedback (float feedbackFrequency, float gainReduction);
};
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
    2)shift octaves
    3)send aftertouch
 */
struct KeyBoardAssembly
{
    //5 properties:
    //1)number of keys
    int numberOfKeys = 88;
    //2)has aftertouch
    bool keyHasAfterTouch = true;
    //3)whether or not the keys are weighted
    bool keysAreWeighted = true;
    //4)key length
    float keyLength = 5.5f;
    //5)octave controls
    int octaveControls = 2;
    //3 things it can do:
    //1)send midi
    void sendMidi (int channel, int midiNote, int velocity);
    //2)shift octaves
    void shiftOctave (bool octaveShiftUp, bool octaveShiftDown);
    //3)send aftertouch
    void sendMidiAfterTouch (int channel, int midiAfterTouch);
};
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
struct ArpeggiatorSection 
{
//     1)number of patterns
    int numPatterns = 2;
//     2)latch pattern
    std::string latchFunction = "next beat";
//     3)sync to tempo
    bool syncedToTempo = false;
//     4)arpeggiator pattern 1
    std::string pattern1 = "x-x-x-x-"; //4 on the floor
//     5)arpeggiator pattern 2
    std::string pattern2 = "x--x--x-"; //
// 3 things it can do:
//     1)turn on or off arpeggio section
    void turnOnArpeggioSection(bool isOn);
//     2)store arpeggiator pattern
    void storeArpeggiatorPattern(std::string patterName);
//     3)swap arpeggio pattern
    void swapPattern( std::string newPattern, int targetToReplace);
};
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
struct PadsSection
{
// 5 properties:
//     1)number of pads
    int numberOfPads = 9;
//     2)velocity sensitive 
    bool padsAreVelocitySensitive = true;
//     3)midi number
    int midiNumber = 127;
//     4)pad composition
    std::string padComposition = "foam rubber";
//     5)softness
    std::string durometerOfPad = "bouncy af";
// 3 things it can do:
//     1)play beats
    void playBeat (int midiNoteRecord, int beatQuantize, KeyBoardAssembly keyboard); //4) a member function whose parameter is a UDT.
//     2)create sequences
    void createSequences (ArpeggiatorSection arpSection, int padNum);
//     3)control dynamics
    void dynamicControl (int maxVelocity, int minVelocity);
};

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
struct MixerSection
{
//Thing 8)mixer section
//5 properties:
//    1)number of faders
    int numberOfFaders = 8;
//    2)number of pan pots
    int numberOfPanPots = 8;
//    3)number of mute buttons
    int numberOfMuteButtons = 16;
//    4)length of fader travel
    int lengthOfFaderTravelInMillimeters = 100;
//    5)number solo buttons
    int numberOfSoloButtons = 16;
//3 things it can do:
//    1)adjust levels
    void faderHasChanged (int oldFaderValue, int newFaderValue);
//    2)adjust pan
    void panPitHasMoved (int oldPanValue, int newPanValue);
//    3)mute track
    void muteTrack (int trackNumber);
};
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
 struct TransportSection
 {
//5 properties:
//    1)number of buttons
    int numberOfButtons = 6;
//    2)color of buttons
    std::string colorOfButtons = "grey";
//    3)size of the buttons
    int sizeOfButtons = 2;
//    4)spacing of buttons
    int buttonSpacing = 2;
//    5)transport position 
    float postionOfTransport = 0.0f;
//3 things it can do:
//    1)move transport
    void moveTransport(float currentTransportPosition, float destinationTransportPosition);
//    2)tap tempo
    void tapTempo (float timingInterval);
//    3)arm a track
    void armTrack (int trackNumber);
 };

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
 struct MPK49KeyboardController
 {
//5 properties:
//    1)keyboard assembly
    KeyBoardAssembly keyboardAssembly;
//    2)arpeggiator section
    ArpeggiatorSection arpeggiatorSection;
//    3)pads section
    PadsSection padSection;
//    4)mixer section
    MixerSection mixerSection;
//    5)transport section
    TransportSection transportSection;
//3 things it can do:
//    1)trigger samples
    void triggerSample (PadsSection padSection);
//    2)send midi notes
    void sendMidiNotes(int noteNumber, int noteOn, int velocity, int noteOff);
//    3)control DAW
 };

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
