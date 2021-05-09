/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
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
    float horizontalInput;
    float verticalInput;
    int horizontalGain;
    int verticalGain;
    int horizontalSweepControl;

    Oscilloscope(); //constructor

    void graphVoltageOverTime(float yInput, float sweep);
    void graphWaveformDifference (int channelA, int channelB);
    void measureVoltage (int channelA, int channelB);
};

Oscilloscope::Oscilloscope() :        //Constructor intializer list
horizontalInput(0.0f),
verticalInput(0.0f),
horizontalGain(0),
verticalGain(0),
horizontalSweepControl(0)
{

}

void Oscilloscope::graphVoltageOverTime(float yInput, float sweep)
{
    std::cout << yInput << sweep << std::endl;
}

void Oscilloscope::graphWaveformDifference (int channelA, int channelB)
{
    std::cout << "The difference voltage between channelA and channelB is: " << channelB - channelA << std::endl;
}

void Oscilloscope::measureVoltage (int channelA, int channelB)
{
    std::cout << "The combined voltage of channelA and channelB is: " << channelA + channelB << std::endl;
}


struct CellPhone
{
    std::string carrier = "Sprint";
    int screenSize = 3;
    int gigabytesOfRAM = 8;
    bool hasSDCardPort = false;
    bool phoneHasHeadphoneJack = true;
    CellPhone();
    struct TouchScreen
    {
        float screenHeight = 4.5f;
        float screenWidth = 3.0f;
        int x = 0, y = 0;
        int numberOfGestures = 3;
        TouchScreen();
        void fingerPrintVerification(bool ownersFinger, bool usersFinger);
        void getFingerPosition(int X, int Y);
        void quickSwipe(bool swipeUp, bool swipeDown);
    };

    void makeCall (int phoneNumber, std::string personYouAreCalling);
    void playGame (bool gameMode);
    void sendEmail (std::string emailAddress);

    TouchScreen touchScreen;
};

CellPhone::CellPhone()  {}  //constructor in-class intialization
CellPhone::TouchScreen::TouchScreen()  {} //nested constructor in-class intialization

void CellPhone::makeCall (int phoneNumber, std::string personYouAreCalling)
{
    std::cout << "Hello " << phoneNumber << " this is " << personYouAreCalling << " Speaking" << std::endl;
}

void CellPhone::playGame (bool gameMode)
{
    std::cout << gameMode << std::endl;
}

void CellPhone::sendEmail (std::string emailAddress)
{
    std::cout << emailAddress << std::endl;
}

void CellPhone::TouchScreen::fingerPrintVerification(bool ownersFinger, bool usersFinger)
{
     std::cout << "This is " << (ownersFinger == usersFinger ? "your phone" : "not your phone") << "\n";
}
void CellPhone::TouchScreen::getFingerPosition(int X, int Y)
{
    std::cout << "X coordinate is " << X << " Y coordinate is " << Y  << std::endl;
}
void CellPhone::TouchScreen::quickSwipe(bool swipeUp, bool swipeDown)
{
    std::cout << swipeUp << swipeDown << std::endl;
}


 struct Guitar
 {
    std::string woodType = "mahogany";
    int numberOfFrets;
    float scaleLength;
    bool hasTremeloBridge;
    int numberOfstrings;
    Guitar();
    struct Tremelo
    {
        int numberOfSprings = 3;
        bool isTremeloFloating = true;
        bool isTremeloLocking = true;
        float fineTunerThreadPitch = 0.7f;
        float massOfTremeloBlock = 34.5f;
        Tremelo();
        void flutter(float startFrequency, float endFrequency, float flutterRate);
        void diveBomb(float startFrequency, float endFrequency, float pitchDecentTime);
        void squeelies (float harmonics, float decay);
    };
    
    void tuneTheStrings (float pitchToTuneTo, int stringToTune);
    void playMelody (std::string notesOfScale, std::string keyToPlayIn);
    void strumChord (std::string rootNote, bool chordHasMinorThird, bool chordHasMinorSeventh);

    Tremelo tremelo;
 };

