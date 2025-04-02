<i>Rules ripped from the paper.</i>

## Context
Pedestrians at busy intersections often have to wait for a long time to cross the street safely. This can be
especially challenging for individuals with mobility issues, those who are in a hurry, or when traffic conditions
are unpredictable.

## Problem
There is a need for a convenient, efficient and safe way for pedestrians to signal their intent to cross the street
and have the traffic lights adjusted accordingly to minimize waiting time and ensure safety.

## Solution
A solution would be an android app that allows pedestrians to communicate with the intersection's traffic lights
sending information about which side of the road the pedestrian is on and to which side the pedestrian wishes to
traverse.

The requirements are as follows:

1. <u>App Interface</u>: The app provides a user-friendly interface where pedestrians can select their current location (side of the road) and their desired destination (which side they wish to traverse to).
2. <u>Signal Transmission</u>: When the pedestrian is ready to cross, they press a button in the app to send a signal to the traffic lights system.
3. <u>Traffic Light Adjustment</u>: The traffic lights system receives the signal and adjusts the timing of the lights to create a safe window for the pedestrian to cross. The system ensures that the pedestrian has enough time to cross the street safely, considering their walking speed and any mobility issues.
4. <u>Feedback to Pedestrian</u>: The app provides real-time feedback to the pedestrian, indicating when it is safe to start crossing and how much time they have to cross.
5. <u>Safety Features</u>: The app includes safety features such as audible alerts for visually impaired users and vibration feedback for those who prefer tactile notifications.

## The Design Challenge
Participants will be tasked with developing an app that can be used in lieu of a physical walk button. This challenge consists of three primary pieces:
1. <u>The app</u>: Software development using MIT App Inventor capable of receiving pedestrian inputs and relaying information to traffic lights signaling system
2. <u>The traffic light control</u>: Hardware around an Arduino Mega, including connections of the LEDs lights with the arduino, the communication with the Bluetooth module and the development of microcontroller/stoplight program.
3. <u>Presentation</u>: Participants will present their solution explaining reasons for their decisions.

## 1. The app
The app should have a user-friendly interface, showing enough visual information where:

* Pedestrians can select their current location (side of the road) and their desired destination (which side they wish to traverse to).
* Pedestrians can press a button to send a signal to the traffic lights system when they are ready to cross.
* Pedestrians can see when they are safe to cross.
* <span style="color:#6495ED">(Not necessary for high school)</span> Pedestrians should be able to see how long it will take for the light to allow them to cross.
* <span style="color:#6495ED">(Not necessary for high school)</span> Pedestrians should be able to select their crossing speed so the controller can count how long it should take to turn the crossing light red again. The teams are encouraged to create three modes: slow pedestrian crossing (requires more time); regular pedestrian crossing (requires regular time); fast pedestrian crossing (requires less time).

Each team can test the app at their own device or schedule a test at the IEEE tablet setup for testing purposes. To schedule a test, the team must communicate with the proctor who will coordinate the available slot for testing. The day will be divided into slots of 20 minutes that the team can choose for testing when available.

## 2. The traffic lights control
The traffic lights will be composed of 4 green, 4 yellow, 8 white and 12 red LEDs which should be connected to an Arduino Mega. Participants must program the Arduino to efficiently and safely process the traffic light control, having a basic operating schedule for the traffic lights by default when no crosswalk buttons are pressed over a length of time:

* Command the traffic lights, simulating a real intersection traffic light controller and handle all signalling logic: the traffic light should operate normally as a regular traffic light without a sensor, i.e., it should change the lights of one direction from green to yellow and then red after a certian time while the light of the other direction is changing from red to green. Vehicles are a llowed to go forward and turn right, but not turn left, so no left turn is available.
* Handle timing of lights: the traffic light controller should have a parameterizable time to change from red to green and vice-versa. To avoid loss of time, the change in the lights should not exceed 3 minutes.
* Prevent multiple lights from turning green simultaneously from traversing directions: participants will lose points if lights from orthogonal directions are green at the same time.
* <span style="color:#6495ED">Night and Day mode (Not necessary for high school):</span> the traffic light controller should handle the brightness of all LEDs with similar brightness. Moreover, it should have a night and day mode. if the night mode is selected, the LED lights should be dimmed.

