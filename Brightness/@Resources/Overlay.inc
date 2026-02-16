[Overlay_Alpha]
Measure=Calc
Formula=#Overlay_LinearAlpha#=1 ? Round(#Overlay_MaxAlpha#-#Overlay_MaxAlpha#*#CurrentBrightness#*(1-#Movie_Mode#)/100) : Round(#Overlay_MaxAlpha#-#Overlay_MaxAlpha#*sqrt(#CurrentBrightness#*(1-#Movie_Mode#))/10)
OnChangeAction=[!UpdateMeasure "Overlay_Toggle"] [!UpdateMeasure "Overlay_SetAlpha"]
DynamicVariables=1
UpdateDivider=-1

[Overlay_Toggle]
Measure=Calc
IfCondition=(#Overlay_Enabled#=0) || (#CurrentBrightness#>=#Overlay_Threshold#) || ([Overlay_Alpha]=0)
IfTrueAction=[!DeactivateConfig "MonitorOverlay"] [!PauseMeasure "Overlay_SetAlpha"] [!Log "Overlay disactivated" Notice]
IfFalseAction=[!ActivateConfig "MonitorOverlay"]  [!UnpauseMeasure "Overlay_SetAlpha"] [!Log "Overlay activated" Notice]
DynamicVariables=1
UpdateDivider=-1

[Overlay_SetAlpha]
Measure=Calc
OnUpdateAction=[!WriteKeyValue MonitorOverlay AlphaValue [Overlay_Alpha] "#SETTINGSPATH#Rainmeter.ini"] [!Refresh MonitorOverlay] [!Log "Overlay alpha set to [Overlay_Alpha]" Notice]
DynamicVariables=1
UpdateDivider=-1
Paused=1