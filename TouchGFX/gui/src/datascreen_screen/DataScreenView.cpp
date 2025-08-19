#include <gui/datascreen_screen/DataScreenView.hpp>
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
	Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", hr);
	textArea4.invalidate();

	ticks = Calc_Ticks(hr);
	animatedImage1.startAnimation(0, 0, 1);
	animatedImage1.setUpdateTicksInterval(ticks);
}

void DataScreenView::Update_SpO2(uint8_t sp02)
{
	Unicode::snprintf(textArea5Buffer, TEXTAREA4_SIZE, "%u", sp02);
	textArea5.invalidate();
}

int DataScreenView::Calc_Ticks(int32_t hr)
{
	//Linear interpolation to calculate heart rate's animation speed
	if (hr < minHR) hr = minHR;
	else if (hr > maxHR) hr = maxHR;
	float scale = float(maxTicks - minTicks) / float(maxHR - minHR);
	float ticks = minTicks + (hr - minHR) * scale;
	return int(roundf(ticks));
}
