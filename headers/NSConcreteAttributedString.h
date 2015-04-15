
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
 - (id) attributesAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(Q)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) initWithString:(id)a;
 - (Q) length;
 - (id) init;


@end
