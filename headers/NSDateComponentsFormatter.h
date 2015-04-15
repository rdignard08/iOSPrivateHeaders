
@interface NSDateComponentsFormatter : NSFormatter {

    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} _lock;
    ^v _fmt;
    ^v _unused;
    @"NSString" _fmtLocaleIdent;
    @"NSCalendar" _calendar;
    @"NSDate" _referenceDate;
    @"NSNumberFormatter" _unitFormatter;
    Q _allowedUnits;
    q _formattingContext;
    q _unitsStyle;
    Q _zeroFormattingBehavior;
    q _maximumUnitCount;
    BOOL _allowsFractionalUnits;
    BOOL _collapsesLargestUnit;
    BOOL _includesApproximationPhrase;
    BOOL _includesTimeRemainingPhrase;
    ^v _reserved;
}
 + (id) localizedStringFromDateComponents:(id)aunitsStyle:(q)b;

 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (void) setFormattingContext:(q)a;
 - (q) formattingContext;
 - (id) stringFromDate:(id)atoDate:(id)b;
 - (id) referenceDate;
 - (void) _flushFormatterCache;
 - (id) _calendarOrCanonicalCalendar;
 - (id) _stringFromDateComponents:(id)a;
 - (id) _calendarFromDateComponents:(id)a;
 - (id) _canonicalizedDateComponents:(id)awithCalendar:(id)busedUnits:(^Q)c;
 - (void) _ensureUnitFormatterWithLocale:(id)a;
 - (void) setUnitsStyle:(q)a;
 - (id) stringFromDateComponents:(id)a;
 - (id) _stringFromTimeInterval:(d)a;
 - (id) stringFromTimeInterval:(d)a;
 - (void) setAllowedUnits:(Q)a;
 - (Q) allowedUnits;
 - (void) setMaximumUnitCount:(q)a;
 - (q) maximumUnitCount;
 - (void) setAllowsFractionalUnits:(BOOL)a;
 - (BOOL) allowsFractionalUnits;
 - (void) setCollapsesLargestUnit:(BOOL)a;
 - (BOOL) collapsesLargestUnit;
 - (q) unitsStyle;
 - (void) setZeroFormattingBehavior:(Q)a;
 - (Q) zeroFormattingBehavior;
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
