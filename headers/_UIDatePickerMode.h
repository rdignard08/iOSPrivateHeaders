
@interface _UIDatePickerMode : NSObject {

    NSDateComponents* _selectedDateComponents;
    NSDateComponents* _baseDateComponents;
    ^Q _elements;
    long long _yearsSinceBaseDate;
    {_NSRange="location"Q"length"Q} _maxDayRange;
    {_NSRange="location"Q"length"Q} _maxMonthRange;
    NSString* _localizedFormatString;
    NSArray* _dateFormatters;
    UIColor* _todayTextColor;
    UIFont* _amPmFont;
    UIFont* _font;
    UIFont* _defaultTimeFont;
    NSString* _amString;
    NSString* _pmString;
    NSDateComponents* _todayDateComponents;
    NSNumberFormatter* _formatter;
    _UIDatePickerView* _datePickerView;
    BOOL _isUsingJapaneseCalendar;
    unsigned long long _numberOfComponents;
    long long _minuteInterval;
    double _todaySinceReferenceDate;
    NSDate* _minimumDate;
    NSDateComponents* _minimumDateComponents;
    NSDate* _maximumDate;
    NSDateComponents* _maximumDateComponents;
    NSDate* _baseDate;
    NSDate* _originatingDate;
}
@property (nonatomic, assign, readonly) NSNumber* datePickerMode;
@property (nonatomic, assign, readonly) NSNumber* rowHeight;
@property (nonatomic, assign, readwrite) NSNumber* numberOfComponents;
@property (nonatomic, assign, readonly) NSNumber* displayedCalendarUnits;
@property (nonatomic, assign, readonly) UIColor* todayTextColor;
@property (nonatomic, assign, readwrite) NSNumber* minuteInterval;
@property (nonatomic, retain, readwrite) NSDateComponents* todayDateComponents;
@property (nonatomic, assign, readwrite) NSNumber* todaySinceReferenceDate;
@property (nonatomic, assign, readonly) NSDate* minimumDate;
@property (nonatomic, assign, readonly) NSDateComponents* minimumDateComponents;
@property (nonatomic, assign, readonly) NSDate* maximumDate;
@property (nonatomic, assign, readonly) NSDateComponents* maximumDateComponents;
@property (nonatomic, retain, readwrite) NSDateComponents* selectedDateComponents;
@property (nonatomic, assign, readonly) NSNumber* totalComponentWidth;
@property (nonatomic, assign, readonly, getter=is24Hour) NSNumber* is24Hour;
@property (nonatomic, assign, readonly, getter=isTimeIntervalMode) NSNumber* isTimeIntervalMode;
@property (nonatomic, assign, readwrite) _UIDatePickerView* datePickerView;
@property (nonatomic, assign, readonly) UIFont* amPmFont;
@property (nonatomic, assign, readonly) UIFont* font;
@property (nonatomic, assign, readonly) UIFont* defaultTimeFont;
@property (nonatomic, assign, readonly) UIFont* sizedFont;
@property (nonatomic, assign, readonly) NSString* amString;
@property (nonatomic, assign, readonly) NSString* pmString;
@property (nonatomic, assign, readwrite) NSNumber* elements;
@property (nonatomic, retain, readwrite) NSString* localizedFormatString;
@property (nonatomic, retain, readwrite) NSDate* baseDate;
@property (nonatomic, retain, readwrite) NSDateComponents* baseDateComponents;
@property (nonatomic, assign, readwrite) NSNumber* yearsSinceBaseDate;
@property (nonatomic, retain, readwrite) NSDate* originatingDate;
 + (void) initialize;
 + (long long) datePickerMode;
 + (id) _datePickerModeWithMode:(long long)adatePickerView:(id)b;
 + (unsigned long long) extractableCalendarUnits;
 + (id) newDateFromGregorianYear:(long long)amonth:(long long)bday:(long long)ctimeZone:(id)d;
 + (id) _datePickerModeWithFormatString:(id)adatePickerView:(id)b;

 - (void) dealloc;
 - (id) locale;
 - (id) timeZone;
 - (id) calendar;
 - (unsigned long long) numberOfComponents;
 - (long long) numberOfRowsInComponent:(long long)a;
 - (double) rowHeight;
 - (id) amString;
 - (id) pmString;
 - (void) setMinuteInterval:(long long)a;
 - (long long) datePickerMode;
 - (id) minimumDate;
 - (id) maximumDate;
 - (long long) minuteInterval;
 - (void) setTodayDateComponents:(id)a;
 - (BOOL) isTimeIntervalMode;
 - (void) noteCalendarChanged;
 - (void) takeExtremesFromMinimumDate:(id)amaximumDate:(id)b;
 - (long long) displayedCalendarUnits;
 - (long long) componentForCalendarUnit:(unsigned long long)a;
 - (BOOL) is24Hour;
 - (long long) hourForRow:(long long)a;
 - (void) updateSelectedDateComponentsWithNewValueInComponent:(long long)a;
 - (void) loadDate:(id)aanimated:(BOOL)b;
 - (long long) minuteForRow:(long long)a;
 - (BOOL) areValidDateComponents:(id)acomparingUnits:(long long)b;
 - (id) dateComponentsByRestrictingSelectedComponents:(id)awithLastManipulatedColumn:(long long)b;
 - (id) selectedDateComponents;
 - (id) fontForCalendarUnit:(unsigned long long)a;
 - (id) viewForRow:(long long)ainComponent:(long long)breusingView:(id)c;
 - (unsigned long long) calendarUnitForComponent:(long long)a;
 - (void) updateEnabledStateOfViewForRow:(long long)ainComponent:(long long)b;
 - (double) totalComponentWidth;
 - (double) widthForComponent:(long long)amaxWidth:(double)b;
 - (void) resetComponentWidths;
 - (void) resetSelectedDateComponentsWithValuesUnderSelectionBars;
 - (void) setDatePickerView:(id)a;
 - (void) _shouldReset:(id)a;
 - (id) datePickerView;
 - (id) dateFormatterForCalendarUnit:(unsigned long long)a;
 - (id) calendarForFormatters;
 - (id) dateFormatForCalendarUnit:(unsigned long long)a;
 - (void) setTodaySinceReferenceDate:(double)a;
 - (id) todayDateComponents;
 - (void) setOriginatingDate:(id)a;
 - (void) setBaseDateComponents:(id)a;
 - (void) setBaseDate:(id)a;
 - (void) setYearsSinceBaseDate:(long long)a;
 - (id) baseDateComponents;
 - (id) baseDate;
 - (id) amPmFont;
 - (id) sizedFont;
 - (double) totalComponentWidthWithFont:(id)a;
 - (double) widthForCalendarUnit:(unsigned long long)afont:(id)bmaxWidth:(double)c;
 - (void) setNumberOfComponents:(unsigned long long)a;
 - (id) localizedFormatString;
 - (long long) numberOfRowsForCalendarUnit:(unsigned long long)a;
 - (void) clearBaseDate;
 - (void) setLocalizedFormatString:(id)a;
 - (long long) _yearlessYearForMonth:(long long)a;
 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a;
 - ({_NSRange=QQ}) rangeForCalendarUnit:(unsigned long long)a;
 - (long long) _incrementForStaggeredTimeIntervals;
 - (id) _dateForYearRow:(long long)a;
 - (long long) secondForRow:(long long)a;
 - (long long) dayForRow:(long long)a;
 - (long long) monthForRow:(long long)a;
 - (long long) yearForRow:(long long)a;
 - (long long) eraForYearRow:(long long)a;
 - (long long) valueForRow:(long long)ainCalendarUnit:(unsigned long long)b;
 - (id) _dateByEnsuringValue:(long long)aforCalendarUnit:(unsigned long long)b;
 - (id) dateForRow:(long long)ainCalendarUnit:(unsigned long long)b;
 - (long long) valueForDate:(id)adateComponents:(id)bcalendarUnit:(unsigned long long)c;
 - (long long) rowForValue:(long long)aforCalendarUnit:(unsigned long long)bcurrentRow:(long long)c;
 - (long long) rowForDate:(id)adateComponents:(id)bcomponent:(long long)ccurrentRow:(long long)d;
 - (void) setSelectedDateComponents:(id)a;
 - (void) _updateSelectedDateComponentsWithNewValueInComponent:(long long)ausingSelectionBarValue:(BOOL)b;
 - (id) originatingDate;
 - (BOOL) _monthExists:(long long)ainYear:(long long)b;
 - (long long) _numberOfDaysInDateComponents:(id)a;
 - (long long) titleAlignmentForCalendarUnit:(unsigned long long)a;
 - (id) titleForRow:(long long)ainComponent:(long long)b;
 - (BOOL) _shouldEnableValueForRow:(long long)acolumn:(long long)b;
 - (id) todayTextColor;
 - (BOOL) _isComponentScrolling:(long long)a;
 - (BOOL) _shouldEnableValueForRow:(long long)ainComponent:(long long)bcalendarUnit:(unsigned long long)c;
 - (BOOL) _scrollingAnyColumnExcept:(int)a;
 - (double) componentWidthForTwoDigitCalendarUnit:(unsigned long long)afont:(id)bmaxWidth:(double)c;
 - (double) todaySinceReferenceDate;
 - (long long) yearsSinceBaseDate;
 - (id) defaultTimeFont;
 - (long long) validateValue:(long long)aforCalendarUnit:(unsigned long long)b;
 - (id) minimumDateComponents;
 - (id) maximumDateComponents;
 - (id) init;
 - (void) setElements:(^Q)a;
 - (^Q) elements;
 - (id) font;


@end
