#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "cmsis_os.h"

extern "C"
{
	extern osMessageQueueId_t dataQueueHandle;
	struct HealthData{
		int32_t hr;
		uint8_t sp02;
	};
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	HealthData healthData = {0};
	osStatus status = osMessageQueueGet(dataQueueHandle, &healthData, 0, 0);
	if (status == osOK){
		hr = healthData.hr;
		sp02 = healthData.sp02;
		modelListener->Update_HR(hr);
		modelListener->Update_SpO2(sp02);
	}
}