Guitar::Guitar() : numberOfFrets(22), scaleLength(26.5), hasTremeloBridge(true), numberOfstrings(8) {}
Guitar::Tremelo::Tremelo() {}  //constructor in-class initialization. no colon needed... interesting


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
    std::cout << "the chord you are strumming is "<< rootNote << (chordHasMinorThird ? "minor" : "major");
    std::cout << (chordHasMinorSeventh ? "b7" : "7") << std::endl;
}

void Guitar::Tremelo::flutter(float startFrequency, float endFrequency, float flutterRate)
{
    std::cout << startFrequency << endFrequency << flutterRate << std::endl;
}
void Guitar::Tremelo::diveBomb(float startFrequency, float endFrequency, float pitchDecentTime)
{
    std::cout << "Divebombs are cool " << startFrequency * (endFrequency + pitchDecentTime) << std::endl;
}
void Guitar::Tremelo::squeelies (float harmonics, float decay)
{
    std::cout << harmonics << decay << std::endl;
}

struct ParametricEq
{
    float lowShelfFrequency;
    float highShelfFrequency;
    float centerBandFrequency;
    float centerBandGain;
    float centerBandSlope;
    ParametricEq();
    void vocalDeEss (float sibilanceAmount, float sibilanceSuppression);
    void rumbleFilter (float rumbleFrequency, float filterCut);
    void killFeedback (float feedbackFrequency, float gainReduction);
};
ParametricEq::ParametricEq() :
lowShelfFrequency(50.0f),
highShelfFrequency(1800.0f),
centerBandFrequency(0.5f),
centerBandGain(0.5f),
centerBandSlope(0.7f)
{}
void ParametricEq::vocalDeEss (float sibilanceAmount, float sibilanceSuppression)
{
    std::cout << sibilanceAmount << sibilanceSuppression << std::endl;
}
void ParametricEq::rumbleFilter (float rumbleFrequency, float filterCut)
{
    std::cout << " Hear my train a coming " << rumbleFrequency << filterCut << std::endl;
}
void ParametricEq::killFeedback (float feedbackFrequency, float gainReduction)
{
    std::cout << "EEEEEEE " << feedbackFrequency << gainReduction << std::endl;
}

struct KeyBoardAssembly
{
    int numberOfKeys = 88;
    bool keyHasAfterTouch = true;
    bool keysAreWeighted = true;
    float keyLength = 5.5f;
    int octaveControls = 2;
    KeyBoardAssembly();
    void sendMidi (int channel, int midiNote, int velocity);
    void shiftOctave (bool octaveShiftUp, bool octaveShiftDown);
    void sendMidiAfterTouch (int channel, int midiAfterTouch);
};
KeyBoardAssembly::KeyBoardAssembly() {}  //constructor in-class initialization

void KeyBoardAssembly::sendMidi (int channel, int midiNote, int velocity)
{
    std::cout << "Channel: " << channel << " Note:  " << midiNote << " Velocity: " << velocity << std::endl;
}
void KeyBoardAssembly::shiftOctave (bool octaveShiftUp, bool octaveShiftDown)
{
    std::cout << "shifting octave " << octaveShiftUp << octaveShiftDown << std::endl;
}
void KeyBoardAssembly::sendMidiAfterTouch (int channel, int midiAfterTouch)
{
    std::cout << "channel: "<< channel << " after touch: " << midiAfterTouch << std::endl;
}


struct ArpeggiatorSection
{
    int numPatterns = 2;
    std::string latchFunction = "next beat";
    bool syncedToTempo = false;
    std::string pattern1 = "x-x-x-x-"; //4 on the floor
    std::string pattern2 = "x--x--x-"; //
    ArpeggiatorSection();
    void turnOnArpeggioSection(bool isOn);
    void storeArpeggiatorPattern(std::string patterName);
    void swapPattern( std::string newPattern, int targetToReplace);
};
ArpeggiatorSection::ArpeggiatorSection() {}