The arduino should also be programmed to receive data from the crosswalk app and do the following:
* Give preference for the pedestrians:
  * Once a pedestrian requests to cross in a direction, the traffic controller should change the time of the traffic lights to decrease the pedestrian waiting time. Allow multiple pedestrians to cross simultaneously if they are heading in the same direction or to the same destination. Time for crossing may increase a slong as it doesn't exceed a certain value to be defined. The light of the pedestrian should be white when the light for the road in that direction or to turn right to the pedestrian crosswalk is red. That means that the light of a road may be red even though the light on the opposite parallel side is green (left turn is not allowed but right turn is).
  * First-Come, First-Served: Prioritize requests based on the order received and current traffic lights timing.
  * Batch processing: Group requests received within a short time frame (e.g., 30 seconds) can be processed together.
* Queue management:
  * Implement a system to handle multiple crossing requests.
* Simultaneous requests:
  * If multiple pedestrian's request to cross at the same time, synchronize the signals to accommodate all requests safely.

The hardware of the LEDs along with the arduino is a topic of evaluation. It should be neat, organized and professional to be easy to trouble-shoot. Although it is not required, soldering irons will be available for use. To use a soldering iron, the team must communicate with the proctor who will coordingate the available slot for the soldering station. The day will be divided into slots of 20 minutes that the team can choose for soldering if available.

## 3. Presentation
At the judging time, students will have 5 to 10 minutes to present their solution and their presentation will be evaluated according to the rubrics. Judges will have 10 to 20 minutes to ask questions and try different options. The team's responses to the judges will be evaluated.

## 4. Judging tests
Judging will be done on the IEEE tablet selected properly for juding purposes. All teams must upload at the supplied google drive all their codes for the web app and for the arduino properly named so it is easy to identify them. The web app will be downloaded from the google drive on the tablet for the judging. THe team will explain the functionality and then the judges will make questions and other tests.

The following functionalities will be tested:
* **Scenario A:** No pedestrian request to cross the road during a traffic light cycle.
* **Functionality to Verify:**
  * Defualt Traffic Light Operation: the traffic lights operate on their default cycle for vehicles and the traffic light controller does not unnecessarily change the pedestrian signal.
  * User Notification: the app rpovides clear instructions or notifications to pedestrians about how to request to cross if they approach the intersection.
  * Light change notification: the pedestrian is notified of the time that the light will change.
  * Safety Check: there is no green light for more than two directions at the same time.
  * Red light: Time for all red lights at the same time is reduced.

* **Scenario B:** A pedestrian requests to cross immediately after the traffic light for vehicles has turned green.
* **Functionality to Verify:**
  * Request Handling: the app can handle the request and queue it appropriately.
  * Wait Time Calculation: the app calculates the wait time based on the current green light duration for vehicles.
  * Notification: the pedestrian is notified of the wait time and the reason for the delay.
  * Safety Check: the app does nto allow crossing until it is safe, even if the request is made immediately after the light turns green.

* **Scenario C:** Pedestrian requests to cross at the same time from different sides of the intersection.
* **Functionality to Verify:**
  * Queue Management: Ensure the app can queue multiple requests and process them in the correct order.
  * Synchronization: Verify that the app synchronizes the crossing signals to accommodate all requests safely.
  * Wait Time Display: Ensure each pedestrian request sees an accurate wait time based on their position in the queue.

* **<span style="color:#6495ED">Scenario D: </span>** Pedestrians select different crossing speeds (slow, regular, fast) and request to cross. <span style="color:#6495ED">(not for high school teams)</span>
* **Functionality to Verify:**
  * Speed Selection: Ensure the app allows pedestrians to select their crossing speed.
  * Timing Adjustment: Verify that the crossing time adjusts based on the selected speed.
  * Countdown Timer: Ensure the countdown timer reflects the selected speed and provides accurate crossing time.

* **<span style="color:#6495ED">Scenario E: </span>** Night/Day mode is selected. <span style="color:#6495ED">(not for high school teams)</span>
* **Functionality to Verify:**
  * Brightness coherence: all LEDs are lit with the same brightness.
  * Brightness Adjustment: the brightness of the pedestrian crossing lights increases during the day for better visibility and decreases at night to reduce glare and save energy.

## Additional Features
Participants may earn extra points based on added features to the app. These features may include:
* Haptic or aural warnings in addition to visual cues to indicate when the crosswalk is safe to cross
* Syncing the physical countdown timer to indicate on the phone to the user how much time is left to safely cross
* Provide aural or haptic cues during the countdown phase to alert users of the remaining time
* Graphical interface that shows the status of lights and possible wait times
* Allow users to provide feedback on their crossing experience to improve the app.

