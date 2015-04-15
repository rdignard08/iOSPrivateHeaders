
@interface NSEnergyFormatter : NSFormatter {

    ^v _formatter;
    BOOL _isForFoodEnergyUse;
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
 - (BOOL) isForFoodEnergyUse;
 - (q) targetUnitFromJoules:(d)a;
 - (id) stringFromJoules:(d)a;
 - (id) unitStringFromJoules:(d)ausedUnit:(^q)b;
 - (void) setForFoodEnergyUse:(BOOL)a;
 - (void) dealloc;
 - (id) init;


@end
