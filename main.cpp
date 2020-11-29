/*
Project 3 - Part 1a / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs2

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) Look at the picture of the car interior (Part1a pic.jpg).  // No idea where this is supposed to be found
    Fill in the blanks below which break this car interior down into sub-objects.

    Several sub-objects are listed below that make up this car's interior.
        you're going to name several things that you'll find on each subobject
        you're going to name several things that each subobject can do.
        If you've seen "Family Feud", we are going to do what they do in that show

        A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3) horn
        4) 'turn signal" controls
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) honk
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) speedometer
        2) tachometer
        3) gas level guage
        4) oil pressure guage
    Name 3 things you can do with the:   Instrument Cluster
        1) get the speed of the car
        2) monitor engine revolutions per minute
        3) know when to get more gas
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) temperature control
        2) fan speed control
        3) vent control
    Name 3 things you can do with the:   Environment Controls
        1) adjust the temperature
        2) adjust air flow
        3) change the vents where air comes out

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) CD disc drive
        2) volume control
        3) navigation screen
    Name 3 things you can do with the:   Infotainment System
        1) play music
        2) turn volme up or down
        3) map a destination

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) lever to recline the seat
        2) lever to slide back the seat
        3) seat belt
    Name 2 things you can do with the:   Seat
        1) adjust the angle of the back support
        2) adjust the distance the seat is from the steering wheel.
*/
//Main Object: Car Interior
struct CarInterior
{
//Sub Object 1: Steering Wheel
    struct SteeringWheel
    {
    //Name 4 things you'll find on the:    Steering Wheel
        //1) paddle shifters
        int paddleShifter = 0;    // shift up ,down , neutral?
        //2) 'cruise control' controls
        int cruiseControl = 0;
        //3) horn
        bool horn = false;   
        //4) 'turn signal" controls
        int turnSignal = 0;
    //Name 2 things you can do with the:   Steering Wheel
        //1) adjust cruise control settings.
        void cruiseControlSetting (string setCruiseState);  // method receives "set", "cancel", "increment", "decrement" 
        //2) honk
        void honk ();  // method returns nothing as when it is called, this funtion triggers the horn from inside
    }
//Sub Object 2: Instrument Cluster
    //Name 4 things you'll find on the:   Instrument Cluster
    struct InstrumentCluster
    {
        //1) speedometer
        float speed = 0;  //speedometer is the noun, but the data you are interested is the speed
        //2) tachometer
        float rpm = 0;    // tachometer is the devise that that rpm is displayed on.  so rpm is the data
        //3) gas level guage
        float fuel = 0;  
        //4) oil pressure guage
        float oilPressure = 0;
    //Name 3 things you can do with the:   Instrument Cluster
        //1) get the speed of the car
        void getSpeedOfCar();  // returns data, but doesn't pass any data to this method
        //2) monitor engine revolutions per minute
        void monitorRPM(float rpm);
        //3) know when to get more gas
        void lowFuelWarning(float fuel);
    }
//Sub Object 3: Environment Controls
    struct EnvironmentControls
    {
    //Name 3 things you'll find on the:    Environment Controls
        //1) temperature control
        int temperatureControl = 0;
        //2) fan speed control
        int fanSpeedControl = 0;
        //3) vent control
        int ventControl = 0;
    //Name 3 things you can do with the:   Environment Controls
        //1) adjust the temperature
        void temperatureControlHasChanged(int temperatureControl);
        //2) adjust air flow
        void airFlowAdjusted(int fanspeedControl);
        //3) change the vents where air comes out
        void ventHasChanged(int ventControl);
    }
//Sub Object 4: Infotainment System
    struct InfoTainmentSystem
    {
    //Name 3 things you'll find on the:    Infotainment System
        //1) CD disc drive
        struct CDDiscDrive   //seems like this is a UDT
        {
            //2) volume control
            float volume = 0;
            //1) play music
            void playMusic();
            //2) turn volume up or down
            void volumeLevelHasChanged(float volume);

        } 
        
        //3) navigation screen
        struct NavigationScreen
        {
            //3) map a destination
            void mapDestination();

        }

    }
//Sub Object 5: Seat 
    struct seat
    {
    //Name 3 things you'll find on the:    Seat
        //1) lever to recline the seat
        int seatReclineAngle = 90;
        //2) lever to slide back the seat
        int seatSlidePosition = 0;
        //3) seat belt
        bool seatBeltFastened = false;
    //Name 2 things you can do with the:   Seat
        //1) adjust the angle of the back support
        void seatAngleHasChanged(int seatReclineAngle)
        //2) adjust the distance the seat is from the steering wheel.
        void seatSlideHasChanged(int seatSlidePosition)
    }
}
/*
Part1b: 4 un-related UDTs in plain english
object1b1 : HairDryer
    things on the HairDryer:
        1) on/off switch
        2) Hot/Cold swicth
        3) High Speed/Low speed switch.
    things you can do with a hairDryer
        1) dry 
        2) warm 
        3) blow    
*/
//Part1e1: Functioning code of UDT's
struct HairDryer
{
    bool powerSwitch = false;
    bool tempIsHot = false;
    int fanSpeed = 0;

