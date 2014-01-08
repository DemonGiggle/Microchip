/*****************************************************************************
 * FileName:        AN1182 Pictures XC16.c
 * Processor:       PIC24F, PIC24H, dsPIC
 * Compiler:        MPLAB C30/XC16 (see release notes for tested revision)
 * Linker:          MPLAB LINK30/XC16
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright(c) 2012 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED �AS IS� WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 *
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * AUTO-GENERATED CODE:  Graphics Resource Converter version: 3.28.15
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include <Graphics/Graphics.h>
#include "HardwareProfile.h"

/*****************************************************************************
 * SECTION:  Graphics Library Firmware Check
 *****************************************************************************/
#if(GRAPHICS_LIBRARY_VERSION != 0x0306)
#warning "It is suggested to use Graphics Library version 3.06 with this version of GRC."
#endif

/*****************************************************************************
 * SECTION:  Graphics Bitmap Padding Check
 *****************************************************************************/
#ifdef USE_BITMAP_NO_PADDING_LINE
#error These bitmap resources have been converted with padding of the horizontal lines, but USE_BITMAP_NO_PADDING_LINE is defined in GraphicsConfig.h.
#endif

/*****************************************************************************
 * Converted Resources
 * -------------------
 *
 * Bitmaps
 * -------
 * redLArrow - 45x40 pixels, 4-bits per pixel
 * redRArrow - 45x40 pixels, 4-bits per pixel
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  BITMAPS
 *****************************************************************************/

/*********************************
 * Bitmap Structure
 * Label: redLArrow
 * Description:  45x40 pixels, 4-bits per pixel
 ***********************************/
#if defined (__C30__) && (__C30_VERSION__ <= 325)
asm(".section .const, psv");
#else
asm(".section .const, psv, page");
#endif


extern const char __redLArrow[] __attribute__((space(prog), aligned(2)));

const IMAGE_FLASH redLArrow =
{
    (FLASH | IMAGE_MBITMAP | COMP_NONE),
    (FLASH_BYTE *)__redLArrow
};
asm(".section .text, code");
asm(".global ___redLArrow");
asm(".align 2");
asm("___redLArrow:");
/****************************************
 * Bitmap header
 ****************************************/
asm(".byte 0x00");           // Compresssion
asm(".byte 0x04");           // Color Depth
asm(".byte 0x28, 0x00");     // Height
asm(".byte 0x2D, 0x00");     // Width
/***********************************
 * Color Palette for the image
 **********************************/
asm(".byte 0x41, 0x18");
asm(".byte 0xA2, 0x30");
asm(".byte 0x61, 0x50");
asm(".byte 0x00, 0x88");
asm(".byte 0x65, 0x39");
asm(".byte 0x00, 0xB8");
asm(".byte 0x00, 0xE0");
asm(".byte 0x00, 0xF8");
asm(".byte 0xCB, 0x62");
asm(".byte 0xB2, 0x9C");
asm(".byte 0x79, 0xCE");
asm(".byte 0x3C, 0xE7");
asm(".byte 0xDE, 0xF7");
asm(".byte 0xBF, 0xFF");
asm(".byte 0xFE, 0xFF");
asm(".byte 0xFF, 0xFF");
/********************************
 * Bitmap Image Body
 *********************************/
asm(".byte 0xFF, 0xFF, 0xEF, 0xCC, 0xED, 0xFC, 0xCF, 0xFC, 0xEE, 0xED, 0xCC, 0xDE, 0xCF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAB, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xAF, 0x44, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x19, 0x40, 0xFF, 0x0F, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x28, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF");
asm(".byte 0x89, 0x20, 0x53, 0xB1, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x09");
asm(".byte 0x63, 0xF1, 0xFF, 0xFF, 0xFF, 0x9A, 0x01, 0x32, 0x76, 0x27, 0xF9, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x63, 0x27, 0xF9, 0xFF, 0x9B, 0x08, 0x32, 0x76, 0x77, 0x77");
asm(".byte 0x83, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4A, 0x62, 0x77, 0x16, 0xAF");
asm(".byte 0x19, 0x20, 0x63, 0x77, 0x77, 0x77, 0x57, 0xF4, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0x8B, 0x52, 0x77, 0x77, 0x02, 0x20, 0x63, 0x77, 0x77, 0x77, 0x77, 0x77, 0x16, 0xFB, 0xFF");
asm(".byte 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9C, 0x30, 0x77, 0x77, 0x77, 0x33, 0x76, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x92, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x30, 0x76");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x37, 0xF8, 0xFF, 0xFF, 0xFF, 0x0F");
asm(".byte 0xFF, 0xFF, 0xFF, 0xAF, 0x24, 0x76, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x45, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xBF, 0x28, 0x75, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x67, 0xB1, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xCF");
asm(".byte 0x09, 0x73, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x27, 0xF9");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0x09, 0x63, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0x18, 0x75, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x92, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0x0F, 0xFF, 0xAF, 0x24, 0x76, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x16, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x9F, 0x20, 0x76, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x57, 0xC4, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0x0F, 0xFF, 0xFF, 0xFF, 0x9C, 0x30, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x8B, 0x51, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x27, 0xF9, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0x4A, 0x62, 0x77, 0x77, 0x77, 0x66, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x67, 0xA1, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x62, 0x77, 0x77");
asm(".byte 0x01, 0x21, 0x75, 0x77, 0x77, 0x77, 0x77, 0x77, 0x45, 0xFC, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xCF, 0x09, 0x73, 0x77, 0x45, 0x9A, 0x04, 0x32, 0x76, 0x77, 0x77, 0x77, 0x37");
asm(".byte 0xF8, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x18, 0x75, 0x17, 0xFA");
asm(".byte 0xBF, 0x89, 0x10, 0x52, 0x77, 0x77, 0x77, 0x92, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xAF, 0x24, 0x56, 0xF4, 0xFF, 0xFF, 0xAF, 0x49, 0x20, 0x63, 0x77, 0x16, 0xFA");
asm(".byte 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x20, 0xA0, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0x9B, 0x08, 0x21, 0x55, 0xC4, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0x9C, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9A, 0x04, 0x80, 0xFF, 0x0F");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9B, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xBF, 0x99, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xCF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xBC, 0xCB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F");
#if defined (__C30__) && (__C30_VERSION__ <= 325)
asm(".section .const, psv");
#else
asm(".section .const, psv, page");
#endif

