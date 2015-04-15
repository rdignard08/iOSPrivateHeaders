
@interface NSConcreteAttributedString : NSAttributedString {

    @"NSString" string;
    @"NSRLEArray" attributes;
}

 - (id) initWithString:(id)aattributes:(id)b;
 - (id) initWithAttributedString:(id)a;
 - (id) _runArrayHoldingAttributes;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(unsigned long long)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) initWithString:(id)a;
 - (unsigned long long) length;
 - (id) init;


@end
