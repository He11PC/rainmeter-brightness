[BrightnessUp]
Measure=Calc
Formula=Clamp((#CurrentBrightness# + 5), 0, 100)
OnUpdateAction=[!SetVariable "CurrentBrightness" [BrightnessUp]] [!WriteKeyValue "Variables" "SavedBrightness" [BrightnessUp]] [!UpdateMeter MeterCtrlText] [!Redraw] [!EnableMeasure "DelayBrightness"]
DynamicVariables=1
UpdateDivider=-1
Disabled=1

[BrightnessDown]
Measure=Calc
Formula=Clamp((#CurrentBrightness# - 5), 0, 100)
OnUpdateAction=[!SetVariable "CurrentBrightness" [BrightnessDown]] [!WriteKeyValue "Variables" "SavedBrightness" [BrightnessDown]] [!UpdateMeter MeterCtrlText] [!Redraw] [!EnableMeasure "DelayBrightness"]
DynamicVariables=1
UpdateDivider=-1
Disabled=1

[DelayBrightness]
Measure=Calc
OnUpdateAction=[!UpdateMeasure "SetBrightness"] [!DisableMeasure "DelayBrightness"]
Disabled=1