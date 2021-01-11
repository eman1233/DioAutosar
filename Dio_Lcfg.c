/*********************************************************

     * Name              : Eman Megahed
	 * Data              : 6/1/2021
	 * Version           : 1.0
	 * SWC               : DIO

**********************************************************/

#include "Dio.h"
#include "Dio_MemMap.h"

 const Dio_ChannelStatus  ChannelStatus [TOTAL_PINS]=
{
	OUTPUT  , OUTPUT  , OUTPUT  , OUTPUT , OUTPUT  , OUTPUT  , OUTPUT  , OUTPUT  ,
	OUTPUT  , INPUT  , OUTPUT  , OUTPUT , OUTPUT  , OUTPUT  , OUTPUT  , OUTPUT  ,
	OUTPUT  , OUTPUT  , OUTPUT  , OUTPUT , OUTPUT  , OUTPUT  , OUTPUT  , OUTPUT  ,
	OUTPUT  , OUTPUT  , OUTPUT  , OUTPUT , OUTPUT  , OUTPUT  , OUTPUT  , OUTPUT  ,
};

 const Dio_LevelType  ChannelLevel [TOTAL_PINS]=
{
	STD_LOW  , STD_LOW , STD_LOW , STD_LOW, STD_LOW  , STD_LOW  , STD_LOW  , STD_LOW  ,
	STD_LOW  , STD_LOW  , STD_LOW  , STD_LOW , STD_LOW  , STD_LOW  , STD_LOW  , STD_LOW  ,
	STD_LOW  , STD_LOW  , STD_LOW  , STD_LOW , STD_LOW  , STD_LOW  , STD_LOW  , STD_LOW  ,
	STD_LOW  , STD_LOW  , STD_LOW  , STD_LOW , STD_LOW  , STD_LOW  , STD_LOW  , STD_LOW  ,
};
