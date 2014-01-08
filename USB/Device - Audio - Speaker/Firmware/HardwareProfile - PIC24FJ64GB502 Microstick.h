/********************************************************************
 FileName:     	HardwareProfile - PIC24FJ64GB502 Microstick.h
 Dependencies:  See INCLUDES section
 Processor:     PIC24FJ64GB502
 Hardware:      PIC24FJ64GB502 Microstick
 Compiler:      Microchip C30
 Company:       Microchip Technology, Inc.

 Software License Agreement:

 The software supplied herewith by Microchip Technology Incorporated
 (the �Company�) for its PIC� Microcontroller is intended and
 supplied to you, the Company�s customer, for use solely and
 exclusively on Microchip PIC Microcontroller products. The
 software is owned by the Company and/or its supplier, and is
 protected under applicable copyright laws. All rights are reserved.
 Any use in violation of the foregoing restrictions may subject the
 user to criminal sanctions under applicable laws, as well as to
 civil liability for the breach of the terms and conditions of this
 license.

 THIS SOFTWARE IS PROVIDED IN AN �AS IS� CONDITION. NO WARRANTIES,
 WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED
 TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT,
 IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR
 CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.

********************************************************************
 File Description:

 Change History:
  Rev   Date         Description
  1.0   11/19/2004   Initial release
  2.1   02/26/2007   Updated for simplicity and to use common
                     coding style
  2.3   09/15/2008   Broke out each hardware platform into its own
                     "HardwareProfile - xxx.h" file
  2.4b  04/08/2009   Initial support for PIC24FJ64GB004 family
********************************************************************/

