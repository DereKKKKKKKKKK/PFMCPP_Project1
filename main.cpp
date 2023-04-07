#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       elevator
//  action 1:   the elevator moves up
elevator.moveUp();
//  action 2:   the elevator moves down
elevator.moveDown();
//  action 3:   the elevator annouces its current level
elevator.annouceCurrentLevel();

//  2)
//  Noun:       garage door
//  action 1:   garage door opens
garageDoor.open();
//  action 2:   garage door closes
garageDoor.close();
//  action 3:   garage door stops moving
garageDoor.stopMovement();

//  3)
//  Noun:       lightbox
//  action 1:   lightbox illuminates
lightBox.illuminate();
//  action 2:   lightbox dims
lightBox.dim();
//  action 3:   lightbox flashes
lightBox.flash();

//  4)
//  Noun:       guitar tuner
//  action 1:   guitar tuner captures sound
guitarTuner.captureSound();
//  action 2:   guitar tuner extracts pitch information
guitarTuner.extractPitch();
//  action 3:   guitar tuner displays pitch information
guitarTuner.displayPitch();

//  5)
//  Noun:       music player
//  action 1:   music player becomes louder
musicPlayer.volumeUp();
//  action 2:   music player becomes quieter
musicPlayer.volumeDown();
//  action 3:   music player stops playing
musicPlayer.stop();

//  6)
//  Noun:       air purifier
//  action 1:   air purifier evaluates air condition 
airPurifier.evaluateAirCondition();
//  action 2:   air purifier displays air condition
airPurifier.displayAirCondition();
//  action 3:   air purifier plays a low air quality warning sound
airPurifier.playWarningSound();

//  7)
//  Noun:       battery charger
//  action 1:   battery charger checks battery level
batteryCharger.checkBatteryLevel();
//  action 2:   battery charger activates charging
batteryCharger.chargingStart();
//  action 3:   battery charger stops charging
batteryCharger.chargingStop();

//  8)
//  Noun:       doorbell camera
//  action 1:   the doorbell camera plays a chime
doorbellCamera.playChime();
//  action 2:   the doorbell camera starts a recording
doorbellCamera.startRecording();
//  action 3:   the doorbell camera finishes a recording
doorbellCamera.finishRecording();

//  9)
//  Noun:       kettle
//  action 1:   kettle starts boiling water
kettle.boilingStart();
//  action 2:   kettle stops boiling water
kettle.boilingStop();
//  action 3:   kettle plays boiling finishing sound
kettle.playFinishSound();

//  10)
//  Noun:       camera
//  action 1:   camera starts recording
camera.recordingStart();
//  action 2:   camera stops recording
camera.recordingStop();
//  action 3:   camera formats a memory card
camera.formatCard();


#endif

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
    std::cout << "good to go" << std::endl;
    return 0;
}
