
@interface NSDateIntervalFormatter : NSFormatter {

    NSLocale* _locale;
    NSCalendar* _calendar;
    NSTimeZone* _timeZone;
    NSString* _dateTemplate;
    NSString* _dateTemplateFromStyles;
    ^v _formatter;
    unsigned long long _dateStyle;
    unsigned long long _timeStyle;
    BOOL _modified;
    BOOL _useTemplate;
    NSObject<OS_dispatch_semaphore>* _lock;
    [4^v] _reserved;
}

 - (BOOL) getObjectValue:(o^@)a forString:(id)b errorDescription:(o^@)c ;
 - (id) stringForObjectValue:(id)a ;
 - (id) attributedStringForObjectValue:(id)a withDefaultAttributes:(id)b ;
 - (void) setDateStyle:(unsigned long long)a ;
 - (void) setTimeStyle:(unsigned long long)a ;
 - (unsigned long long) dateStyle;
 - (unsigned long long) timeStyle;
 - (BOOL) isPartialStringValid:(id)a newEditingString:(^@)b errorDescription:(^@)c ;
 - (id) editingStringForObjectValue:(id)a ;
 - (BOOL) isPartialStringValid:(^@)a proposedSelectedRange:(^{_NSRange=QQ})b originalString:(id)c originalSelectedRange:({_NSRange=QQ})d errorDescription:(^@)e ;
 - (id) stringFromDate:(id)a toDate:(id)b ;
 - (id) dateTemplate;
 - (void) setDateTemplate:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) setTimeZone:(id)a ;
 - (void) setLocale:(id)a ;
 - (id) locale;
 - (id) timeZone;
 - (id) calendar;
 - (void) setCalendar:(id)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
