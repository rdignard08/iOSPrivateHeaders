
@protocol NSSecureCoding;
@interface TIKeyboardIntermediateText : NSObject <NSSecureCoding> {

    Q _selectionOffset;
    @"NSString" _inputString;
    @"NSString" _displayString;
    @"NSString" _searchString;
}
@property (nonatomic, assign, readonly) NSString* inputString;
@property (nonatomic, assign, readonly) NSString* displayString;
@property (nonatomic, assign, readonly) NSNumber* selectedRange;
@property (nonatomic, assign, readonly) NSString* searchString;
 + (BOOL) supportsSecureCoding;
 + (id) intermediateTextWithInputString:(id)adisplayString:(id)b;
 + (id) intermediateTextWithInputString:(id)adisplayString:(id)bselectionLocation:(Q)c;
 + (id) intermediateTextWithInputString:(id)adisplayString:(id)bselectionLocation:(Q)csearchString:(id)d;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) inputString;
 - (id) initWithInputString:(id)adisplayString:(id)bselectionLocation:(Q)csearchString:(id)d;
 - (id) displayString;
 - (id) searchString;
 - ({_NSRange=QQ}) selectedRange;


@end
