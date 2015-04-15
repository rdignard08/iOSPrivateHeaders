
@interface NSByteCountFormatter : NSFormatter {

    I _allowedUnits;
    c _countStyle;
    BOOL _allowsNonnumericFormatting;
    BOOL _includesUnit;
    BOOL _includesCount;
    BOOL _includesActualByteCount;
    BOOL _adaptive;
    BOOL _zeroPadsFractionDigits;
    i _formattingContext;
    [5i] _reserved;
}
 + (id) stringFromByteCount:(q)acountStyle:(q)b;

 - (Q) _options;
 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (void) setFormattingContext:(q)a;
 - (q) formattingContext;
 - (BOOL) isPartialStringValid:(^@)aproposedSelectedRange:(^{_NSRange=QQ})boriginalString:(id)coriginalSelectedRange:({_NSRange=QQ})derrorDescription:(^@)e;
 - (void) setAllowedUnits:(Q)a;
 - (Q) allowedUnits;
 - (q) countStyle;
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
 - (void) setCountStyle:(q)a;
 - (void) setIncludesActualByteCount:(BOOL)a;
 - (void) setZeroPadsFractionDigits:(BOOL)a;
 - (id) stringFromByteCount:(q)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
