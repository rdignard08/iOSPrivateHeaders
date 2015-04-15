
@interface NSMassFormatter : NSFormatter {

    ^v _formatter;
    BOOL _isForPersonMassUse;
    [2^v] _reserved;
}

 - (id) stringFromKilograms:(double)a;
 - (id) numberFormatter;
 - (void) setNumberFormatter:(id)a;
 - (long long) unitStyle;
 - (void) setUnitStyle:(long long)a;
 - (long long) targetUnitFromKilograms:(double)a;
 - (id) unitStringFromValue:(double)aunit:(long long)b;
 - (id) stringFromValue:(double)aunit:(long long)b;
 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (id) attributedStringForObjectValue:(id)awithDefaultAttributes:(id)b;
 - (id) unitStringFromKilograms:(double)ausedUnit:(^q)b;
 - (BOOL) isForPersonMassUse;
 - (void) setForPersonMassUse:(BOOL)a;
 - (void) dealloc;
 - (id) init;


@end
