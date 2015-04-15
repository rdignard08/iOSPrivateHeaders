
@interface NSUnitFormatter : NSFormatter {

    NSNumberFormatter* _numberFormatter;
    long long _unitStyle;
    ^{UAMeasureFormat=} _formatter;
    ^{UPluralRules=} _prules;
    BOOL _modified;
    NSString* _localeID;
}

 - (id) numberFormatter;
 - (void) setNumberFormatter:(id)a ;
 - (long long) unitStyle;
 - (void) setUnitStyle:(long long)a ;
 - (id) unitStringFromValue:(double)a unit:(unsigned long long)b ;
 - (id) stringForValue:(double)a unit:(unsigned long long)b ;
 - (id) stringForValue1:(double)a unit1:(unsigned long long)b value2:(double)c unit2:(unsigned long long)d ;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
