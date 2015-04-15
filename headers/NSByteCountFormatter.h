
@interface NSByteCountFormatter : NSFormatter {

    unsigned int _allowedUnits;
    char _countStyle;
    BOOL _allowsNonnumericFormatting;
    BOOL _includesUnit;
    BOOL _includesCount;
    BOOL _includesActualByteCount;
    BOOL _adaptive;
    BOOL _zeroPadsFractionDigits;
    int _formattingContext;
    [5i] _reserved;
}
 + (id) stringFromByteCount:(long long)acountStyle:(long long)b;

 - (unsigned long long) _options;
 - (BOOL) getObjectValue:(o^@)a forString:(id)b errorDescription:(o^@)c ;
 - (id) stringForObjectValue:(id)a ;
 - (void) setFormattingContext:(long long)a ;
 - (long long) formattingContext;
 - (BOOL) isPartialStringValid:(^@)a proposedSelectedRange:(^{_NSRange=QQ})b originalString:(id)c originalSelectedRange:({_NSRange=QQ})d errorDescription:(^@)e ;
 - (void) setAllowedUnits:(unsigned long long)a ;
 - (unsigned long long) allowedUnits;
 - (long long) countStyle;
 - (BOOL) allowsNonnumericFormatting;
 - (BOOL) includesUnit;
 - (BOOL) includesCount;
 - (BOOL) includesActualByteCount;
 - (BOOL) isAdaptive;
 - (BOOL) zeroPadsFractionDigits;
 - (void) setAdaptive:(BOOL)a ;
 - (void) setAllowsNonnumericFormatting:(BOOL)a ;
 - (void) setIncludesUnit:(BOOL)a ;
 - (void) setIncludesCount:(BOOL)a ;
 - (void) setCountStyle:(long long)a ;
 - (void) setIncludesActualByteCount:(BOOL)a ;
 - (void) setZeroPadsFractionDigits:(BOOL)a ;
 - (id) stringFromByteCount:(long long)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
