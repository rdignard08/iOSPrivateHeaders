
@interface NSMassFormatter : NSFormatter {

    ^v _formatter;
    BOOL _isForPersonMassUse;
    [2^v] _reserved;
}

 - (id) stringFromKilograms:(d)a;
 - (id) numberFormatter;
 - (void) setNumberFormatter:(id)a;
 - (q) unitStyle;
 - (void) setUnitStyle:(q)a;
 - (q) targetUnitFromKilograms:(d)a;
 - (id) unitStringFromValue:(d)aunit:(q)b;
 - (id) stringFromValue:(d)aunit:(q)b;
 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (id) attributedStringForObjectValue:(id)awithDefaultAttributes:(id)b;
 - (id) unitStringFromKilograms:(d)ausedUnit:(^q)b;
 - (BOOL) isForPersonMassUse;
 - (void) setForPersonMassUse:(BOOL)a;
 - (void) dealloc;
 - (id) init;


@end
