
@interface NSLengthFormatter : NSFormatter {

    ^v _formatter;
    BOOL _isForPersonHeight;
    [2^v] _reserved;
}

 - (id) numberFormatter;
 - (void) setNumberFormatter:(id)a ;
 - (long long) unitStyle;
 - (void) setUnitStyle:(long long)a ;
 - (id) unitStringFromValue:(double)a unit:(long long)b ;
 - (id) stringFromValue:(double)a unit:(long long)b ;
 - (BOOL) getObjectValue:(o^@)a forString:(id)b errorDescription:(o^@)c ;
 - (id) stringForObjectValue:(id)a ;
 - (id) attributedStringForObjectValue:(id)a withDefaultAttributes:(id)b ;
 - (BOOL) isForPersonHeightUse;
 - (long long) targetUnitFromMeters:(double)a ;
 - (id) stringFromMeters:(double)a ;
 - (void) setForPersonHeightUse:(BOOL)a ;
 - (id) unitStringFromMeters:(double)a usedUnit:(^q)b ;
 - (void) dealloc;
 - (id) init;


@end
