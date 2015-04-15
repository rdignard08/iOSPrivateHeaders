
@interface NSEnergyFormatter : NSFormatter {

    ^v _formatter;
    BOOL _isForFoodEnergyUse;
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
 - (BOOL) isForFoodEnergyUse;
 - (long long) targetUnitFromJoules:(double)a ;
 - (id) stringFromJoules:(double)a ;
 - (id) unitStringFromJoules:(double)a usedUnit:(^q)b ;
 - (void) setForFoodEnergyUse:(BOOL)a ;
 - (void) dealloc;
 - (id) init;


@end
