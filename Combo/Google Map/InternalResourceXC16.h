/*****************************************************************************
 * FileName:        InternalResourceXC16.h
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

#ifndef INTERNALRESOURCEXC16_H_FILE
#define INTERNALRESOURCEXC16_H_FILE
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
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * TTF Font File Structure
 * Label: GOLSmallFont
 * Description:  Height: 17 pixels, 1 bit per pixel, Range: ' ' to '~'
 * Comment Block:
 * Copyright (c) <dates>, <Copyright Holder> (<URL|email>), 
 * with Reserved Font Name <Reserved Font Name>. 
 * Copyright (c) <dates>, <additional Copyright Holder> (<URL|email>), 
 * with Reserved Font Name <additional Reserved Font Name>. 
 * Copyright (c) <dates>, <additional Copyright Holder> (<URL|email>). 
 *  
 * This Font Software is licensed under the SIL Open Font License, Version 1.1. 
 * This license is copied below, and is also available with a FAQ at: 
 * http://scripts.sil.org/OFL 
 *  
 *  
 * ----------------------------------------------------------- 
 * SIL OPEN FONT LICENSE Version 1.1 - 26 February 2007 
 * ----------------------------------------------------------- 
 *  
 * PREAMBLE 
 * The goals of the Open Font License (OFL) are to stimulate worldwide 
 * development of collaborative font projects, to support the font creation 
 * efforts of academic and linguistic communities, and to provide a free and 
 * open framework in which fonts may be shared and improved in partnership 
 * with others. 
 *  
 * The OFL allows the licensed fonts to be used, studied, modified and 
 * redistributed freely as long as they are not sold by themselves. The 
 * fonts, including any derivative works, can be bundled, embedded, 
 * redistributed and/or sold with any software provided that any reserved 
 * names are not used by derivative works. The fonts and derivatives, 
 * however, cannot be released under any other type of license. The 
 * requirement for fonts to remain under this license does not apply 
 * to any document created using the fonts or their derivatives. 
 *  
 * DEFINITIONS 
 * "Font Software" refers to the set of files released by the Copyright 
 * Holder(s) under this license and clearly marked as such. This may 
 * include source files, build scripts and documentation. 
 *  
 * "Reserved Font Name" refers to any names specified as such after the 
 * copyright statement(s). 
 *  
 * "Original Version" refers to the collection of Font Software components as 
 * distributed by the Copyright Holder(s). 
 *  
 * "Modified Version" refers to any derivative made by adding to, deleting, 
 * or substituting -- in part or in whole -- any of the components of the 
 * Original Version, by changing formats or by porting the Font Software to a 
 * new environment. 
 *  
 * "Author" refers to any designer, engineer, programmer, technical 
 * writer or other person who contributed to the Font Software. 
 *  
 * PERMISSION & CONDITIONS 
 * Permission is hereby granted, free of charge, to any person obtaining 
 * a copy of the Font Software, to use, study, copy, merge, embed, modify, 
 * redistribute, and sell modified and unmodified copies of the Font 
 * Software, subject to the following conditions: 
 *  
 * 1) Neither the Font Software nor any of its individual components, 
 * in Original or Modified Versions, may be sold by itself. 
 *  
 * 2) Original or Modified Versions of the Font Software may be bundled, 
 * redistributed and/or sold with any software, provided that each copy 
 * contains the above copyright notice and this license. These can be 
 * included either as stand-alone text files, human-readable headers or 
 * in the appropriate machine-readable metadata fields within text or 
 * binary files as long as those fields can be easily viewed by the user. 
 *  
 * 3) No Modified Version of the Font Software may use the Reserved Font 
 * Name(s) unless explicit written permission is granted by the corresponding 
 * Copyright Holder. This restriction only applies to the primary font name as 
 * presented to the users. 
 *  
 * 4) The name(s) of the Copyright Holder(s) or the Author(s) of the Font 
 * Software shall not be used to promote, endorse or advertise any 
 * Modified Version, except to acknowledge the contribution(s) of the 
 * Copyright Holder(s) and the Author(s) or with their explicit written 
 * permission. 
 *  
 * 5) The Font Software, modified or unmodified, in part or in whole, 
 * must be distributed entirely under this license, and must not be 
 * distributed under any other license. The requirement for fonts to 
 * remain under this license does not apply to any document created 
 * using the Font Software. 
 *  
 * TERMINATION 
 * This license becomes null and void if any of the above conditions are 
 * not met. 
 *  
 * DISCLAIMER 
 * THE FONT SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OF 
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT 
 * OF COPYRIGHT, PATENT, TRADEMARK, OR OTHER RIGHT. IN NO EVENT SHALL THE 
 * COPYRIGHT HOLDER BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
 * INCLUDING ANY GENERAL, SPECIAL, INDIRECT, INCIDENTAL, OR CONSEQUENTIAL 
 * DAMAGES, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF THE USE OR INABILITY TO USE THE FONT SOFTWARE OR FROM 
 * OTHER DEALINGS IN THE FONT SOFTWARE. 
 ***********************************/
extern const FONT_FLASH GOLSmallFont;
#define GOLSmallFont_SIZE    (2207)
#endif

