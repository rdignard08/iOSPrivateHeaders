
@protocol NSCopying, NSCoding;
@interface NSFormatter : NSObject <NSCopying, NSCoding> {

}

 - (BOOL) getObjectValue:(o^@)a forString:(id)b errorDescription:(o^@)c ;
 - (id) stringForObjectValue:(id)a ;
 - (id) attributedStringForObjectValue:(id)a withDefaultAttributes:(id)b ;
 - (BOOL) getObjectValue:(o^@)a forString:(id)b range:(N^{_NSRange=QQ})c error:(o^@)d ;
 - (BOOL) isPartialStringValid:(id)a newEditingString:(^@)b errorDescription:(^@)c ;
 - (id) editingStringForObjectValue:(id)a ;
 - (BOOL) isPartialStringValid:(^@)a proposedSelectedRange:(^{_NSRange=QQ})b originalString:(id)c originalSelectedRange:({_NSRange=QQ})d errorDescription:(^@)e ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