#ifndef HARDWARE_PROFILE_PIC24FJ64GB502_MICROSTICK_H
#define HARDWARE_PROFILE_PIC24FJ64GB502_MICROSTICK_H

    /*******************************************************************/
    /******** USB stack hardware selection options *********************/
    /*******************************************************************/
    //This section is the set of definitions required by the MCHPFSUSB
    //  framework.  These definitions tell the firmware what mode it is
    //  running in, and where it can find the results to some information
    //  that the stack needs.
    //These definitions are required by every application developed with
    //  this revision of the MCHPFSUSB framework.  Please review each
    //  option carefully and determine which options are desired/required
    //  for your application.

    //#define USE_SELF_POWER_SENSE_IO
    #define tris_self_power     TRISAbits.TRISA2    // Input
    #define self_power          1

    //#define USE_USB_BUS_SENSE_IO
    #define tris_usb_bus_sense  TRISBbits.TRISB5    // Input
    #define USB_BUS_SENSE       1 
   
    //Uncomment this to make the output HEX of this project 
    //   to be able to be bootloaded using the HID bootloader
    #define PROGRAMMABLE_WITH_USB_HID_BOOTLOADER	

    //If the application is going to be used with the HID bootloader
    //  then this will provide a function for the application to 
    //  enter the bootloader from the application (optional)
    #if defined(PROGRAMMABLE_WITH_USB_HID_BOOTLOADER)
        #define EnterBootloader() __asm__("goto 0x400")
    #endif   

    /*******************************************************************/
    /*******************************************************************/
    /*******************************************************************/
    /******** Application specific definitions *************************/
    /*******************************************************************/
    /*******************************************************************/
    /*******************************************************************/

    /** Board definition ***********************************************/
    //These defintions will tell the main() function which board is
    //  currently selected.  This will allow the application to add
    //  the correct configuration bits as wells use the correct
    //  initialization functions for the board.  These defitions are only
    //  required in the stack provided demos.  They are not required in
    //  final application design.
    #define DEMO_BOARD PIC24FJ64GB502_MICROSTICK
    #define PIC24FJ64GB502_MICROSTICK
    #define CLOCK_FREQ 32000000
    
    /** LED ************************************************************/
    #define mInitAllLEDs()      LATB &= 0xFCFF; TRISB &= 0xFCFF;
    
    #define mLED_1              LATBbits.LATB9
    #define mLED_2              LATBbits.LATB8
    #define mLED_3              
    #define mLED_4              

    #define mGetLED_1()         mLED_1
    #define mGetLED_2()         mLED_2
    #define mGetLED_3()         
    #define mGetLED_4()         
    
    #define mLED_1_On()         mLED_1 = 1;
    #define mLED_2_On()         mLED_2 = 1;
    #define mLED_3_On()         
    #define mLED_4_On()         
    
    #define mLED_1_Off()        mLED_1 = 0;
    #define mLED_2_Off()        mLED_2 = 0;
    #define mLED_3_Off()        
    #define mLED_4_Off()        
    
    #define mLED_1_Toggle()     mLED_1 = !mLED_1;
    #define mLED_2_Toggle()     mLED_2 = !mLED_2;
    #define mLED_3_Toggle()     
    #define mLED_4_Toggle()     
    
    /** SWITCH *********************************************************/
    #define mInitSwitch2()      TRISBbits.TRISB7=1;
    #define mInitSwitch3()      
    #define mInitAllSwitches()  mInitSwitch2();mInitSwitch3();
    #define sw2                 PORTBbits.RB7
    #define sw3                 FALSE

    /** I/O pin definitions ********************************************/
    #define INPUT_PIN 1
    #define OUTPUT_PIN 0

	/*** Audio    ************************************************/
	#ifdef AUDIO_SAMPLING_FREQUENCY_48000
	   		#define NO_OF_SAMPLES_IN_A_USB_FRAME 48
	   		#define PWM_PERIOD	CLOCK_FREQ/(2*48000)-3
	#elif defined AUDIO_SAMPLING_FREQUENCY_32000
	   		#define NO_OF_SAMPLES_IN_A_USB_FRAME 32
	   		#define PWM_PERIOD	CLOCK_FREQ/(2*32000)-1
	#elif defined AUDIO_SAMPLING_FREQUENCY_44100
	   		#define NO_OF_SAMPLES_IN_A_USB_FRAME 44
	   		#define PWM_PERIOD	CLOCK_FREQ/(2*44100)-1
	#endif
	
	/*** Intialize Audio Driver on the Speech Playback Card *********************************************/
 	#define mInitAudioDriver()  {AD1PCFGbits.PCFG10 = 1; TRISBbits.TRISB14=0; LATBbits.LATB14 = 1; }
	#define mAudioDriverON()	LATBbits.LATB14 = 0;
	#define mAudioDriverOFF()	LATBbits.LATB14 = 1;

	/****** PWM Intialization************************************/
	// pin remapping of RP15 as Output Comapre 1 output. 
	// configure RB15 as output for PWM
	// PWM mode, Single output, Active High
	#define mInitPWM() 			 {  __builtin_write_OSCCONL(OSCCON & 0xbf);\
									RPOR7bits.RP15R = 18;\
									__builtin_write_OSCCONL(OSCCON | 0x40);\
									TRISBbits.TRISB15 = OUTPUT_PIN;\
									OC1CON1          = 0x0000;\
									OC1CON2 		 = 0x0000;\
									OC1RS            = PWM_PERIOD;\
									OC1CON1bits.OCTSEL = 7;\
									OC1CON1bits.OCM = 6;\
									OC1CON2bits.SYNCSEL = 0x1F;\
								}
	#define PWM_PERIOD_INTERRUPT_FLAG  IFS0bits.OC1IF 
								
	#define DUTY_CYCLE OC1R   // Duty Cycle register of the PWM Peripheral. 
    #define MULTIPLY_FACTOR 1
    
	/****** Timer2 Intialization************************************/
	#define mInitTimerInterrupt() { IFS0bits.OC1IF = 0;\
									IEC0bits.OC1IE = 0;\
								  }
	#define mInitTimer() //PIC24F64GB004 has a PWM module with dedicated timer. So this macro does not do anything.  


	/****** Unmask OC1 Interrupt ************************************/
	#define mStartAudio()  {IEC0bits.OC1IE = 1;} // unmask Output Compare 1 interrupt

    /******* Mask OC1 Interrupt  ***********************************/ 
    #define mStopAudio()          {IEC0bits.OC1IE = 0;} //  mask Output Compare 1 interrupt
    

	

#endif  //HARDWARE_PROFILE_PIC24FJ64GB502_MICROSTICK_H
