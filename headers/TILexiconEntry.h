
@protocol NSCopying, NSSecureCoding;
@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding> {

    NSString* _userInput;
    NSString* _documentText;
}
@property (nonatomic, assign, readonly) NSString* documentText;
@property (nonatomic, assign, readonly) NSString* userInput;
 + (BOOL) supportsSecureCoding;
 + (id) entryWithDocumentText:(id)auserInput:(id)b;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) userInput;
 - (id) documentText;


@end