void ArpeggiatorSection::turnOnArpeggioSection(bool isOn)
{
    std::cout << (isOn ? "Arpeggiator section is ON " : "Arpeggiator section is OFF") << std::endl;
}
void ArpeggiatorSection::storeArpeggiatorPattern(std::string patterName)
{
    std::cout << "Current Pattern name is: " << patterName << std::endl;
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
    PadsSection();
    void playBeat (int midiNoteRecord, int beatQuantize, KeyBoardAssembly keyboard); //4) a member function whose
    void createSequences (ArpeggiatorSection arpSection, int padNum);
    void dynamicControl (int maxVelocity, int minVelocity);
};
PadsSection::PadsSection() {}

void PadsSection::playBeat (int midiNoteRecord, int beatQuantize, KeyBoardAssembly keyboard)
{
    std::cout << " Boom " << midiNoteRecord << beatQuantize << keyboard.numberOfKeys << std::endl;
}
void PadsSection::createSequences (ArpeggiatorSection arpSection, int padNum)
{
    std::cout << "create sequences: "<< padNum << "# of patterns: " <<arpSection.numPatterns << std::endl;
    
}
void PadsSection::dynamicControl (int maxVelocity, int minVelocity)
{
    std::cout << maxVelocity << minVelocity << std::endl;
}

struct MixerSection
{
    int numberOfFaders;
    int numberOfPanPots;
    int numberOfMuteButtons;
    int lengthOfFaderTravelInMillimeters;
    int numberOfSoloButtons;
    MixerSection();
    void faderHasChanged (int oldFaderValue, int newFaderValue);
    void panPotHasMoved (int oldPanValue, int newPanValue);
    void muteTrack (int trackNumber);
};
MixerSection::MixerSection() :
numberOfFaders(8),
numberOfPanPots(8),
numberOfMuteButtons(16),
numberOfSoloButtons(16)
{}

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
    TransportSection();
    void moveTransport(float currentTransportPosition, float destinationTransportPosition);
    void tapTempo (float timingInterval);
    void armTrack (int trackNumber);
 };
TransportSection::TransportSection() {}

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
    MPK49KeyboardController();
    void triggerSample (PadsSection padSection);
    void sendMidiNotes(int noteNumber, int noteOn, int velocity, int noteOff);
 };
MPK49KeyboardController::MPK49KeyboardController() {}

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
    std::cout << "we are in the main function" << std::endl;
    Oscilloscope oScope;  //3) instatiation of UDT
    oScope.measureVoltage(2, 4);
    oScope.graphWaveformDifference(32, 16);

    CellPhone myPhone;
    CellPhone yourPhone;
    myPhone.makeCall(231345632, "Karen");
    CellPhone::TouchScreen myTouchscreen;
    myTouchscreen.fingerPrintVerification(true, false);
    yourPhone.makeCall(8675301, "Daryl");
    CellPhone::TouchScreen yourTouchscreen;
    yourTouchscreen.fingerPrintVerification(true, true);

    Guitar myGuitar;
    myGuitar.strumChord("A", true, true);
    myGuitar.tremelo.diveBomb(440.0f, 0.1f, 1000.0f);

    ParametricEq pEq;
    pEq.rumbleFilter(30.0f, 120.0f);
    pEq.killFeedback(220, -.5f);

    KeyBoardAssembly keyBoard;
    keyBoard.sendMidi(11, 122, 127);  
    keyBoard.shiftOctave(true, false);
    keyBoard.sendMidiAfterTouch(2, 127);

    ArpeggiatorSection arpSection;
    arpSection.turnOnArpeggioSection(true);
    arpSection.storeArpeggiatorPattern("bouncing triplet");

    PadsSection rightPadSection;
    PadsSection leftPadSection;
    rightPadSection.numberOfPads = 10;  //setting a value count for anything?
    leftPadSection.dynamicControl(127, 12);
    
    MixerSection mixerSection;
    mixerSection.faderHasChanged(10, 9);
    mixerSection.muteTrack(12);

    TransportSection transportSection;
    transportSection.moveTransport(0.0f, 100.5f);

    MPK49KeyboardController keyController;
    keyController.sendMidiNotes(122, 38, 127, 38);

    Example::main();
    std::cout << "good to go!" << std::endl;
}

