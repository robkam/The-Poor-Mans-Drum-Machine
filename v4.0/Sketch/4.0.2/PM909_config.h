
    /******************************** Scharre Soft™ *******************************

    Copyright 2022 Willem E.J. Hoekert.

    Redistribution and use in source and binary forms, with or without 
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, 
    this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright notice, 
    this list of conditions and the following disclaimer in the documentation 
    and/or other materials provided with the distribution.

    3. Neither the name of the copyright holder nor the names of its contributors 
    may be used to endorse or promote products derived from this software without 
    specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER AND CONTRIBUTORS "AS IS" 
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE 
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
    SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
    OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  
 
    (c) 2022 Willem Hoekert
    Scharre Soft™ 
    Amsterdam, The Netherlands
    ScharreSoft@outlook.com

    ******************************************************************************/




#ifndef PM_909_CONFIG_H
  #define PM_909_CONFIG_H


  /*
  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    WARNING !!   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  XX                                                                                               XX
  XX       Editting the values of MaxVoices, MaxPatterns and MaxComposition will make the          XX
  XX       rhythm tracks that were previously stored on the EEPROM unusable!                       XX
  XX       Do not edit this file if you don't want to loose these rhythm tracks.                   XX
  XX                                                                                               XX
  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  */



  /*---------------------------------------------------------------------------------------------------------------------
  
    By default, there are 11 different drum voices. You can use 16 different drumvoices, provided that both the hardware 
    and the software are adjusted. For instructions on adjusting the hardware, see the schematic.

    In order to use n drum voices, adjust the software as follows:

 
    #define MaxVoices n                            // Maximal number of drum voices  

    const char string_0[] PROGMEM  = "MyName 1";
    const char string_1[] PROGMEM  = "MyName 2";
    const char string_2[] PROGMEM  = "MyName 3";
    ...
    ...
    ...
    const char string_n-1[] PROGMEM = "MyName n";


    const char *const string_table[] PROGMEM = {string_0, string_1, string_2, .......... string_n-1};

  ---------------------------------------------------------------------------------------------------------------------*/


  #define MaxVoices 11                               // Maximal number of drum voices
                                                    
  const char string_0[]  PROGMEM = "1 Bass Drum";    // you can change the names of the voices if desired. 
  const char string_1[]  PROGMEM = "2 Snare Drum";   // if you use more then 12 characters, increase the size
  const char string_2[]  PROGMEM = "3 Low Tom";      // of the 'buffer' array (see below)
  const char string_3[]  PROGMEM = "4 Mid Tom";
  const char string_4[]  PROGMEM = "5 Hi Tom";
  const char string_5[]  PROGMEM = "6 Rim";
  const char string_6[]  PROGMEM = "7 Clap";
  const char string_7[]  PROGMEM = "8 Open HH";
  const char string_8[]  PROGMEM = "9 Closed HH";
  const char string_9[]  PROGMEM = "10 Ride";
  const char string_10[] PROGMEM = "11 Crash";

  char buffer[12];                                   // make sure this is large enough for the largest string it must hold !!!


  const char *const string_table[] PROGMEM = {string_0, string_1, string_2, string_3, string_4, string_5, string_6, string_7, string_8, string_9, string_10};



  /*-----------------------------------------------------------------------------------
 
  It is advised to adjust MaxPatterns depending on the number of voices that is used.
  The higher the value of MaxVoices, the lower the value of MaxPatterns can be. 
  Using a too high value for MaxPatternS may lead to program instability.

  The following values can be used as a guideline:

  MaxVoices     MaxPatterns
     8              66             
     9              59
     10             53
     11             48
     12             44
     13             41
     14             38
     15             35
     16             33

  -----------------------------------------------------------------------------------*/

  #define MaxPatterns 48              // Maximal number of patterns in a track
  
  #define MaxComposition 224          // Maximal number of measures in a track



  /*-----------------------------------------------------------------------------------
  Edit the values below if you are not using the default 1025 Kb EEPROM.
  If you use a smaller EEPROM, reduce MaxTracks. 
  If you use more than the default number of 11 voices (48 patterns per track), then reduce the value of MaxTracks. 
  Use the PM909 Calculation Sheet on Github to calculate MaxTracks for the combination of MaxVoices, MaxPatterns and EEPROM that you are using.
  -----------------------------------------------------------------------------------*/

  #define Large_EEPROM 1              // Set to 1 for 1025 Kbit EEPROM, set to 0 for 512 Kbit or less
  
  #define MaxTracks 36                // Maximal number of drum tracks on the EEPROM
                                      // 256kB  : MaxTracks = 9   (MaxVoices=11, MaxPatterns=48)
                                      // 512kB  : MaxTracks = 18  (MaxVoices=11, MaxPatterns=48)
                                      // 1025kB : MaxTracks = 36  (MaxVoices=11, MaxPatterns=48)


  /*-----------------------------------------------------------------------------------

  Below, you can define if you want to use a TR-909 Hihat module, a TR-808 hihat module,
  or none the above.
  -----------------------------------------------------------------------------------*/


  #define TR_909_HIHAT 1              // set to 1 if TR-909 hihat module is used
  #define TR_808_HIHAT 0              // set to 1 if TR-808 hihat module is used
                                      // set both to 0 if none of these are used
                                      
  /*-----------------------------------------------------------------------------------*/
  
  #define LED_HI 50                  // intensity of the LEDs for a high accent
  #define LED_LO 2                   // intensity of the LEDs for a low accent

#endif