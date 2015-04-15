
@interface NSConcreteAttributedString : NSAttributedString {

    NSString* string;
    NSRLEArray* attributes;
}

 - (id) initWithString:(id)a attributes:(id)b ;
 - (id) initWithAttributedString:(id)a ;
 - (id) _runArrayHoldingAttributes;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (id) initWithString:(id)a ;
 - (unsigned long long) length;
 - (id) init;


@end
