#ifndef STARTSCREENPRESENTER_HPP
#define STARTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class StartScreenView;

class StartScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    StartScreenPresenter(StartScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~StartScreenPresenter() {}

    virtual void Update_HR(int32_t hr);
	virtual void Update_SpO2(uint8_t sp02);

private:
    StartScreenPresenter();

    StartScreenView& view;
};

#endif // STARTSCREENPRESENTER_HPP
