# The-Poor-Man's-Drum Machine
A poor man's version of TR-909-like Drum Machines

The Poor Mans Drum Machine (PMDM) is an Arduino based, open source 16 step drum sequencer that resembles the TR-x0x-like Rhythm Composers. The circuit can be used to control the drum modules from the TR-909 or TR-808 Rhythm Composers, but it can also be used to control any set of drum modules that accept 5 Volt triggers. The PMDM is highly customizable and can be tailored to fit your needs. 

The PMDM originally started with the name of "Poor Mans TR-909". Because the PM-909 can be used for more than just making a Poor Man's TR-909, I chose to rename the sequencer to "Poor Mans Drum Machine", starting from v4.1. The PMDM is essentially the same as the PM-909. The only real difference is that the opamp buffers generate accent CV's ranging from 0 to 15 Volt. When CV's ranging from 0 to 5 Volt are needed, 2 resistors per opamp buffer should be omitted  (see the Build Guide). 


# Features:

· Open Source

· High / Low Accent (adjustable for each voice individually)

· Flam on all voices (if flam is set to maximal, 32th notes can be played)

· Shuffle on all voices (if shuffle is set to maximal, all even notes are delayed a 32th note)

· Create, play and edit drumtracks consisting of 48 different drum patterns. A drum track can have a length of 224 measures (patterns)

· Create patterns using Pattern Write mode and Tap Write mode

. Pattern Play mode: create tracks by playing different patterns on the fly

· Voice Mute mode: mute and un-mute voices on the fly for extra variation and improvisation

· Save up to 36 drum tracks on an EEPROM

· Internal clock and external clockable (e.g. using LFO or MIDI)

· External Reset input and Clock Out output

· MIDI in The module can be synced by an external MIDI clock (e.g. a DAW) to play a programmed rhythm

· The module can play a MIDI drumtrack that was programmed in a DAW (with full velocity control). (only tested with Ableton Live)

· MIDI out: A drumtrack can be recorded in a DAW. (This is somewhat rudimentary)

· Customizable through simple confirguration file

· Create random rhythm patterns: (some of the random patterns are quite OK )

· Random improvisation on an existing pattern



By default, the firmware is configured to control the 11 standard drum sounds that are found in the TR-909. Both firmware and hardware are easily adjusted to control upto 16 different drum modules of any kind. For more information, see the Build Guide and the Owners Manual in the Documentation folder.



