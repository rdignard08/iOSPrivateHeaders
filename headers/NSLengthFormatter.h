
@interface NSLengthFormatter : NSFormatter {

    ^v _formatter;
    BOOL _isForPersonHeight;
    [2^v] _reserved;
}

 - (id) numberFormatter;
 - (void) setNumberFormatter:(id)a;
 - (long long) unitStyle;
 - (void) setUnitStyle:(long long)a;
 - (id) unitStringFromValue:(double)aunit:(long long)b;
 - (id) stringFromValue:(double)aunit:(long long)b;
 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (id) attributedStringForObjectValue:(id)awithDefaultAttributes:(id)b;
 - (BOOL) isForPersonHeightUse;
 - (long long) targetUnitFromMeters:(double)a;
 - (id) stringFromMeters:(double)a;
 - (void) setForPersonHeightUse:(BOOL)a;
 - (id) unitStringFromMeters:(double)ausedUnit:(^q)b;
 - (void) dealloc;
 - (id) init;


@end
