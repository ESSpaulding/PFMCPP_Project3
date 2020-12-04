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
struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    struct Foot
    {      
        bool startWithLeftFoot = true;

        void stepForward ();
        int stepSize();
    };

    void run(int howFast, bool startWithLeftFoot);

    Foot leftFoot, rightFoot;
};

void Person::run(int howFast, bool startWithLeftFoot)  
{
    howFast++;

    if( startWithLeftFoot == true )
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else 
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
}

void Person::Foot::stepForward()
{
    std::cout << "stepping forward sir" << std::endl;
}

int Person::Foot::stepSize()
{
    return 10;
}

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

struct Oscilloscope
{
    float horizontalInput = 0.0f;
    float verticalInput = 0.0f;
    int horizontalGain = 0;
    int verticalGain = 0;
    int horizontalSweepControl = 0;

    void graphVoltageOverTime(float yInput, float sweep);
    void graphWaveformDifference (int channelA, int channelB);
    void measureVoltage (int channelA, int channelB);
};

void Oscilloscope::graphVoltageOverTime(float yInput, float sweep)
{
    std::cout << yInput << sweep << std::endl;
}

void Oscilloscope::graphWaveformDifference (int channelA, int channelB)
{
    std::cout << channelA << channelB << std::endl;
}

void Oscilloscope::measureVoltage (int channelA, int channelB)
{
    std::cout << channelA << channelB << std::endl;
}


struct CellPhone
{
    std::string carrier = "Sprint";
    int screenSize = 3;
    int gigabytesOfRAM = 8;
    bool hasSDCardPort = false;
    bool phoneHasHeadphoneJack = true;

    struct TouchScreen
    { 
        float screenHeight = 4.5f;
        float screenWidth = 3.0f;
        int x = 0, y = 0;
        int numberOfGestures = 3;

        void fingerPrintVerification(float ownersFinger, float usersFinger);
        void getFingerPosition(int X, int Y);
        void quickSwipe(bool swipeUp, bool swipeDown);
    };

    void makeCall (int phoneNumber, std::string personYouAreCalling);
    void playGame (bool gameMode);
    void sendEmail (std::string emailAddress);

    TouchScreen touchScreen;
};

void CellPhone::makeCall (int phoneNumber, std::string personYouAreCalling)
{
    std::cout << phoneNumber << personYouAreCalling << std::endl;
}

void CellPhone::playGame (bool gameMode)
{
    std::cout << gameMode << std::endl;
}

void CellPhone::sendEmail (std::string emailAddress)
{
    std::cout << emailAddress << std::endl;
}

void CellPhone::TouchScreen::fingerPrintVerification(float ownersFinger, float usersFinger)
{
    std::cout << ownersFinger << usersFinger << std::endl;
}
void CellPhone::TouchScreen::getFingerPosition(int X, int Y)
{
    std::cout << X << Y << std::endl;
}
void CellPhone::TouchScreen::quickSwipe(bool swipeUp, bool swipeDown)
{
    std::cout << swipeUp << swipeDown << std::endl;
}


 struct Guitar
 {
    std::string woodType = "mahogany";
    int numberOfFrets = 22;
    float scaleLength = 24.75f;
    bool hasTremeloBridge = true;
    int numberOfstrings = 6;

    struct Tremelo
    { 
        int numberOfSprings = 3;
        bool isTremeloFloating = true;
        bool isTremeloLocking = true;
        float fineTunerThreadPitch = 0.7f;
        float massOfTremeloBlock = 34.5f;

        void flutter(float startFrequency, float endFrequency, float flutterRate);
        void diveBomb(float startFrequency, float endFrequency, float pitchDecentTime);
        void squeelies (float harmonics, float decay);
    };
    
    void tuneTheStrings (float pitchToTuneTo, int stringToTune);
    void playMelody (std::string notesOfScale, std::string keyToPlayIn);
    void strumChord (std::string rootNote, bool chordHasMinorThird, bool chordHasMinorSeventh);

    Tremelo tremelo;
 };

void Guitar::tuneTheStrings (float pitchToTuneTo, int stringToTune)
{
    std::cout << pitchToTuneTo << stringToTune << std::endl;
}
void Guitar::playMelody (std::string notesOfScale, std::string keyToPlayIn)
{
    std::cout << notesOfScale << keyToPlayIn << std::endl;
}
void Guitar::strumChord (std::string rootNote, bool chordHasMinorThird, bool chordHasMinorSeventh)
{
    std::cout << rootNote << chordHasMinorThird << chordHasMinorSeventh << std::endl;
}

void Guitar::Tremelo::flutter(float startFrequency, float endFrequency, float flutterRate)
{
    std::cout << startFrequency << endFrequency << flutterRate << std::endl;
}
void Guitar::Tremelo::diveBomb(float startFrequency, float endFrequency, float pitchDecentTime)
{
    std::cout << startFrequency << endFrequency << pitchDecentTime << std::endl;
}
void Guitar::Tremelo::squeelies (float harmonics, float decay)
{
    std::cout << harmonics << decay << std::endl;
}

struct ParametricEq
{
    float lowShelfFrequency = 50.0f;
    float highShelfFrequency = 18000.0f;
    float centerBandFrequency = 1000.0f;
    float centerBandGain = 0.5f;
    float centerBandSlope = 0.7f;

    void vocalDeEss (float sibilanceAmount, float sibilanceSuppression);
    void rumbleFilter (float rumbleFrequency, float filterCut);
    void killFeedback (float feedbackFrequency, float gainReduction);
};

