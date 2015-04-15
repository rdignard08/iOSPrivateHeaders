
@interface NSUnitFormatter : NSFormatter {

    NSNumberFormatter* _numberFormatter;
    long long _unitStyle;
    ^{UAMeasureFormat=} _formatter;
    ^{UPluralRules=} _prules;
    BOOL _modified;
    NSString* _localeID;
}

 - (id) numberFormatter;
 - (void) setNumberFormatter:(id)a;
 - (long long) unitStyle;
 - (void) setUnitStyle:(long long)a;
 - (id) unitStringFromValue:(double)aunit:(unsigned long long)b;
 - (id) stringForValue:(double)aunit:(unsigned long long)b;
 - (id) stringForValue1:(double)aunit1:(unsigned long long)bvalue2:(double)cunit2:(unsigned long long)d;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
