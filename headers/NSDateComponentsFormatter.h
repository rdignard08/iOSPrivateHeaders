
@interface NSDateComponentsFormatter : NSFormatter {

    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} _lock;
    ^v _fmt;
    ^v _unused;
    @"NSString" _fmtLocaleIdent;
    @"NSCalendar" _calendar;
    @"NSDate" _referenceDate;
    @"NSNumberFormatter" _unitFormatter;
    unsigned long long _allowedUnits;
    long long _formattingContext;
    long long _unitsStyle;
    unsigned long long _zeroFormattingBehavior;
    long long _maximumUnitCount;
    BOOL _allowsFractionalUnits;
    BOOL _collapsesLargestUnit;
    BOOL _includesApproximationPhrase;
    BOOL _includesTimeRemainingPhrase;
    ^v _reserved;
}
 + (id) localizedStringFromDateComponents:(id)aunitsStyle:(long long)b;

 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (void) setFormattingContext:(long long)a;
 - (long long) formattingContext;
 - (id) stringFromDate:(id)atoDate:(id)b;
 - (id) referenceDate;
 - (void) _flushFormatterCache;
 - (id) _calendarOrCanonicalCalendar;
 - (id) _stringFromDateComponents:(id)a;
 - (id) _calendarFromDateComponents:(id)a;
 - (id) _canonicalizedDateComponents:(id)awithCalendar:(id)busedUnits:(^Q)c;
 - (void) _ensureUnitFormatterWithLocale:(id)a;
 - (void) setUnitsStyle:(long long)a;
 - (id) stringFromDateComponents:(id)a;
 - (id) _stringFromTimeInterval:(double)a;
 - (id) stringFromTimeInterval:(double)a;
 - (void) setAllowedUnits:(unsigned long long)a;
 - (unsigned long long) allowedUnits;
 - (void) setMaximumUnitCount:(long long)a;
 - (long long) maximumUnitCount;
 - (void) setAllowsFractionalUnits:(BOOL)a;
 - (BOOL) allowsFractionalUnits;
 - (void) setCollapsesLargestUnit:(BOOL)a;
 - (BOOL) collapsesLargestUnit;
 - (long long) unitsStyle;
 - (void) setZeroFormattingBehavior:(unsigned long long)a;
 - (unsigned long long) zeroFormattingBehavior;
 - (void) setIncludesApproximationPhrase:(BOOL)a;
 - (BOOL) includesApproximationPhrase;
 - (void) setIncludesTimeRemainingPhrase:(BOOL)a;
 - (BOOL) includesTimeRemainingPhrase;
 - (void) setReferenceDate:(id)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) calendar;
 - (void) setCalendar:(id)a;
 - (id) init;


@end
