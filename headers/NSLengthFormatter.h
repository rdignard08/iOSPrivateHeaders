
@interface NSLengthFormatter : NSFormatter {

    ^v _formatter;
    BOOL _isForPersonHeight;
    [2^v] _reserved;
}

 - (id) numberFormatter;
 - (void) setNumberFormatter:(id)a;
 - (q) unitStyle;
 - (void) setUnitStyle:(q)a;
 - (id) unitStringFromValue:(d)aunit:(q)b;
 - (id) stringFromValue:(d)aunit:(q)b;
 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (id) attributedStringForObjectValue:(id)awithDefaultAttributes:(id)b;
 - (BOOL) isForPersonHeightUse;
 - (q) targetUnitFromMeters:(d)a;
 - (id) stringFromMeters:(d)a;
 - (void) setForPersonHeightUse:(BOOL)a;
 - (id) unitStringFromMeters:(d)ausedUnit:(^q)b;
 - (void) dealloc;
 - (id) init;


@end
