
@interface NSMassFormatter : NSFormatter {

    ^v _formatter;
    BOOL _isForPersonMassUse;
    [2^v] _reserved;
}

 - (id) stringFromKilograms:(double)a ;
 - (id) numberFormatter;
 - (void) setNumberFormatter:(id)a ;
 - (long long) unitStyle;
 - (void) setUnitStyle:(long long)a ;
 - (long long) targetUnitFromKilograms:(double)a ;
 - (id) unitStringFromValue:(double)a unit:(long long)b ;
 - (id) stringFromValue:(double)a unit:(long long)b ;
 - (BOOL) getObjectValue:(o^@)a forString:(id)b errorDescription:(o^@)c ;
 - (id) stringForObjectValue:(id)a ;
 - (id) attributedStringForObjectValue:(id)a withDefaultAttributes:(id)b ;
 - (id) unitStringFromKilograms:(double)a usedUnit:(^q)b ;
 - (BOOL) isForPersonMassUse;
 - (void) setForPersonMassUse:(BOOL)a ;
 - (void) dealloc;
 - (id) init;


@end