void ParametricEq::vocalDeEss (float sibilanceAmount, float sibilanceSuppression)
{
    std::cout << sibilanceAmount << sibilanceSuppression << std::endl;
}
void ParametricEq::rumbleFilter (float rumbleFrequency, float filterCut)
{
    std::cout << rumbleFrequency << filterCut << std::endl;
}
void ParametricEq::killFeedback (float feedbackFrequency, float gainReduction)
{
    std::cout << feedbackFrequency << gainReduction << std::endl;
}

struct KeyBoardAssembly
{
    int numberOfKeys = 88;
    bool keyHasAfterTouch = true;
    bool keysAreWeighted = true;
    float keyLength = 5.5f;
    int octaveControls = 2;

    void sendMidi (int channel, int midiNote, int velocity);
    void shiftOctave (bool octaveShiftUp, bool octaveShiftDown);
    void sendMidiAfterTouch (int channel, int midiAfterTouch);
};

void KeyBoardAssembly::sendMidi (int channel, int midiNote, int velocity)
{
    std::cout << channel << midiNote << velocity << std::endl;
}
void KeyBoardAssembly::shiftOctave (bool octaveShiftUp, bool octaveShiftDown)
{
    std::cout << octaveShiftUp << octaveShiftDown << std::endl;
}
void KeyBoardAssembly::sendMidiAfterTouch (int channel, int midiAfterTouch)
{
    std::cout << channel << midiAfterTouch << std::endl;
}


struct ArpeggiatorSection 
{
    int numPatterns = 2;
    std::string latchFunction = "next beat";
    bool syncedToTempo = false;
    std::string pattern1 = "x-x-x-x-"; //4 on the floor
    std::string pattern2 = "x--x--x-"; //

    void turnOnArpeggioSection(bool isOn);
    void storeArpeggiatorPattern(std::string patterName);
    void swapPattern( std::string newPattern, int targetToReplace);
};

void ArpeggiatorSection::turnOnArpeggioSection(bool isOn)
{
    std::cout << isOn << std::endl;
}
void ArpeggiatorSection::storeArpeggiatorPattern(std::string patterName)
{
    std::cout << patterName << std::endl;
}
void ArpeggiatorSection::swapPattern( std::string newPattern, int targetToReplace)
{
    std::cout << newPattern << targetToReplace << std::endl;
}

struct PadsSection
{
    int numberOfPads = 9;
    bool padsAreVelocitySensitive = true;
    int midiNumber = 127;
    std::string padComposition = "foam rubber";
    std::string durometerOfPad = "bouncy af";

    void playBeat (int midiNoteRecord, int beatQuantize, KeyBoardAssembly keyboard); //4) a member function whose 
    void createSequences (ArpeggiatorSection arpSection, int padNum);
    void dynamicControl (int maxVelocity, int minVelocity);
};

void PadsSection::playBeat (int midiNoteRecord, int beatQuantize, KeyBoardAssembly keyboard) //4) a member function whose 
{
    std::cout << midiNoteRecord << beatQuantize << keyboard.numberOfKeys << std::endl;  
}
void PadsSection::createSequences (ArpeggiatorSection arpSection, int padNum)
{
    std::cout << padNum << arpSection.numPatterns << std::endl;  //
    
}
void PadsSection::dynamicControl (int maxVelocity, int minVelocity)
{
    std::cout << maxVelocity << minVelocity << std::endl;
}

struct MixerSection
{
    int numberOfFaders = 8;
    int numberOfPanPots = 8;
    int numberOfMuteButtons = 16;
    int lengthOfFaderTravelInMillimeters = 100;
    int numberOfSoloButtons = 16;

    void faderHasChanged (int oldFaderValue, int newFaderValue);
    void panPotHasMoved (int oldPanValue, int newPanValue);
    void muteTrack (int trackNumber);
};

void MixerSection::faderHasChanged (int oldFaderValue, int newFaderValue)
{
    std::cout << oldFaderValue << newFaderValue << std::endl;
}
void MixerSection::panPotHasMoved (int oldPanValue, int newPanValue)
{
    std::cout << oldPanValue << newPanValue << std::endl;
}
void MixerSection::muteTrack (int trackNumber)
{
    std::cout << trackNumber << std::endl;
}

 struct TransportSection
 {
    int numberOfButtons = 6;
    std::string colorOfButtons = "grey";
    int sizeOfButtons = 2;
    int buttonSpacing = 2;
    float postionOfTransport = 0.0f;

    void moveTransport(float currentTransportPosition, float destinationTransportPosition);
    void tapTempo (float timingInterval);
    void armTrack (int trackNumber);
 };

void TransportSection::moveTransport(float currentTransportPosition, float destinationTransportPosition)
{
    std::cout << currentTransportPosition << destinationTransportPosition << std::endl;
}
void TransportSection::tapTempo (float timingInterval)
{
    std::cout << timingInterval << std::endl;
}
void TransportSection::armTrack (int trackNumber)
{
    std::cout << trackNumber << std::endl;
}

 struct MPK49KeyboardController
 {
    KeyBoardAssembly keyboardAssembly;
    ArpeggiatorSection arpeggiatorSection;
    PadsSection padSection;
    MixerSection mixerSection;
    TransportSection transportSection;

    void triggerSample (PadsSection padSection);
    void sendMidiNotes(int noteNumber, int noteOn, int velocity, int noteOff);
 };

void MPK49KeyboardController::triggerSample (PadsSection p)
{
    std::cout << p.midiNumber << std::endl;
}
void MPK49KeyboardController::sendMidiNotes(int noteNumber, int noteOn, int velocity, int noteOff)
{
    std::cout << noteNumber << noteOn << velocity << noteOff << std::endl;
}

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
