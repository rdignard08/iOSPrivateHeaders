
@interface NSUnitFormatter : NSFormatter {

    @"NSNumberFormatter" _numberFormatter;
    q _unitStyle;
    ^{UAMeasureFormat=} _formatter;
    ^{UPluralRules=} _prules;
    BOOL _modified;
    @"NSString" _localeID;
}

 - (id) numberFormatter;
 - (void) setNumberFormatter:(id)a;
 - (q) unitStyle;
 - (void) setUnitStyle:(q)a;
 - (id) unitStringFromValue:(d)aunit:(Q)b;
 - (id) stringForValue:(d)aunit:(Q)b;
 - (id) stringForValue1:(d)aunit1:(Q)bvalue2:(d)cunit2:(Q)d;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
