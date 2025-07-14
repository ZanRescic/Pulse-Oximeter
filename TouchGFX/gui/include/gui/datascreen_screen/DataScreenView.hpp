#ifndef DATASCREENVIEW_HPP
#define DATASCREENVIEW_HPP

#include <gui_generated/datascreen_screen/DataScreenViewBase.hpp>
#include <gui/datascreen_screen/DataScreenPresenter.hpp>

class DataScreenView : public DataScreenViewBase
{
public:
    DataScreenView();
    virtual ~DataScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void Update_HR(int32_t hr);
    virtual void Update_SpO2(uint8_t sp02);
protected:
};

#endif // DATASCREENVIEW_HPP
