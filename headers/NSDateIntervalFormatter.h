
@interface NSDateIntervalFormatter : NSFormatter {

    @"NSLocale" _locale;
    @"NSCalendar" _calendar;
    @"NSTimeZone" _timeZone;
    @"NSString" _dateTemplate;
    @"NSString" _dateTemplateFromStyles;
    ^v _formatter;
    Q _dateStyle;
    Q _timeStyle;
    BOOL _modified;
    BOOL _useTemplate;
    @"NSObject<OS_dispatch_semaphore>" _lock;
    [4^v] _reserved;
}

 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (id) attributedStringForObjectValue:(id)awithDefaultAttributes:(id)b;
 - (void) setDateStyle:(Q)a;
 - (void) setTimeStyle:(Q)a;
 - (Q) dateStyle;
 - (Q) timeStyle;
 - (BOOL) isPartialStringValid:(id)anewEditingString:(^@)berrorDescription:(^@)c;
 - (id) editingStringForObjectValue:(id)a;
 - (BOOL) isPartialStringValid:(^@)aproposedSelectedRange:(^{_NSRange=QQ})boriginalString:(id)coriginalSelectedRange:({_NSRange=QQ})derrorDescription:(^@)e;
 - (id) stringFromDate:(id)atoDate:(id)b;
 - (id) dateTemplate;
 - (void) setDateTemplate:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setTimeZone:(id)a;
 - (void) setLocale:(id)a;
 - (id) locale;
 - (id) timeZone;
 - (id) calendar;
 - (void) setCalendar:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end