/**
 *
 * @class FEgui_AbstractCalculatorWidget
 * @file FEgui_AbstactCalculatorWidget.h
 * @author Jim McGuire
 *
 * <pre>
 * Rev History
 * Issue            Date            Author          Description
 * Initial          07-01-2023      J. McGuire      Initial creation
 * </pre>
 */
#ifndef FEGUI_ABSTRACTCALCULATORWIDGET_H
#define FEGUI_ABSTRACTCALCULATORWIDGET_H


#include<QtWidgets/QWidget>

class FEgui_AbstractCalculatorWidget : public QWidget
{
    Q_OBJECT
public:
    //! Constructor
    FEgui_AbstractCalculatorWidget() = default;

    //! Destrcutor
    virtual ~FEgui_AbstractCalculatorWidget() = default;


protected:
    double myFirstDigit;

    double mySecondDigit;

    double mySolutionDigit;
};

#endif // FEGUI_ABSTRACTCALCULATORWIDGET_H
