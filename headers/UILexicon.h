
@protocol NSCopying;
@interface UILexicon : NSObject <NSCopying> {

    NSArray* _entries;
}
@property (nonatomic, assign, readonly) NSArray* entries;
 + (id) _lexiconWithTILexicon:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (id) entries;


@end
