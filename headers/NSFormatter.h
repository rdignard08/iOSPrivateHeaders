
@protocol NSCopying, NSCoding;
@interface NSFormatter : NSObject <NSCopying, NSCoding> {

}

 - (BOOL) getObjectValue:(o^@)aforString:(id)berrorDescription:(o^@)c;
 - (id) stringForObjectValue:(id)a;
 - (id) attributedStringForObjectValue:(id)awithDefaultAttributes:(id)b;
 - (BOOL) getObjectValue:(o^@)aforString:(id)brange:(N^{_NSRange=QQ})cerror:(o^@)d;
 - (BOOL) isPartialStringValid:(id)anewEditingString:(^@)berrorDescription:(^@)c;
 - (id) editingStringForObjectValue:(id)a;
 - (BOOL) isPartialStringValid:(^@)aproposedSelectedRange:(^{_NSRange=QQ})boriginalString:(id)coriginalSelectedRange:({_NSRange=QQ})derrorDescription:(^@)e;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
