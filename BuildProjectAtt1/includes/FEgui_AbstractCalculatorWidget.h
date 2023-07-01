#ifndef FEGUI_ABSTRACTCALCULATORWIDGET_H
#define FEGUI_ABSTRACTCALCULATORWIDGET_H


#include<QtWidgets/QWidget>

class FEgui_AbstractCalculatorWidget : public QWidget
{
    Q_OBJECT
public:
    //! Constructor
    FEgui_AbstractCalculatorWidget() = default;

    virtual ~FEgui_AbstractCalculatorWidget() = default;
protected:
    double myFirstDigit;

    double mySecondDigit;
};

#endif // FEGUI_ABSTRACTCALCULATORWIDGET_H
