#ifndef DATASCREENVIEW_HPP
#define DATASCREENVIEW_HPP

#include <gui_generated/datascreen_screen/DataScreenViewBase.hpp>
#include <gui/datascreen_screen/DataScreenPresenter.hpp>
#include <math.h>

class DataScreenView : public DataScreenViewBase
{
public:
    DataScreenView();
    virtual ~DataScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void Update_HR(int32_t hr);
    virtual void Update_SpO2(uint8_t sp02);
    virtual int Calc_Ticks(int32_t hr);

protected:
    int ticks = 0;
    int minHR = 30;
	int maxHR = 180;
	int minTicks = 30;
	int maxTicks = 4;
};

#endif // DATASCREENVIEW_HPP
