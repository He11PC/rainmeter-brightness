[bg100]
Meter=Shape
Group=Percent
Hidden=1
Padding=5,5,5,0
Shape=Rectangle 0,0,50,31 | Fill Color 0,0,0,#BgAlpha# | StrokeWidth 0
LeftMouseUpAction=[!SetVariable "CurrentBrightness" 100] [!WriteKeyValue "Variables" "SavedBrightness" 100] [!UpdateMeter MeterCtrlText] [!Redraw] [!UpdateMeasure "SetBrightness"]
UpdateDivider=-1

[bg75]
Meter=Shape
Group=Percent
Hidden=1
Padding=5,0,5,0
Shape=Rectangle 0,36,50,31 | Fill Color 0,0,0,#BgAlpha# | StrokeWidth 0
LeftMouseUpAction=[!SetVariable "CurrentBrightness" 75] [!WriteKeyValue "Variables" "SavedBrightness" 75] [!UpdateMeter MeterCtrlText] [!Redraw] [!UpdateMeasure "SetBrightness"]
UpdateDivider=-1

[bg50]
Meter=Shape
Group=Percent
Hidden=1
Padding=5,0,5,0
Shape=Rectangle 0,67,50,31 | Fill Color 0,0,0,#BgAlpha# | StrokeWidth 0
LeftMouseUpAction=[!SetVariable "CurrentBrightness" 50] [!WriteKeyValue "Variables" "SavedBrightness" 50] [!UpdateMeter MeterCtrlText] [!Redraw] [!UpdateMeasure "SetBrightness"]
UpdateDivider=-1

[bg25]
Meter=Shape
Group=Percent
Hidden=1
Padding=5,0,5,0
Shape=Rectangle 0,98,50,31 | Fill Color 0,0,0,#BgAlpha# | StrokeWidth 0
LeftMouseUpAction=[!SetVariable "CurrentBrightness" 25] [!WriteKeyValue "Variables" "SavedBrightness" 25] [!UpdateMeter MeterCtrlText] [!Redraw] [!UpdateMeasure "SetBrightness"]
UpdateDivider=-1

[bg0]
Meter=Shape
Group=Percent
Hidden=1
Padding=5,0,5,0
Shape=Rectangle 0,129,50,31 | Fill Color 0,0,0,#BgAlpha# | StrokeWidth 0
LeftMouseUpAction=[!SetVariable "CurrentBrightness" 0] [!WriteKeyValue "Variables" "SavedBrightness" 0] [!UpdateMeter MeterCtrlText] [!Redraw] [!UpdateMeasure "SetBrightness"]
UpdateDivider=-1

[bgCtrl]
Meter=Shape
Padding=5,0,5,5
Shape=Rectangle 0,160,50,50 | Fill Color 0,0,0,#BgAlpha# | StrokeWidth 0
LeftMouseUpAction=[!EnableMeasure "ToggleMovieMode"] [!UpdateMeasure "ToggleMovieMode"]
UpdateDivider=-1

[bgDesign1]
Meter=Shape
Group=Percent | Colored
Hidden=1
Shape=Rectangle 5,35,50,1 | Fill RadialGradient LineGradient | StrokeWidth 0
Shape2=Rectangle 5,66,50,1 | Fill RadialGradient LineGradient | StrokeWidth 0
Shape3=Rectangle 5,97,50,1 | Fill RadialGradient LineGradient | StrokeWidth 0
Shape4=Rectangle 5,128,50,1 | Fill RadialGradient LineGradient | StrokeWidth 0
Shape5=Rectangle 5,159,50,1 | Fill RadialGradient LineGradient | StrokeWidth 0
LineGradient=0,0 | [MeasureWindowsColor] ; 0.0 | [MeasureWindowsColor],25 ; 1.0
DynamicVariables=1
UpdateDivider=-1

[bdDesing2]
Meter=Shape
Padding=5,0,5,5
Group=Colored
Shape=Ellipse 25,185,15 | Fill Color 0,0,0,0 | StrokeWidth 2 | Stroke Color [MeasureWindowsColor]
DynamicVariables=1
UpdateDivider=-1

[bgDesign3]
Meter=Shape
Group=Colored
Padding=5,0,5,5
Shape=Rectangle 4,184,4,2 | Fill Color [MeasureWindowsColor] | StrokeWidth 0
Shape2=Rectangle 24,164,2,4 | Fill Color [MeasureWindowsColor] | StrokeWidth 0
Shape3=Rectangle 42,184,4,2 | Fill Color [MeasureWindowsColor] | StrokeWidth 0
Shape4=Rectangle 24,202,2,4 | Fill Color [MeasureWindowsColor] | StrokeWidth 0
Shape5=Ellipse 11,171,2 | Fill Color [MeasureWindowsColor] | StrokeWidth 0
Shape6=Ellipse 39,171,2 | Fill Color [MeasureWindowsColor] | StrokeWidth 0
Shape7=Ellipse 11,199,2 | Fill Color [MeasureWindowsColor] | StrokeWidth 0
Shape8=Ellipse 39,199,2 | Fill Color [MeasureWindowsColor] | StrokeWidth 0
Hidden=#Movie_Mode#
DynamicVariables=1
UpdateDivider=-1

;================================================================

[Meter100Text]
Meter=String
Group=Percent
Hidden=1
FontFace=Calibri
FontSize=10
FontColor=CCCCCC
StringAlign=Center
X=30
Y=11
Text=100%
AntiAlias=1
UpdateDivider=-1

[Meter75Text]
Meter=String
Group=Percent
Hidden=1
FontFace=Calibri
FontSize=10
FontColor=CCCCCC
StringAlign=Center
X=30
Y=42
Text=75%
AntiAlias=1
UpdateDivider=-1

[Meter50Text]
Meter=String
Group=Percent
Hidden=1
FontFace=Calibri
FontSize=10
FontColor=CCCCCC
StringAlign=Center
X=30
Y=73
Text=50%
AntiAlias=1
UpdateDivider=-1

[Meter25Text]
Meter=String
Group=Percent
Hidden=1
FontFace=Calibri
FontSize=10
FontColor=CCCCCC
StringAlign=Center
X=30
Y=104
Text=25%
AntiAlias=1
UpdateDivider=-1

[Meter0Text]
Meter=String
Group=Percent
Hidden=1
FontFace=Calibri
FontSize=10
FontColor=CCCCCC
StringAlign=Center
X=30
Y=135
Text=0%
AntiAlias=1
UpdateDivider=-1

[MeterCtrlText]
Meter=String
Text=#CurrentBrightness#
FontFace=Calibri
FontSize=10
FontColor=CCCCCC
StringStyle=Bold
StringAlign=Center
X=30
Y=176
Text=100
AntiAlias=1
DynamicVariables=1
UpdateDivider=-1