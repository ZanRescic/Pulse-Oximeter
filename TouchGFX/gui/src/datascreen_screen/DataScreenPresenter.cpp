#include <gui/datascreen_screen/DataScreenView.hpp>
#include <gui/datascreen_screen/DataScreenPresenter.hpp>

DataScreenPresenter::DataScreenPresenter(DataScreenView& v)
    : view(v)
{

}

void DataScreenPresenter::activate()
{

}

void DataScreenPresenter::deactivate()
{

}

void DataScreenPresenter::Update_HR(int32_t hr)
{
	view.Update_HR(hr);
}

void DataScreenPresenter::Update_SpO2(uint8_t sp02)
{
	view.Update_SpO2(sp02);
}
