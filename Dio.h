/*********************************************************

     * Name              : Eman Megahed
	 * Data              : 6/1/2021
	 * Version           : 1.0
	 * SWC               : DIO

**********************************************************/

#ifndef DIO_H_
#define DIO_H_

#include "Std_Types.h"
#include "Dio_Cfg.h"
#include "Dio_MemMap.h"



typedef enum
{
	STD_LOW = 0,
	STD_HIGH

}Dio_LevelType;

typedef enum
{
	INPUT = 0,
	OUTPUT
}Dio_ChannelStatus;

typedef enum
{
	PINA0=0 , PINA1  , PINA2  , PINA3  , PINA4  , PINA5  , PINA6  , PINA7  ,
	PINB0   , PINB1  , PINB2  , PINB3  , PINB4  , PINB5  , PINB6  , PINB7  ,
	PINC0   , PINC1  , PINC2  , PINC3  , PINC4  , PINC5  , PINC6  , PINC7  ,
	PIND0   , PIND1  , PIND2  , PIND3  , PIND4  , PIND5  , PIND6  , PIND7  ,
	TOTAL_PINS = 32

}Dio_ChannelType;

typedef enum
{
	PA  =  0 ,
	PB       ,
	PC       ,
	PD

}Dio_PortType;


typedef u8 Dio_PortLevelType;

typedef struct
{
	u32 mask;
	u8 offset;
	Dio_PortType port;

}Dio_ChannelGroupType;

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level);

void Dio_WriteDirectionChannel(Dio_ChannelType ChannelId,Dio_ChannelStatus Status);

Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);

void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level);

void Dio_WriteDirectionPort(Dio_PortType PortId,Dio_PortLevelType Level);

Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr);

void Dio_WriteChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level);;

void Dio_Init(void);

#define DIO_E_PARAM_INVALID_CHANNEL_ID    0x0A

#define DIO_E_PARAM_INVALID_PORT_ID       0x14

#define DIO_E_PARAM_INVALID_GROUP         0x1F

#define DIO_E_PARAM_POINTER               0x20

#define Dio_ReadChannel_API               0x00

#define Dio_WriteChannel_API              0x01

#define Dio_ReadPort_API                  0x02

#define Dio_WritePort_API                 0x03

#define Dio_ReadChannelGroup_API          0x04

#define Dio_WriteChannelGroup_API         0x05

#define Dio_WriteDirctionChannel_API      0x06

#define Dio_WriteDirectionPort_API        0x07

#define Dio_FlipChannel_API               0x11

#define DIO_Driver                        120

#define Instance                          0


#endif /* DIO_H_ */