## Misconduct
Participants will immediately be disqualified from the challenge if they participate in misconduct. Proctors will be present throughout the time of the challenge to ensure that all rules are being followed. The following are the rules that we are applying to ensure a fair outcome:
* No change of team members. All participants should work as registered.
* No communication with participants of other groups or with people not participating in the challenge. Emergency calls will be allowed only after consulting with organizers.
* Only two laptops can be used, but no videos.
* No usage of any AI-based application such as chat-gpt, co-pilot, etc. Participants may use google, but no other AI-based applications.
* Only one phone is allowed to be used. It should not be used unless for testing purposes.
* All computers and phones being used should be easily visible so the proctors can ensure that you are not using not allowed applications.
* If the proctor requires taking a look at all the applications opened in the computer and in the phone, participants must allow it.
* The use of bathroom facilities must be requested to the proctor that will coordinate with someone to accompany you to the door of the bathroom. All electronic devices should be left at the work area before leaving to the bathroom.

## Judging criteria
Participants will be judged based on their ability to successfully create an app that can interface with simulated traffic lights crosswalk technology.

Two different judging criterias will be used for the groups depending if particpants are formed of
* middle and high school students (with at least one high school student required per team); or
* general public, including University students.

Primary points will be awarded for:
* Presentation (can the team clearly present what was done?)
* Response (can the team accurately respond to questions?)
* Neatness of the hardware (is the hardware neat and organized?)
* Basic functionality (does the design pass all the testing scenarios?)
* App design (how well is the app designed? Is it intuitive? User friendly? Do they use obvious symbology and graphics to accurately represent the real crosswalk?)
* Extra addition (bonus) (what additional features outside of those mentioned? Did they create any useful and value-added functions other teams did not?)
* Sustainability (is the design robust?)

The judging will be done according to the following rubrics: 
|                          | (0 pts) Below expectations                                                                                                            | (2 pts) Meets expectations                                                                                                               | (4 pts) Exceeds expectations                                                                                                                   |
|--------------------------|---------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------|
| Presentation             | Participants present their project showing no confidence in their project.                                                            | Participants present their project, showing some functionality leaving only a few questions.                                             | Participants present their project, showing all the functionality leaving no questions.                                                        |
| Response                 | Participants are not able to respond to many of the questions.                                                                        | Participants think about the response for a little time, and accurately respond to most of the questions.                                | Participants accurately respond to all questions with no doubt on their responses.                                                             |
| Neatness of the hardware | Wires are all messed up, LEDs are not properly seated, or it is difficult to troubleshoot any issues. Design looks very disorganized. | Most of the components and wires are neat and organized with some identification of the cables for troubleshooting. The design looks ok. | All the components and wires are neat and organized with easy identification of the cables for troubleshooting. The design looks professional. |
| Basic Functionality      | Several of the listed functionalities still don't work.                                                                               | All functionalities but one work, according to expectations.                                                                             | All functionalities work beyond expectations and other functionalities are present.                                                            |
| App Design               | App is difficult to use without extra guidance.                                                                                       | App is user friendly but it is not so intuitive requiring some guessing on the usage.                                                    | App is intuitive, user friendly and uses obvious symbology and graphics to accurately represent the real crosswalk.                            |
| Extra addition (bonus)   | App doesn't have any additional features.                                                                                             | App has most of the suggested additional features.                                                                                       | App has all or more than the suggested additional features.                                                                                    |
| Innovation               | Team didn't create any useful or value-added function.                                                                                | Team created a useful and value-added function that is evident and anyone could have thought of.                                         | Team created a useful and value-added function that would not be commonly thought.                                                             |
| Sustainability           | The design stops working as soon as it is moved out of place or even without moving it.                                               | The design still works even after moving from one place to another but not after slightly shaking it.                                    | The design still works even after moving from one place to another or after slightly shaking it (cradle-to-cradle instead of cradle-to-grave)  |

Changes in the rules and rubrics can be done at the organizers discretion.

## Awards
The teams eligible for prizes
* 3rd place must at least "meet expectations" on presentation, response, <span style="color:#6495ED">Neatness of the hardware (not necessary for high school)</span>, Basic Functionality, and App Design.
* 2nd place must at least "meet expectations" on presentation, response, Neatness of the hardware, Basic Functionality, App Design, and <span style="color:#6495ED">extra addition (not necessary for high school)</span> and <span style="color:#6495ED">innovation (not necessary for high school)</span>.
* 1st place must at least "meet expectations" on presentation, response, Neatness of the hardware, Basic Functionality, App Design, extra addition, <span style="color:#6495ED">innovation (not necessary for high school)</span>, and <span style="color:#6495ED">sustainability (not necessary for high school)</span>.

## Tie break
In case two teams are eligible for the same prize, the following tie break will be used:
* Project that is still working (project didn't stop working after judging)
* Number of points
* Cleanness of the software (arduino and web app behind the scenes)
* Stronger sustainability (a stronger sustainability test will be used to verify if project still works)
* Time for completion