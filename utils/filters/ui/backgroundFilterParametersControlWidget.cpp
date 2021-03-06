/**
 * \file backgroundFilterParametersControlWidget.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "backgroundFilterParametersControlWidget.h"
#include "ui_backgroundFilterParametersControlWidget.h"
#include "qSettingsGetter.h"
#include "qSettingsSetter.h"


BackgroundFilterParametersControlWidget::BackgroundFilterParametersControlWidget(QWidget *parent, bool _autoInit, QString _rootPath)
    : FilterParametersControlWidgetBase(parent)
    , mUi(new Ui::BackgroundFilterParametersControlWidget)
    , autoInit(_autoInit)
    , rootPath(_rootPath)
{
    mUi->setupUi(this);

    QObject::connect(mUi->thresholdSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
}

BackgroundFilterParametersControlWidget::~BackgroundFilterParametersControlWidget()
{

    delete mUi;
}

void BackgroundFilterParametersControlWidget::loadParamWidget(WidgetLoader &loader)
{
    BackgroundFilterParameters *params = createParameters();
    loader.loadParameters(*params, rootPath);
    setParameters(*params);
    delete params;
}

void BackgroundFilterParametersControlWidget::saveParamWidget(WidgetSaver  &saver)
{
    BackgroundFilterParameters *params = createParameters();
    saver.saveParameters(*params, rootPath);
    delete params;
}

 /* Composite fields are NOT supported so far */
void BackgroundFilterParametersControlWidget::getParameters(BackgroundFilterParameters& params) const
{

    params.setThreshold        (mUi->thresholdSpinBox->value());

}

BackgroundFilterParameters *BackgroundFilterParametersControlWidget::createParameters() const
{

    /**
     * We should think of returning parameters by value or saving them in a preallocated place
     **/


    BackgroundFilterParameters *result = new BackgroundFilterParameters(
          mUi->thresholdSpinBox->value()
    );
    return result;
}

void BackgroundFilterParametersControlWidget::setParameters(const BackgroundFilterParameters &input)
{
    // Block signals to send them all at once
    bool wasBlocked = blockSignals(true);
    mUi->thresholdSpinBox->setValue(input.threshold());
    blockSignals(wasBlocked);
    emit paramsChanged();
}

void BackgroundFilterParametersControlWidget::setParametersVirtual(void *input)
{
    // Modify widget parameters from outside
    BackgroundFilterParameters *inputCasted = static_cast<BackgroundFilterParameters *>(input);
    setParameters(*inputCasted);
}
