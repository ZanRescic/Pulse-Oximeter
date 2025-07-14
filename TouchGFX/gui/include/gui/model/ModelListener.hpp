#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
    virtual void Update_HR(int32_t hr);

	virtual void Update_SpO2(uint8_t sp02);
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
