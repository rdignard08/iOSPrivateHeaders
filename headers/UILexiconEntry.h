
@protocol NSCopying;
@interface UILexiconEntry : NSObject <NSCopying> {

    NSString* _userInput;
    NSString* _documentText;
}
@property (nonatomic, assign, readonly) NSString* documentText;
@property (nonatomic, assign, readonly) NSString* userInput;
 + (id) _entryWithTILexiconEntry:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (id) userInput;
 - (id) documentText;


@end
