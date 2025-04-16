#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    // add a toggle button
    addAndMakeVisible(TestToggle);

    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::FontOptions (16.0f));
    g.setColour (juce::Colours::white);
    g.drawText ("Hello new PFM C++ students!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.

    // add a toggle button to top left corner of window at pos 10,10 with a size of 30x30
    TestToggle.setBounds(10, 10, 30, 30);
}
