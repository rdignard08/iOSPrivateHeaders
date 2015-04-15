
@protocol NSCopying, NSSecureCoding;
@interface TILexicon : NSObject <NSCopying, NSSecureCoding> {

    NSArray _entries;
}
@property (nonatomic, assign, readonly) NSArray* entries;
 + (BOOL) supportsSecureCoding;
 + (void) requestLexiconFromBundlePath:(id)acompletionHandler:(@?)b;
 + (id) lexiconWithEntries:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) entries;


@end
