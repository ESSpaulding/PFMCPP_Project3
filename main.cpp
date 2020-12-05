/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.

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
    Example::main();
    std::cout << "good to go!" << std::endl;
}
