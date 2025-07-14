#include <gui/datascreen_screen/DataScreenView.hpp>
static float smoothedInterval = 0;
DataScreenView::DataScreenView()
{

}

void DataScreenView::setupScreen()
{
    DataScreenViewBase::setupScreen();
}

void DataScreenView::tearDownScreen()
{
    DataScreenViewBase::tearDownScreen();
}

void DataScreenView::Update_HR(int32_t hr)
{
	Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%ld", hr);
	int32_t framesPerBeat = 30;
	uint32_t tickInterval = 60000u / ((hr > 0 ? hr : 1) * framesPerBeat);
	smoothedInterval = smoothedInterval*0.9f + tickInterval*0.1f;
	animatedImage1.setUpdateTicksInterval(smoothedInterval);
	textArea4.invalidate();
}

void DataScreenView::Update_SpO2(uint8_t sp02)
{

	Unicode::snprintf(textArea5Buffer, TEXTAREA4_SIZE, "%u", sp02);
	textArea5.setWildcard(textArea5Buffer);
	textArea5.invalidate();
}
