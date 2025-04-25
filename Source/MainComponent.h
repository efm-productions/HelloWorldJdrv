#pragma once

#include <JuceHeader.h>

//EFM === Code Starts here

//define a User Defined Type for ch.2 Pt.05
struct Car
{
    struct CarSeat
    {
        bool seatIsLeather;
    };
    int numberOfWheels;
    bool convertible;

    CarSeat driversSeat;
    CarSeat navigatorsSeat;

    bool switchSeats(CarSeat oldSeat, CarSeat newSeat);

    void accelerate(float howFarToPushThePedal);

};

//EFM === Code Ends here

    //==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...
    juce::ToggleButton TestToggle;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