    void dry(bool powerSwitch, bool);
    void warm();
    void blow();
};

/*
Object1b2 : FuzzFace
    things on the fuzzFace:
        1) bypass switch
        2) fuzz knob
        3) volume knob
    things you can do with the fuzzFace
        1) turn on or off the effect
        2) turn up or down the fuzz
        3) turn up or down the volume level
*/
//part1e2:
struct FuzzFace
{
    void fuzzAudio(bool bypass, float fuzz, float volume); 

};

/*
Object1b3 : oscilloscope
    things on the oscilloscope:
        1) horizontal input
        2) vertical input
        3) horizontal gain control
        4) vertical gain control
        5) horizontal sweep control
    things you can do with the oscilloscope
        1) view electrical waveforms over time
        2) graph the difference in electrical waveforms
        3) graph the input of a DUT vs the output of the DUT
        4) measure just about any electrical characteristic lel
*/
//part1e3;
struct Oscilloscope
{
    float horizontalInput;
    float verticalInput;
    int horizontalGainControl;
    int verticalGainControl;
    
    void viewWaveform(float horizontalInput, float horizontalSweep);

    void waveformCompare(float horizontalInput, float verticalInput);
    
    void lissajousFigure(float horizontalInput, float verticalInput, int xGain, int yGain);
};
/*
Object1b4 : guitar
    things on the guitar:
        1) strings
        2) frets
        3) tuners
        4) bridge
    things you can do with the guitar:
        1) tune the strings to pitch
        2) pluck a string
        3) fret a melody
        4) strum a chord
*/
//part1e4:
struct Guitar
{
    struct TuneString
    {
        bool tightenString;
    };
    int strings;
    int frets;

    TuneString lowString;
    TuneString highString;
    
    void pluckNote(int string, int fret);

    void strumChord(int String1, int String2, int String3, int fret1, int fret2, int fret3 );
};
/*
Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
Main Object : MPK49KeyboardController
Sub Object1 : keySection
    things on the keySection
        1) white keys
        2) black keys
        3) pitch bend
    things you can do with the
        1) play notes
        2) play accidentals
        3) continuously vary the notes pitch

Sub Object2 : arpeggiator section
    things on the arpeggiator section
        1) arpeggio button
        2) latch
        3) pattern bank
    things you can do with the arpeggiator section
        1) turn on or off arpeggio section
        2) engage latching function
        3) swap arpeggio sequence pattern

Sub Object3 : Pads Section
    things on the Pads Section
        1) drum pads
        2) pad sample banks
        3) velocity control
    things you can do with the Pads Section
        1) play beats
        2) create sequences
        3) control dynamics

Sub Object4 : Mixer Section
    things on the Mixer Section
        1) faders
        2) pan control
        3) mute switches
    things you can do with the Mixer Section
        1) control levels of each audio track
        2) pan left or right each track
        3) mute individual tracks

Sub Object5 : Transport Section
    things on the Transport Section
        1) stop
        2) play  
        3) record
        4) rewind
        5) fast forward
        6) tap tempo
    things you can do with the Transport Section
        1) stop the transport
        2) engage transport
        3) write to an armed track at the transport position
        4) move transport to the beginning
        5) move the transport forward on the recording timeline
        6) tap in the tempo to recors at

*/
struct MPK49KeyboardController
{
    struct KeySection
    {
        void playNote(int noteNumber, int velocity, int pitchbend);
    };

    struct ArpeggiatorSection 
    {
        bool arpeggioGenerate;
        bool arpeggioPlayContinuously;
        int patternBank;

        void arpeggioPattern(int patternBankNumber);
        
    };

    struct DrumPadSection
    {
        int drumPad;
        int sampleBanks;
        int velocity;

        void playKick(int playSample, int velocity);
        void playBeat(int drunmGroove, float tempo);
    };

    struct MixerSection
    {
        float fader;
        float pan;
        bool mute;

        void channelAdjust(int channel, int gain, int pan, bool mute);
    };

    struct TransportSection
    {
        bool stop;
        bool play;
        bool record;
        bool rewind;
        bool fastForward;
        bool tapTempo;

        void transportControl(bool stop, bool play, bool record, bool rewind, bool fastForward, bool tapTempo);

    };
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
