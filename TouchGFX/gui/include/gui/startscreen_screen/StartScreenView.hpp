#ifndef STARTSCREENVIEW_HPP
#define STARTSCREENVIEW_HPP

#include <gui_generated/startscreen_screen/StartScreenViewBase.hpp>
#include <gui/startscreen_screen/StartScreenPresenter.hpp>

class StartScreenView : public StartScreenViewBase
{
public:
    StartScreenView();
    virtual ~StartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void Update_HR(int32_t hr);
    virtual void Update_SpO2(uint8_t sp02);
protected:
};

#endif // STARTSCREENVIEW_HPP
