
@interface UIDateLabel : UILabel {

    BOOL _forceTimeOnly;
    @"NSDate" _date;
    BOOL _boldForAllLocales;
    @"NSDate" _yesterday;
    @"NSDate" _today;
    @"NSDate" _noon;
    @"NSDate" _tomorrow;
    @"NSDate" _previousWeek;
    @"UIFont" _timeDesignatorFont;
    @"NSCalendar" _calendar;
    BOOL _shouldRecomputeText;
    d _paddingFromTimeToDesignator;
}
 + (id) defaultFont;
 + (id) _timeOnlyDateFormatter;
 + (id) _relativeDateFormatter;
 + (id) _weekdayDateFormatter;
 + (id) _dateFormatter;
 + (id) _timeFormatWithoutDesignator;
 + (id) amString;
 + (id) pmString;

 - (void) dealloc;
 - (void) invalidate;
 - (d) timeInterval;
 - (id) date;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (id) _stringDrawingContext;
 - (void) drawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setShouldRecomputeText:(BOOL)a;
 - (void) _recomputeTextIfNecessary;
 - ({CGSize=dd}) timeDesignatorSize;
 - (id) timeDesignator;
 - (BOOL) timeDesignatorAppearsBeforeTime;
 - (id) timeDesignatorFont;
 - (id) _calendar;
 - (id) _todayDate;
 - (id) _dateWithDayDiffFromToday:(q)a;
 - (void) setDate:(id)a;
 - (BOOL) shouldRecomputeText;
 - (id) _dateString;
 - (BOOL) boldForAllLocales;
 - (void) _didUpdateDate;
 - (d) _today;
 - (d) _tomorrow;
 - (d) _yesterday;
 - (d) _lastWeek;
 - (BOOL) use24HourTime;
 - (d) _noon;
 - (void) setForceTimeOnly:(BOOL)a;
 - (void) setBoldForAllLocales:(BOOL)a;
 - (void) setTimeInterval:(d)a;
 - (BOOL) forceTimeOnly;
 - (d) paddingFromTimeToDesignator;
 - (void) setPaddingFromTimeToDesignator:(d)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) font;
 - (id) text;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
