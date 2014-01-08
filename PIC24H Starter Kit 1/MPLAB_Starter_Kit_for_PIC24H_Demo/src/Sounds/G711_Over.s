/******************************************************************************
*  G711_Over.s developed by Microchip Technology Inc. 
*  Copyright (c) 2005 by Microchip. All rights are reserved. 
*  
*  This Copyright notice may not be removed or modified without prior written 
*  consent of Microchip Technology Inc. 
******************************************************************************/

/******************************************************************************
*  G711_Over.s
*
*  Description:
*    This file is generated by dsPIC33F Speech Encoder Utility Version 1.00
*    It contains the ALAW compressed data for a 8kHz,16-bit speech signal.The
*    output array represents a 64kbps encoded bit stream.
*
*    Speech Encoder Utility settings:
*       Input Source:  Over.wav
*       Output Array:  G711_Over
*       Array Size:    3585 bytes                
*       Target Memory: Program Memory
*       LAW:           ALAW
******************************************************************************/

/* There are 1195 elements in the data array. */
   
/* Data file for storing 24-bit constants in program memory */

.global _G711_Over

.section .G711, code
_G711_Over:
.pword 0x555555,  0x555555,  0x555555,  0x555555,  0x555555,  0x55D555
.pword 0xD55555,  0x555555,  0x55D555,  0xD555D5,  0x55D555,  0x5555D5
.pword 0x555555,  0x555555,  0xD55555,  0x555555,  0x555555,  0x545555
.pword 0x555555,  0x555555,  0x555555,  0xD55555,  0xD55555,  0xD55555
.pword 0xD5D555,  0xD5D5D5,  0xD5D5D5,  0x55D5D5,  0xD5D5D5,  0xD5D5D5
.pword 0xD5D5D5,  0xD5D5D5,  0xD5D5D5,  0xD5D5D5,  0xD555D5,  0xD5D555
.pword 0x55D5D5,  0xD555D5,  0x55D555,  0x55D555,  0xD555D5,  0x55D555
.pword 0x555555,  0x555555,  0xD55555,  0x55D555,  0xD0D5D5,  0xD2DEDE
.pword 0x465A57,  0xDF565B,  0x5BD6DA,  0x48754E,  0x4F4646,  0x487674
.pword 0xE6F456,  0xFFE0ED,  0x415BD9,  0x4E4D46,  0xD9414A,  0xE1E1FF
.pword 0x71D4FF,  0x767978,  0xCE5D41,  0xEAE1FC,  0x54F9EE,  0x616F65
.pword 0x4F767F,  0x656471,  0x7B797F,  0x6C6A63,  0x96FB47,  0xEC919C
.pword 0x5B53FD,  0x7D4F57,  0x5D7D7F,  0xE8E8E4,  0x70C3E2,  0x72787B
.pword 0xF3F757,  0xE7E6E5,  0xD0FBE6,  0x636771,  0x7C7C66,  0x6E6779
.pword 0x101715,  0x1C1C1D,  0x83927E,  0x998E8B,  0x147AF4,  0x6B666B
.pword 0x596214,  0x8687EB,  0x7CED99,  0x656E14,  0xC5D873,  0xE7F655
.pword 0xC1E7E4,  0x6A6E64,  0x606D6A,  0x1E1314,  0x1A0505,  0x7E0504
.pword 0xB18999,  0x9483B6,  0x171073,  0x161168,  0xEA656A,  0x8F8F80
.pword 0x14C784,  0x4B1510,  0x6042C8,  0x736C6F,  0x6554D8,  0x071A16
.pword 0x010707,  0x010202,  0xB59815,  0x8BB2B3,  0x14D39C,  0x146E11
.pword 0x507914,  0x8087E2,  0xE69886,  0xDB7672,  0xE3E8F1,  0x657D5A
.pword 0x4B7563,  0x051069,  0x080F02,  0x343434,  0x8C1535,  0xA5A4BD
.pword 0x729BB6,  0x1D0507,  0x1B0404,  0x82F11C,  0x89B4B5,  0x1761EA
.pword 0x97D416,  0x54E1EA,  0x5C666D,  0x697744,  0x080D04,  0x363734
.pword 0x023131,  0xA4B099,  0xB5B8A6,  0x061390,  0x070718,  0x6E0505
.pword 0xB7899E,  0xE183B6,  0x74607E,  0xFA97EF,  0x166E59,  0x585961
.pword 0x031273,  0x313708,  0x303131,  0xB4ED0E,  0xA4A1A5,  0x6680B2
.pword 0x041F1B,  0x000405,  0x87F41B,  0xB5B0B4,  0xF49E83,  0xDEE7D6
.pword 0x1C654C,  0x6F151E,  0x1D717F,  0x310800,  0x323333,  0x861631
.pword 0xA6A6BD,  0x9BB1BB,  0x186B64,  0x0C0707,  0xF61D0C,  0xB6B787
.pword 0x858BB7,  0x51ED94,  0x1B6E67,  0x1C1E04,  0x106014,  0x370D05
.pword 0x3D3330,  0x9C0530,  0xA7A4B1,  0x82B2BB,  0x1453E7,  0x0F0418
.pword 0x140008,  0xB58EE8,  0x8CB7B7,  0xF89D84,  0x056870,  0x070606
.pword 0x191318,  0x340D04,  0x3D3331,  0x900530,  0xA4A5B6,  0x82B3B8
.pword 0x60F3E8,  0x0C1810,  0x1B0C0B,  0x8981DF,  0x89B7B7,  0xEA8582
.pword 0x0562CD,  0x0D0200,  0x051A06,  0x340D07,  0x323331,  0x901836
.pword 0xA5BBB7,  0x8DB0B9,  0x7FE796,  0x021C6B,  0x060F09,  0x839F61
.pword 0x8AB7B5,  0x9D8389,  0x0761E4,  0x0E0F02,  0x010603,  0x370900
.pword 0x333331,  0x9A6A35,  0xBBBBB0,  0x81B6BE,  0x65F997,  0x021F6D
.pword 0x000E0E,  0x86966D,  0x8AB48A,  0x9E8288,  0x0564E9,  0x0B0903
.pword 0x03020C,  0x370B02,  0x303331,  0x817E09,  0xBBBBB2,  0x86B7BF
.pword 0x70FF91,  0x021E67,  0x02080E,  0x86EF6A,  0xB4B4B5,  0x858DB5
.pword 0x056095,  0x0B0B03,  0x0C0E0E,  0x37350C,  0x363031,  0x8EF500
.pword 0xBBBBBF,  0x858ABC,  0x43C095,  0x011F78,  0x020B0E,  0x86E411
.pword 0xB7B7B5,  0x848EB4,  0x186695,  0x0B0803,  0x0E0808,  0x373408
.pword 0x373031,  0xB5EC05,  0xBAA5B9,  0x9A8BBD,  0x4252EF,  0x011C64
.pword 0x0F0A09,  0x86C01F,  0xB1B6B5,  0x878EB6,  0x1E62EE,  0x0B0903
.pword 0x0A3535,  0x363735,  0x0A3131,  0xB69013,  0xBAA5B8,  0x9888BD
.pword 0x7372FA,  0x071D6D,  0x0F0B0E,  0x874405,  0xB3B0B5,  0x8489B6
.pword 0x1A15FD,  0x080E02,  0x343535,  0x313636,  0x0D3731,  0xB08465
.pword 0xBAA5B8,  0x9988B2,  0x6165F1,  0x061F17,  0x0C080F,  0x865105
.pword 0xB2B3B5,  0x9888B1,  0x07105D,  0x090C0D,  0x363435,  0x303030
.pword 0x053531,  0xBD8FE5,  0xB8A5BB,  0x9E8EB3,  0x697BCB,  0x031A1D
.pword 0x02090E,  0x81FD18,  0xB2B2B4,  0x9289B1,  0x031964,  0x080F0C
.pword 0x31340A,  0x333333,  0x690E31,  0xB9B698,  0xBFA5BA,  0x9082B6
.pword 0x1572C0,  0x0C071F,  0x030908,  0x8D9417,  0xB3B2B6,  0xEE82B7
.pword 0x02056D,  0x0B0E0C,  0x303635,  0x333233,  0xCD0637,  0xB8B28D
.pword 0xBDBBA5,  0xEB86B5,  0x1678DE,  0x0E0019,  0x060E08,  0x889E79
.pword 0xB0B2B0,  0xDD85B5,  0x020110,  0x0B090C,  0x333134,  0x313232
.pword 0x9F1509,  0xBABEB7,  0xB1BEA5,  0xE7998E,  0x136D55,  0x090D05
.pword 0x1F0C08,  0xB486FE,  0xB7B3B0,  0x61EA82,  0x02031A,  0x0A090F
.pword 0x333037,  0x343032,  0x8FFA05,  0xBAB8B2,  0xB5B2B8,  0xF69781
.pword 0x1F1470,  0x080F01,  0x6D0008,  0xB68F97,  0x88B1B0,  0x10DE98
.pword 0x020007,  0x35090F,  0x303036,  0x0D3730,  0xB49C6C,  0xB8B9BD
.pword 0x8FB6BC,  0xD7E699,  0x1E1466,  0x0E0D01,  0x59190D,  0xB7899E
.pword 0x80B5B6,  0x1966EE,  0x020006,  0x35090C,  0x313637,  0x043536
.pword 0xB68156,  0xBFB9BC,  0x818AB3,  0xC5E491,  0x1E6879,  0x0C0D01
.pword 0xFF1100,  0xB48884,  0x9D8DB5,  0x051653,  0x000607,  0x0B0F02
.pword 0x373734,  0x110C34,  0xB68CED,  0xB3BCBD,  0x848FB7,  0xF6EF91
.pword 0x1E6974,  0x030306,  0xE96605,  0x8B8986,  0xE3848C,  0x191678
.pword 0x06041B,  0x090D03,  0x0A350A,  0x6E060E,  0xB581E2,  0xB1B0B1
.pword 0x848CB5,  0xF4EC90,  0x136D75,  0x04071A,  0xEC7F1D,  0x808198
.pword 0xF89384,  0x166E72,  0x04191D,  0x0D0200,  0x030D0D,  0x130703
.pword 0x83964B,  0xB7B78B,  0x848CB5,  0xFAED93,  0x6642C6,  0x181E16
.pword 0xCD6F12,  0x849897,  0xFE979B,  0x6A634D,  0x1F1217,  0x070705
.pword 0x010106,  0x180706,  0x91576A,  0x8B8F86,  0x818F8B,  0xE9969B
.pword 0xD9F8E2,  0x116872,  0x766E16,  0x91EAF9,  0xF0E991,  0x647F59
.pword 0x176861,  0x1F1C13,  0x191E1E,  0x181919,  0x79141F,  0x879CE5
.pword 0x818283,  0x949D85,  0xE2E8EB,  0x7F53F4,  0x616E6C,  0xE4C276
.pword 0xFFE6E6,  0x4C41D2,  0x78734F,  0x156F60,  0x151514,  0x6A6A6B
.pword 0x101117,  0xC27815,  0x859CEB,  0x9F8584,  0x979690,  0xEEEA94
.pword 0x42C0E5,  0x594A73,  0xC0C7D8,  0x5FDCCC,  0x494D43,  0x657971
.pword 0x6D6D66,  0x606D63,  0x6F6364,  0x6E686C,  0xC07360,  0x9097E2
.pword 0x979193,  0xEAEA95,  0xE0EEEB,  0x5EDCFC,  0x5C5F53,  0x595D57
.pword 0x754B4C,  0x70744E,  0x79657C,  0x657A7A,  0x646566,  0x647E78
.pword 0x6C6261,  0x417F60,  0xE2FBCD,  0xE9E8E9,  0xEDE2EC,  0xE7E3ED
.pword 0xC7F7FB,  0x5F5DD7,  0x475B59,  0x77754D,  0x744948,  0x707574
.pword 0x72727C,  0x747D79,  0x7D7E7F,  0x676579,  0x7F7B64,  0xC9D54D
.pword 0xE0E7FF,  0xE6E1E0,  0xE7E6E7,  0xF6FEFA,  0xD5DCC2,  0x405851
.pword 0x40584D,  0x4E4B42,  0x42754F,  0x7D7674,  0x747670,  0x4B7675
.pword 0x727576,  0x70747C,  0x757070,  0xCCDF5C,  0xFFFCF3,  0xF9FEF9
.pword 0xFFFEF9,  0xCAF4F0,  0xD0D8C2,  0x5F5656,  0x4C595B,  0x4A4343
.pword 0x4D4046,  0x754241,  0x43584C,  0x5B5946,  0x474E4F,  0x4D4B49
.pword 0x46754B,  0xC4D552,  0xF1F7C8,  0xFCFDF3,  0xFCF3FC,  0xCEF7FC
.pword 0xDCD8CF,  0x5C51DC,  0x475951,  0x4B4D5F,  0x5A4447,  0x5A4D4D
.pword 0x5E4245,  0x505B5F,  0x45415B,  0x444346,  0x59465B,  0xD0575D
.pword 0xC8CDC6,  0xF6F5F1,  0xF1F6F3,  0xF5F4F1,  0xC3C0CE,  0xD7D7DC
.pword 0x5C5C50,  0x404059,  0x44465B,  0x5A4259,  0x5F5B5E,  0x525259
.pword 0x52515C,  0x535F5C,  0x5F5F53,  0x50525C,  0xD35556,  0xC3C5DA
.pword 0xCFC3CF,  0xC2CCC9,  0xC6C7CD,  0xD0D1DA,  0x525354,  0x5B5A5E
.pword 0x454747,  0x474547,  0x594444,  0x505E5F,  0x5E5E50,  0x5C5F5D
.pword 0x56525F,  0xD5D557,  0xD2D3D4,  0xC3C7DB,  0xCACECF,  0xC9CBCA
.pword 0xC3CFCE,  0xDBC3C3,  0xD1DDDE,  0x535C54,  0x5B5959,  0x475845
.pword 0x5B585B,  0x5E5E5A,  0x51525E,  0x54D557,  0xD6D4D5,  0xD8D9DF
.pword 0xC3C6D9,  0xCFCCC3,  0xF5CECE,  0xC8F5F5,  0xCFCBCE,  0xC6C0C0
.pword 0xD8C4C4,  0x5DD0DC,  0x5FD7D1,  0x5C5E5C,  0x59475C,  0x565C53
.pword 0x54595F,  0x555754,  0xD1D655,  0xD0D1D1,  0xC5DED8,  0xDBD2DF
.pword 0xDDC5DB,  0xD9C4C7,  0xC4D9C6,  0xC6C7C6,  0xDCDEDD,  0xD7D0D1
.pword 0x535F51,  0x53455E,  0x5B425E,  0x5D4040,  0x585A5B,  0x52585B
.pword 0x535250,  0x545550,  0xDEDD56,  0xDEDDD2,  0xD9C6C7,  0xC7C3D8
.pword 0xC7C4C5,  0xCDC4DE,  0xDDD8DE,  0xD6D0D7,  0x5C5254,  0x525E59
.pword 0x59525E,  0x5C584D,  0x424659,  0x584746,  0x444646,  0x5FD756
.pword 0xD1D6D5,  0xC5C5DA,  0xCCC2DB,  0xCAC3DC,  0xCFC9C2,  0xCCC6DA
.pword 0xDFC5C4,  0x53DDDD,  0x53555D,  0x4B4B46,  0x4B4C41,  0x4F4E4B
.pword 0x737270,  0x4A444B,  0x4A7571,  0x575A74,  0xD5505F,  0xF7C1D3
.pword 0xE6E6F9,  0xFAE4E7,  0xFDFCF9,  0xC0F4F0,  0xD1D0DD,  0x5850D7
.pword 0x757441,  0x74744E,  0x787C71,  0x677A7B,  0x606667,  0x656663
.pword 0x797E7E,  0xE8F341,  0x969091,  0xEFE895,  0xF6E7E2,  0x7C7052
.pword 0x5C584A,  0x5F4459,  0xEAE4C5,  0x40FEEA,  0xDD5177,  0x616546
.pword 0x636360,  0x6F6060,  0x161715,  0x111111,  0xD06D17,  0x859995
.pword 0x9F9F98,  0xEF919C,  0x644DF7,  0x736561,  0x737276,  0xFECD44
.pword 0xFCFCFB,  0xC2F8E5,  0x4C4D5B,  0x747D76,  0x47D150,  0x6F6379
.pword 0x16156B,  0x041B1C,  0x1E1A05,  0x9FF46A,  0x848686,  0x858784
.pword 0x58E593,  0x626179,  0x786460,  0xC1497E,  0xE4E3E4,  0xECEDE4
.pword 0x7D47FF,  0x774E76,  0xF75671,  0x664FC8,  0x6B6D63,  0x1B1F10
.pword 0x070704,  0x611E04,  0x8287EE,  0x868780,  0x918781,  0x7A7CCF
.pword 0x60677B,  0x487961,  0xEDF9D3,  0xF6E5EC,  0xE9E8E5,  0x7B7DF7
.pword 0xCAC85B,  0xD0DDD9,  0x667C45,  0x12146C,  0x051B19,  0x070607
.pword 0x957B1F,  0x818387,  0x808187,  0xD29687,  0x4A7C7B,  0x6F627C
.pword 0xF45F65,  0xE4E7FB,  0xF3F6F9,  0xE5EEE3,  0x447A41,  0xD3FAFF
.pword 0xF64476,  0x66D1F9,  0x111614,  0x1E1311,  0x040705,  0x4E1719
.pword 0x8085EA,  0x848486,  0xE89B87,  0x747E52,  0x6F654E,  0xD9716D
.pword 0xF4CFC9,  0xF8E5FE,  0xF2F0F2,  0xD2C1F7,  0xD2DDD0,  0xCEDBD0
.pword 0x7A44C6,  0x6A6E62,  0x121316,  0x191C12,  0x111F18,  0x9BE065
.pword 0x998786,  0x858599,  0x675797,  0x4D5570,  0x786F60,  0xCFF6DC
.pword 0xFCF7C0,  0xDDC7F1,  0xE2E4CE,  0x59C4E4,  0xF5F6D3,  0x727944
.pword 0x65445B,  0x6E6A69,  0x16156E,  0x111716,  0x161313,  0x9FE67A
.pword 0x9D9885,  0x989A9F,  0x7B51EA,  0x42D148,  0x786E63,  0xDFCED3
.pword 0xFFCED6,  0xD9C8FC,  0xEDE6F5,  0x4B57F8,  0xDACB56,  0x467D4A
.pword 0x6C4BD1,  0x6F1514,  0x111769,  0x141517,  0x151616,  0x9FE276
.pword 0x969C9A,  0x9C9E90,  0x6474E3,  0x43C444,  0x726E62,  0xD1F4C3
.pword 0xFCDA59,  0x57C3FF,  0xF2D253,  0xC9E0E3,  0xC94F4A,  0x635EFD
.pword 0xDD4E62,  0x146B70,  0x617E63,  0x6C1415,  0x176F66,  0x496816
.pword 0x9C90E1,  0x919790,  0xE1929C,  0x5D7F4F,  0x634FC4,  0xCE756D
.pword 0x5C56C8,  0xFEFAC9,  0xD355C6,  0xE7E5F4,  0x4F5EF7,  0xDEF5D6
.pword 0x417976,  0x6344D8,  0x79626A,  0x156E65,  0x67656D,  0x6C6A69
.pword 0xFE4065,  0x909C97,  0x90EBE8,  0x4BE190,  0xF55078,  0x60665D
.pword 0xCBF442,  0xCC5850,  0xC4F2F9,  0xC8CDDF,  0xCFC7C0,  0x5CD2CF
.pword 0x57D653,  0x71734E,  0x7F744B,  0x787B7A,  0x666665,  0x616467
.pword 0x636D62,  0x566463,  0x9690ED,  0x97EDEE,  0xDFE990,  0xCC4672
.pword 0x6672DE,  0xF5DA70,  0xDD5EDD,  0xCFFDF1,  0xDFD5D6,  0xDDC5C6
.pword 0x545155,  0x5CD5D7,  0x575A40,  0x794B51,  0x7F7F7A,  0x666164
.pword 0x617A7B,  0x7B6162,  0xD97379,  0x9791EC,  0xEAE3ED,  0xD6E394
.pword 0xCE5074,  0x7F74DE,  0xC6C543,  0xD15B56,  0xDFCFCF,  0xDDD0D4
.pword 0x5653D4,  0x5254D4,  0x54515C,  0x4E435C,  0x4E434D,  0x717077
.pword 0x797C70,  0x787878,  0x65657A,  0x4D7278,  0xEAE3C9,  0xE0E0E9
.pword 0xE4E9EE,  0xD140D6,  0x75DFC9,  0xC35B73,  0x4451C0,  0xC6C354
.pword 0x5A4156,  0x5E5456,  0x575E44,  0x5155D7,  0x575651,  0x415E51
.pword 0x744A48,  0x7D7376,  0x7C7D7D,  0x727F7E,  0x504C74,  0xE9E3F6
.pword 0xE1E6EC,  0xFDE2ED,  0xC157D1,  0x42D0CB,  0xC5D44D,  0x4545D1
.pword 0xD4DED5,  0x5F415A,  0x475F51,  0xD45045,  0x575654,  0x51D5D5
.pword 0x455E5D,  0x754B4C,  0x747575,  0x747474,  0x474E75,  0xCED252
.pword 0xE1E6FE,  0xE4E5E7,  0xCCFCE5,  0xC7D8D9,  0x5956D9,  0xD5D552
.pword 0x45465F,  0x58505D,  0x584547,  0x404559,  0x575C44,  0x5C5055
.pword 0x415B58,  0x74744B,  0x717475,  0x437773,  0xF1D952,  0xE6E1E5
.pword 0xE4E4E4,  0xDAF4F8,  0xD8C5DE,  0x5C5FD5,  0x5C5555,  0x5D5B44
.pword 0x4D455D,  0x41404C,  0x404C4D,  0x5E5E5B,  0x56535C,  0x5D5356
.pword 0x475A5E,  0x4D4D43,  0x404043,  0x575E47,  0xCFDAD3,  0xFFFDF7
.pword 0xF0F3FD,  0xCDF5F1,  0xDEDEDA,  0x55D0DD,  0x535657,  0x5A5B5C
.pword 0x445B5B,  0x494C40,  0x767448,  0x767070,  0x717777,  0x777671
.pword 0x5A4875,  0xE7FCD8,  0xFBFAE7,  0xFCE4E4,  0xDFD0C3,  0x53DFC7
.pword 0xD35D45,  0x5F57DD,  0xD2D153,  0x5B5954,  0x53515D,  0x555C5F
.pword 0xD3DDD2,  0xD0D3D1,  0x5C56D7,  0x5A5859,  0x404046,  0x464741
.pword 0x5A4741,  0x5F5C5F,  0x51525C,  0x545156,  0xD6D7D4,  0xDCD1D6
.pword 0xD9D9DE,  0xC6C7DB,  0xC5DAC7,  0xC5C6C6,  0xD8D9DB,  0xD0D0DF
.pword 0x57D4D6,  0x535250,  0x445952,  0x404746,  0x4E4E4D,  0x424D4C
.pword 0x414043,  0x545E47,  0xC8C7DC,  0xFEFCF0,  0xF3F2FC,  0xC8F7F0
.pword 0xC0C1C3,  0xD0DFC7,  0xD5D7D7,  0x535157,  0x595D52,  0x464745
.pword 0x424141,  0x4E4F4D,  0x494949,  0x494948,  0x4D4E49,  0x575946
.pword 0xF6CDDC,  0xF3F2FD,  0xF3F2F0,  0xC6CDF4,  0xDBC1C1,  0xD1D6D0
.pword 0x53D5D3,  0x555652,  0x5B5850,  0x5F5D5E,  0x525958,  0x525156
.pword 0x50525D,  0x5B585C,  0x5B5959,  0x454744,  0x445859,  0x584740
.pword 0x5A5859,  0xD3545F,  0xDED2DD,  0xC1CDC6,  0xC4D8DB,  0xDEDBC4
.pword 0xDED9DF,  0xD0D3DD,  0xD4D6D0,  0x565454,  0x5F5D50,  0x5B595F
.pword 0x404645,  0x434340,  0x4C4C4D,  0x434342,  0x5A4640,  0x575D5E
.pword 0xDADED0,  0xCBCCC1,  0xCCC8F5,  0xCEC9CF,  0xC6C4C0,  0xDCC6C3
.pword 0xDCD0D6,  0x5254D3,  0x57D551,  0x5F585C,  0x455F52,  0x5B5A47
.pword 0x40405A,  0x414741,  0x444042,  0x455B5B,  0x55525B,  0xDFD3D6
.pword 0xC2C3C4,  0xCDC3C1,  0xC4C0CC,  0xC0C0C7,  0xD8D8C5,  0xD1DED8
.pword 0xD0D1D7,  0x5654D7,  0x505754,  0x525C5D,  0x5A595D,  0x454545
.pword 0x464046,  0x444447,  0x5E5B44,  0x50525D,  0xD1D754,  0xD9DCD3
.pword 0xC6C4C5,  0xC7C4C7,  0xDBC5C7,  0xDBDBD9,  0xDDDFD8,  0xD3DCDC
.pword 0xD1D7D6,  0x55D5D6,  0x565554,  0x525C52,  0x585F5D,  0x5A585B
.pword 0x444444,  0x5B5B5B,  0x5C5958,  0x515352,  0xD45557,  0xD2D3D6
.pword 0xDFDCDD,  0xD9DEDE,  0xDCDCDC,  0xD2D2DC,  0xD3DDD2,  0xD5D1D1
.pword 0x515652,  0x525D52,  0x585C50,  0x59595B,  0x47445B,  0x585945
.pword 0x474044,  0x585958,  0x545F5A,  0xD2DDD3,  0xCDC6DE,  0xD8DBC1
.pword 0xDBC4C4,  0xD9DFDE,  0xD3DDDE,  0xD6D0D0,  0x5454D4,  0x5D5056
.pword 0x595F5F,  0x46455B,  0x434040,  0x4C4D43,  0x43424C,  0x464043
.pword 0x005E5A        
