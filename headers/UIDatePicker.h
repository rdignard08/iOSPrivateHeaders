
@protocol UIPickerViewScrollTesting, NSCoding;
@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding> {

    @"_UIDatePickerView" _pickerView;
    BOOL _useCurrentDateDuringDecoding;
}
 + (Class) _pickerViewClass;

 - (double) timeInterval;
 - (void) setDelegate:(id)a;
 - (void) setTimeZone:(id)a;
 - (id) date;
 - (void) setLocale:(id)a;
 - (id) locale;
 - (id) timeZone;
 - (int) hour;
 - (int) minute;
 - (int) second;
 - (id) calendar;
 - (void) setCalendar:(id)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (void) _setTextColor:(id)a;
 - (BOOL) _drawsBackground;
 - (BOOL) _usesModernStyle;
 - (id) _textColor;
 - (void) _performScrollTest:(id)awithIterations:(long long)browsToScroll:(long long)cinComponent:(long long)d;
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
 - (double) _contentWidth;
 - (void) setDate:(id)a;
 - (void) setTimeInterval:(double)a;
 - (void) _insertPickerView;
 - (void) setDatePickerMode:(long long)a;
 - (void) _setLocale:(id)a;
 - (void) setMinuteInterval:(long long)a;
 - (BOOL) _isTimeIntervalMode;
 - (void) setMinimumDate:(id)a;
 - (void) setMaximumDate:(id)a;
 - (void) _setUseCurrentDateDuringDecoding:(BOOL)a;
 - (BOOL) _useCurrentDateDuringDecoding;
 - (long long) datePickerMode;
 - (id) _locale;
 - (id) minimumDate;
 - (id) maximumDate;
 - (long long) minuteInterval;
 - (void) setDate:(id)aanimated:(BOOL)b;
 - (double) countDownDuration;
 - (void) setCountDownDuration:(double)a;
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
 - (id) _selectedTextForCalendarUnit:(unsigned long long)a;
 - (id) _labelTextForCalendarUnit:(unsigned long long)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setBackgroundColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