/*********************************
 * Bitmap Structure
 * Label: redRArrow
 * Description:  45x40 pixels, 4-bits per pixel
 ***********************************/
#if defined (__C30__) && (__C30_VERSION__ <= 325)
asm(".section .const, psv");
#else
asm(".section .const, psv, page");
#endif


extern const char __redRArrow[] __attribute__((space(prog), aligned(2)));

const IMAGE_FLASH redRArrow =
{
    (FLASH | IMAGE_MBITMAP | COMP_NONE),
    (FLASH_BYTE *)__redRArrow
};
asm(".section .text, code");
asm(".global ___redRArrow");
asm(".align 2");
asm("___redRArrow:");
/****************************************
 * Bitmap header
 ****************************************/
asm(".byte 0x00");           // Compresssion
asm(".byte 0x04");           // Color Depth
asm(".byte 0x28, 0x00");     // Height
asm(".byte 0x2D, 0x00");     // Width
/***********************************
 * Color Palette for the image
 **********************************/
asm(".byte 0x41, 0x18");
asm(".byte 0xA2, 0x30");
asm(".byte 0x61, 0x50");
asm(".byte 0x00, 0x88");
asm(".byte 0x65, 0x39");
asm(".byte 0x00, 0xB8");
asm(".byte 0x00, 0xE0");
asm(".byte 0x00, 0xF8");
asm(".byte 0xCB, 0x62");
asm(".byte 0xB2, 0x9C");
asm(".byte 0x79, 0xCE");
asm(".byte 0x3C, 0xE7");
asm(".byte 0xDE, 0xF7");
asm(".byte 0xBF, 0xFF");
asm(".byte 0xFE, 0xFF");
asm(".byte 0xFF, 0xFF");
/********************************
 * Bitmap Image Body
 *********************************/
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xBB, 0xCC, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0x0F, 0xFF, 0x9F, 0xB9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0xFB, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0x8F, 0x00, 0x94, 0xFA, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0x4F, 0x90, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF");
asm(".byte 0xCF, 0x54, 0x25, 0x01, 0x98, 0xFB, 0xFF, 0xFF, 0xFF, 0xAF, 0x20, 0x90, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x1A, 0x76, 0x67, 0x23, 0x40, 0xA9, 0xFF, 0xFF");
asm(".byte 0xFF, 0x54, 0x26, 0xA4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x9F");
asm(".byte 0x72, 0x77, 0x77, 0x57, 0x12, 0x80, 0xB9, 0xFF, 0x1A, 0x77, 0x15, 0xB8, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0x38, 0x77, 0x77, 0x77, 0x77, 0x36, 0x02, 0x94, 0x4A");
asm(".byte 0x75, 0x77, 0x03, 0xC9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0x4C, 0x75");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x25, 0x01, 0x71, 0x77, 0x67, 0x02, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xAF, 0x61, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x67, 0x76, 0x77");
asm(".byte 0x77, 0x67, 0x42, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x29, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x57, 0x81, 0xFB, 0xFF, 0xFF, 0xFF, 0x0F");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x73, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x37, 0x90, 0xFC, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x54, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x26, 0x90, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0x1A, 0x76, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x26, 0xA4, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x72, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x15, 0xF8, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0x8F, 0x73, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x67");
asm(".byte 0x03, 0xF9, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x29, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x03, 0xC9, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x61");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x25, 0xB8, 0xFF, 0xFF");
asm(".byte 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x75, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x26, 0xA4, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x77, 0x77, 0x77");
asm(".byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x36, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF");
asm(".byte 0xFF, 0xFF, 0x9F, 0x72, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x36, 0x73, 0x77, 0x77, 0x37, 0x90");
asm(".byte 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0x1B, 0x76, 0x77, 0x77, 0x77, 0x77, 0x67");
asm(".byte 0x23, 0x00, 0x72, 0x77, 0x57, 0x82, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF");
asm(".byte 0x54, 0x77, 0x77, 0x77, 0x67, 0x23, 0x10, 0xA9, 0x1F, 0x76, 0x67, 0x42, 0xFA, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x8F, 0x73, 0x77, 0x77, 0x36, 0x02, 0x98, 0xFB, 0xFF, 0x29");
asm(".byte 0x67, 0x03, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x29, 0x77, 0x36");
asm(".byte 0x02, 0x91, 0xFA, 0xFF, 0xFF, 0xFF, 0x61, 0x03, 0xC9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0x0F, 0xFF, 0xBF, 0x51, 0x23, 0x80, 0xB9, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x20, 0xB8, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0x4F, 0x10, 0xA9, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0x4F, 0xA4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F");
asm(".byte 0xFF, 0xAF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF");
asm(".byte 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xDF, 0xCE, 0xEC, 0xED, 0xFE");
asm(".byte 0xCC, 0xFF, 0xEC, 0xCD, 0xEC, 0xFF, 0xFF, 0x0F");
#if defined (__C30__) && (__C30_VERSION__ <= 325)
asm(".section .const, psv");
#else
asm(".section .const, psv, page");
#endif

