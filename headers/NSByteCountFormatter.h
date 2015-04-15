
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
 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (void) setFormattingContext:(long long)a;
 - (long long) formattingContext;
 - (BOOL) isPartialStringValid:(^@)aproposedSelectedRange:(^{_NSRange=QQ})boriginalString:(id)coriginalSelectedRange:({_NSRange=QQ})derrorDescription:(^@)e;
 - (void) setAllowedUnits:(unsigned long long)a;
 - (unsigned long long) allowedUnits;
 - (long long) countStyle;
 - (BOOL) allowsNonnumericFormatting;
 - (BOOL) includesUnit;
 - (BOOL) includesCount;
 - (BOOL) includesActualByteCount;
 - (BOOL) isAdaptive;
 - (BOOL) zeroPadsFractionDigits;
 - (void) setAdaptive:(BOOL)a;
 - (void) setAllowsNonnumericFormatting:(BOOL)a;
 - (void) setIncludesUnit:(BOOL)a;
 - (void) setIncludesCount:(BOOL)a;
 - (void) setCountStyle:(long long)a;
 - (void) setIncludesActualByteCount:(BOOL)a;
 - (void) setZeroPadsFractionDigits:(BOOL)a;
 - (id) stringFromByteCount:(long long)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
