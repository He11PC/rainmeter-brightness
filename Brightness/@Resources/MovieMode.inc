[ToggleMovieMode]
Measure=Calc
IfCondition=#Movie_Mode#=1
IfTrueAction=[!SetVariable "Movie_Mode" 0] [!UpdateMeter bgDesign3] [!Log "Movie Mode deactivated" Notice] [!UpdateMeasure "SetBrightness"]
IfFalseAction=[!SetVariable "Movie_Mode" 1] [!UpdateMeter bgDesign3] [!Log "Movie Mode activated" Notice] [!UpdateMeasure "SetBrightness"]
DynamicVariables=1
UpdateDivider=-1
Disabled=1