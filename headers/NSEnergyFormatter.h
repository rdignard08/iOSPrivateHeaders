
@interface NSEnergyFormatter : NSFormatter {

    ^v _formatter;
    BOOL _isForFoodEnergyUse;
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
 - (BOOL) isForFoodEnergyUse;
 - (long long) targetUnitFromJoules:(double)a;
 - (id) stringFromJoules:(double)a;
 - (id) unitStringFromJoules:(double)ausedUnit:(^q)b;
 - (void) setForFoodEnergyUse:(BOOL)a;
 - (void) dealloc;
 - (id) init;


@end
