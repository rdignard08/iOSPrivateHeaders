
@protocol UIPickerViewScrollTesting, NSCoding;
@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding> {

    @"_UIDatePickerView" _pickerView;
    BOOL _useCurrentDateDuringDecoding;
}
 + (Class) _pickerViewClass;

 - (d) timeInterval;
 - (void) setDelegate:(id)a;
 - (void) setTimeZone:(id)a;
 - (id) date;
 - (void) setLocale:(id)a;
 - (id) locale;
 - (id) timeZone;
 - (i) hour;
 - (i) minute;
 - (i) second;
 - (id) calendar;
 - (void) setCalendar:(id)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (void) _setTextColor:(id)a;
 - (BOOL) _drawsBackground;
 - (BOOL) _usesModernStyle;
 - (id) _textColor;
 - (void) _performScrollTest:(id)awithIterations:(q)browsToScroll:(q)cinComponent:(q)d;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedWidth;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) _setDrawsBackground:(BOOL)a;
 - (void) _setUsesModernStyle:(BOOL)a;
 - (id) _highlightColor;
 - (void) _setHighlightColor:(id)a;
 - (id) _textShadowColor;
 - (void) _setTextShadowColor:(id)a;
 - (void) awakeFromNib;
 - (void) invalidateIntrinsicContentSize;
 - (d) _contentWidth;
 - (void) setDate:(id)a;
 - (void) setTimeInterval:(d)a;
 - (void) _insertPickerView;
 - (void) setDatePickerMode:(q)a;
 - (void) _setLocale:(id)a;
 - (void) setMinuteInterval:(q)a;
 - (BOOL) _isTimeIntervalMode;
 - (void) setMinimumDate:(id)a;
 - (void) setMaximumDate:(id)a;
 - (void) _setUseCurrentDateDuringDecoding:(BOOL)a;
 - (BOOL) _useCurrentDateDuringDecoding;
 - (q) datePickerMode;
 - (id) _locale;
 - (id) minimumDate;
 - (id) maximumDate;
 - (q) minuteInterval;
 - (void) setDate:(id)aanimated:(BOOL)b;
 - (d) countDownDuration;
 - (void) setCountDownDuration:(d)a;
 - (id) dateComponents;
 - (void) setDateComponents:(id)a;
 - (void) setStaggerTimeIntervals:(BOOL)a;
 - (void) setHighlightsToday:(BOOL)a;
 - (void) setDate:(id)aanimate:(BOOL)b;
 - (void) _setHidesLabels:(BOOL)a;
 - (void) _setUsesBlackChrome:(BOOL)a;
 - (BOOL) _usesBlackChrome;
 - (BOOL) _allowsZeroCountDownDuration;
 - (void) _setAllowsZeroCountDownDuration:(BOOL)a;
 - (BOOL) _allowsZeroTimeInterval;
 - (void) _setAllowsZeroTimeInterval:(BOOL)a;
 - (void) _setHighlightsToday:(BOOL)a;
 - (id) _dateUnderSelectionBar;
 - (id) _selectedTextForCalendarUnit:(Q)a;
 - (id) _labelTextForCalendarUnit:(Q)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setBackgroundColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
