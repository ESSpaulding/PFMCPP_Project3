/*
  Project 3 - Part 4 / 5
  video: Chapter 2 - Part 9
  Member initialization tasks

  Create a branch named Part4
  
  1) initialize some of your member variables either in-class or in the Constructor member initializer list.

  2) make some of your member functions use those initialized member variables via std::cout statements.
  
  3) click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>

namespace Example
{
struct UDT
{
    int a; //a member variable
    float b { 2.f }; //2) in-class initialization
    UDT() : a(0) { } //2) 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//end namespace Example

struct Oscilloscope
{
    float horizontalInput { 0.5f };  //initialized in-class
    float verticalInput { 0.5f };
    int horizontalGain { 5 };
    int verticalGain { 5 };
    int horizontalSweepControl { 120 };

    Oscilloscope(); //constructor

    void graphVoltageOverTime(float yInput, float sweep);
    void graphWaveformDifference (int channelA, int channelB);
    void measureVoltage (int channelA, int channelB);
};

//Constructor intializer list   Is this dumb to align this way?
Oscilloscope::Oscilloscope() : horizontalInput(0.0f),
                               verticalInput(0.0f),
                               horizontalGain(0),
                               verticalGain(0),
                               horizontalSweepControl(0) { }

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
    int screenSize;
    int gigabytesOfRAM;
    bool hasSDCardPort;
    bool phoneHasHeadphoneJack;
    CellPhone() : screenSize(3), gigabytesOfRAM(128), hasSDCardPort(false), phoneHasHeadphoneJack(true) { }
    struct TouchScreen
    {
        float screenHeight;
        float screenWidth;
        int x, y;
        int numberOfGestures;
        TouchScreen() :  screenHeight(4.5f), screenWidth(3.0f), x(0), y(0), numberOfGestures(3) { }
        void fingerPrintVerification(bool ownersFinger, bool usersFinger);
        void getFingerPosition(int X, int Y);
        void quickSwipe(bool swipeUp, bool swipeDown);
    };

    void makeCall (int phoneNumber, std::string personYouAreCalling);
    void playGame (bool gameMode);
    void sendEmail (std::string emailAddress);

    TouchScreen touchScreen;
};

//CellPhone::CellPhone()  {}  //constructor in-class intialization
//CellPhone::TouchScreen::TouchScreen()  {} //nested constructor in-class intialization

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
    int numberOfStrings;
     Guitar() : numberOfFrets (22), scaleLength (25.5f), hasTremeloBridge (true), numberOfStrings (6) { }  // 'Constructor-initializer-list" memebr variable intitialization
     
    struct Tremelo
    {
        int numberOfSprings{ 3 }; //in class initialization
        bool isTremeloFloating { true };
        bool isTremeloLocking = true;
        float fineTunerThreadPitch { 0.7f };
        float massOfTremeloBlock { 34.5f };
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

//below is example of outside-class-constructor-initializer-list
//Guitar::Guitar() : numberOfFrets(22), scaleLength(26.5), hasTremeloBridge(true), numberOfStrings(8) {}
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
//outside class constructor-initializer-list:
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
    int numberOfKeys { 88 };
    bool keyHasAfterTouch { true };
    bool keysAreWeighted { true };
    float keyLength { 5.5f };
    int octaveControls { 2 };
    KeyBoardAssembly();
    void sendMidi (int channel, int midiNote, int velocity);
    void shiftOctave (bool octaveShiftUp, bool octaveShiftDown);
    void sendMidiAfterTouch (int channel, int midiAfterTouch);
};
KeyBoardAssembly::KeyBoardAssembly() {}  //default constructor in-class initialization

void KeyBoardAssembly::sendMidi (int channel, int midiNote, int velocity)
{
    std::cout << channel << midiNote << velocity << std::endl;
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
    int numberOfPads { 9 };
    bool padsAreVelocitySensitive { true };
    int midiNumber { 127 };
    std::string padComposition { "foam rubber" };
    std::string durometerOfPad { "bouncy af" };
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
     int numberOfButtons { 6 };
     std::string colorOfButtons { "grey" };
     int sizeOfButtons { 2 };
     int buttonSpacing { 2 };
     float postionOfTransport { 0.0f };
    TransportSection();
    void moveTransport(float currentTransportPosition, float destinationTransportPosition);
    void tapTempo (float timingInterval);
    void armTrack (int trackNumber);
 };

TransportSection::TransportSection() {}   //default constructor

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

MPK49KeyboardController::MPK49KeyboardController() { }

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

    std::cout << "good to go!" << std::endl;
}
